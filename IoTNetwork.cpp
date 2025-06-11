// Header dan library standard
#include "IoTNetwork.h"
#include <iostream>
#include <iomanip>      // Untuk manipulasi tampilan output (setw, setprecision)
#include <queue>        // Untuk menyimpan pengukuran dalam urutan (FIFO)
#include <stack>        // Untuk menyimpan histori pengukuran (LIFO)
#include <vector>       // Untuk manipulasi list sensor dalam sorting
#include <algorithm>    // Untuk fungsi sort()
#include <QString>      // Jika digunakan di Qt
#include <sstream>      // Untuk membentuk output string
#include <cstdlib>      // Untuk rand()
#include <ctime>        // Untuk time() pada srand()
#include <cctype>    // untuk ::tolower
#include <unordered_map> // untuk map nilai setiap tipe sensor

using namespace std;

// Konstruktor: inisialisasi linked list kosong
IoTNetwork::IoTNetwork() : head(nullptr) {}

// Array lokasi dan tipe sensor yang digunakan untuk data acak
const std::string LOCATIONS[] = {
    "Ruang Lab A", "Ruang Lab B", "Ruang Server", "Ruang Kelas 1", "Ruang Kelas 2",
    "Gudang", "Lobby", "Lorong Utama", "Atap Gedung", "Basement",
    "Taman Depan", "Taman Belakang", "Parkiran Timur", "Parkiran Barat",
    "Toilet Pria", "Toilet Wanita", "Lift", "Tangga Darurat", "Ruang Admin",
    "Ruang Dosen", "Ruang Mahasiswa", "Ruang Meeting", "Kafetaria", "Kantin",
    "Pos Satpam", "Gerbang Utama", "Gudang IT", "Panel Listrik", "Ruang CCTV",
    "Ruang Pendingin", "Ruang AC Sentral", "Ruang Arsip", "Ruang Rapat Besar", "Studio Podcast", "Ruang Podcast",
    "Ruang Penyimpanan Bahan Kimia", "Ruang Kesehatan", "Ruang Konseling",
    "Laboratorium Biologi", "Laboratorium Fisika", "Laboratorium Kimia",
    "Studio Rekaman", "Studio Editing", "Ruang Fotokopi", "Ruang Server Cadangan",
    "Ruang Maintenance", "Ruang Penelitian", "Ruang Penjurusan", "Ruang Ekstrakurikuler",
    "Ruang Proyektor", "Ruang Simulasi", "Ruang Observasi", "Ruang Isolasi",     "Ruang Dimensi Alternatif", "Lorong Waktu", "Server Matrix", "Gudang Rahasia",
    "Kamar Batman", "Area Terlarang", "Ruang Penuh Kabel", "Ruang Tanpa Sinyal",
    "Portal Quantum", "Ruang Ilusi", "Ruang Serbaguna Tapi Tidak Pernah Dipakai",
    "Lift Tapi Tangga", "Ruang Tidak Terdaftar", "Kamar 404", "Server Utama Tapi Bohongan",
    "Ruang Anti-Gravitasi", "Ruang Simulasi AI", "Gudang Alien", "Ruang Hantu",
    "Lorong Gelap yang Sering Mati Lampu"

};

const std::unordered_map<std::string, std::pair<double, double>> SENSOR_VALID_RANGES = {
    {"Suhu", {-50, 150}},
    {"Kelembaban", {0, 100}},
    {"Gerak", {0, 1}},
    {"Cahaya", {0, 10000}},  // dalam lux
    {"Gas", {0, 1000}},      // ppm
    {"Asap", {0, 1000}},     // ppm
    {"Tekanan", {300, 1100}}, // hPa
    {"Getaran", {0, 100}},    // misalnya mm/s
    {"Pintu", {0, 1}},
    {"Jarak", {0, 1000}},     // cm
    {"Ketinggian", {0, 10000}}, // m
    {"Arus", {0, 100}},       // A
    {"Tegangan", {0, 500}},   // V
    {"Suara", {0, 140}},      // dB
    {"CO2", {0, 5000}},       // ppm
    {"PM2.5", {0, 500}},      // µg/m³
    {"Amonia", {0, 1000}},    // ppm
    {"Kebocoran Air", {0, 1}},
    {"RFID", {0, 1}},
    {"Magnet", {0, 1}},
    {"Infrared", {0, 1}},
    {"Ultrasonik", {0, 1000}}, // cm
    {"Radar", {0, 1000}},      // cm
    {"QR Reader", {0, 1}},
    {"Camera", {0, 1}},
    {"Accelerometer", {-16, 16}}, // g
    {"Gyroscope", {-2000, 2000}}, // deg/s
    {"Kompas", {0, 360}},      // degrees
    {"Barometer", {300, 1100}} // hPa
};


// Fungsi untuk menambahkan sensor baru ke dalam linked list
string IoTNetwork::addSensor(int id, const string &location, const string &type)
{
    // Cek apakah ID sudah digunakan
    SensorNode *current = head;
    while (current != nullptr)
    {
        if (current->id == id)
        {
            // Return error jika ID sudah ada
            string msg = "Sensor dengan ID " + to_string(id) + " sudah ada.";
            cout << msg << endl;
            return msg;
        }
        current = current->next;
    }

    // Tambahkan node baru di awal linked list
    SensorNode *newNode = new SensorNode(id, location, type);
    newNode->next = head;
    head = newNode;

    // Return pesan sukses
    string msg = "Sensor ditambahkan:\nID: " + to_string(id) +
                 "\nLokasi: " + location + "\nTipe: " + type;
    cout << msg << endl;
    return msg;
}


// Fungsi untuk menghapus sensor berdasarkan ID
string IoTNetwork::removeSensor(int id)
{
    // Jika list kosong
    if (head == nullptr)
    {
        string msg = "Sensor tidak ditemukan. List kosong.";
        cout << msg << endl;
        return msg;
    }

    // Jika sensor yang dihapus adalah head
    if (head->id == id)
    {
        SensorNode *temp = head;
        head = head->next;
        delete temp;
        string msg = "Sensor dengan ID " + to_string(id) + " berhasil dihapus.";
        cout << msg << endl;
        return msg;
    }

    // Cari node sebelumnya
    SensorNode *current = head;
    while (current->next != nullptr && current->next->id != id)
    {
        current = current->next;
    }

    // Jika sensor tidak ditemukan
    if (current->next == nullptr)
    {
        string msg = "Sensor dengan ID " + to_string(id) + " tidak ditemukan.";
        cout << msg << endl;
        return msg;
    }

    // Hapus node yang ditemukan
    SensorNode *temp = current->next;
    current->next = current->next->next;
    delete temp;
    string msg = "Sensor dengan ID " + to_string(id) + " berhasil dihapus.";
    cout << msg << endl;
    return msg;
}

// Fungsi untuk menambahkan pengukuran pada sensor
string toLower(const string &str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

string IoTNetwork::addMeasurement(int sensorId, double value)
{
    SensorNode *current = head;
    while (current != nullptr)
    {
        if (current->id == sensorId)
        {
            // Normalisasi nama tipe ke lowercase untuk pencocokan
            string typeLower = toLower(current->type);

            // Cari kecocokan di SENSOR_VALID_RANGES (case-insensitive)
            auto it = find_if(
                SENSOR_VALID_RANGES.begin(),
                SENSOR_VALID_RANGES.end(),
                [&typeLower](const auto &entry) {
                    return toLower(entry.first) == typeLower;
                });

            if (it == SENSOR_VALID_RANGES.end())
            {
                string msg = "Tipe sensor \"" + current->type + "\" tidak dikenali atau belum memiliki rentang valid.";
                cout << msg << endl;
                return msg;
            }

            // Validasi nilai terhadap rentang
            double minVal = it->second.first;
            double maxVal = it->second.second;

            if (value < minVal || value > maxVal)
            {
                ostringstream oss;
                oss << fixed << setprecision(6);
                oss << "  - Nilai " << value
                    << " di luar rentang valid untuk sensor tipe "
                    << current->type << " (" << minVal << " s.d. " << maxVal << ").";
                string msg = oss.str();
                cout << msg << endl;
                return msg;
            }

            // Tambah ke antrian pengukuran dan histori
            current->measurements.push(value);
            current->measurementHistory.push(value);

            string msg = "Measurement " + to_string(value) + " ditambahkan ke sensor ID " + to_string(sensorId) + ".";
            cout << msg << endl;
            return msg;
        }
        current = current->next;
    }

    string msg = "Sensor dengan ID: " + to_string(sensorId) + " tidak ditemukan.";
    cout << msg << endl;
    return msg;
}



// Fungsi untuk menghitung rata-rata pengukuran dari sensor tertentu
string IoTNetwork::getAverageMeasurement(int sensorId)
{
    SensorNode *current = head;
    while (current != nullptr)
    {
        if (current->id == sensorId)
        {
            if (current->measurements.empty())
            {
                string msg = "Sensor ID " + to_string(sensorId) + " tidak memiliki pengukuran.";
                cout << msg << endl;
                return msg;
            }

            // Hitung rata-rata dari data dalam queue
            queue<double> tempQueue = current->measurements;
            double sum = 0.0;
            int count = 0;

            while (!tempQueue.empty())
            {
                sum += tempQueue.front();
                tempQueue.pop();
                count++;
            }

            double average = sum / count;
            ostringstream oss;
            oss << fixed << setprecision(2);
            oss << "Rata-rata pengukuran untuk sensor ID " << sensorId << " adalah " << average;
            string msg = oss.str();
            cout << msg << endl;
            return msg;
        }
        current = current->next;
    }

    string msg = "Sensor dengan ID " + to_string(sensorId) + " tidak ditemukan.";
    cout << msg << endl;
    return msg;
}

// Fungsi untuk mencari semua sensor di lokasi tertentu

string IoTNetwork::findSensors(const string &locationInput)
{
    ostringstream oss;

    if (head == nullptr)
    {
        string msg = "Tidak ada sensor dalam jaringan.";
        cout << msg << endl;
        return msg;
    }

    // Ubah lokasi input ke lowercase
    string targetLocation = locationInput;
    transform(targetLocation.begin(), targetLocation.end(), targetLocation.begin(), ::tolower);

    bool found = false;
    oss << "Sensor yang mengandung lokasi \"" << locationInput << "\":\n";
    oss << left << setw(5) << "ID" << setw(15) << "Lokasi" << setw(15) << "Tipe" << "\n";

    SensorNode *current = head;
    while (current != nullptr)
    {
        // Ubah lokasi node ke lowercase
        string nodeLocation = current->location;
        transform(nodeLocation.begin(), nodeLocation.end(), nodeLocation.begin(), ::tolower);

        // Cek apakah input merupakan bagian dari lokasi
        if (nodeLocation.find(targetLocation) != string::npos)
        {
            oss << left << setw(5) << current->id
                << setw(15) << current->location
                << setw(15) << current->type << "\n";
            found = true;
        }

        current = current->next;
    }

    string msg = found ? oss.str() : "Tidak ditemukan sensor dengan lokasi yang mengandung \"" + locationInput + "\".";
    cout << msg << endl;
    return msg;
}


// Fungsi untuk menampilkan semua sensor
string IoTNetwork::displaySensors()
{
    ostringstream oss;
    if (head == nullptr)
    {
        string msg = "Tidak ada sensor dalam jaringan.";
        cout << msg << endl;
        return msg;
    }

    oss << "\nDaftar Sensor:\n";
    oss << left << setw(5) << "ID" << setw(15) << "Lokasi" << setw(15) << "Tipe" << "\n";

    // Cetak semua node
    SensorNode *current = head;
    while (current != nullptr)
    {
        oss << left << setw(5) << current->id
            << setw(15) << current->location
            << setw(15) << current->type << "\n";
        current = current->next;
    }

    string msg = oss.str();
    cout << msg << endl;
    return msg;
}

// Fungsi untuk mengurutkan sensor berdasarkan lokasi
string IoTNetwork::sortAndDisplaySensorsByLocation()
{
    vector<SensorNode *> sensors;
    SensorNode *current = head;
    while (current != nullptr)
    {
        sensors.push_back(current);
        current = current->next;
    }

    if (sensors.empty())
    {
        string msg = "Tidak ada sensor dalam jaringan.";
        cout << msg << endl;
        return msg;
    }

    // Urutkan vector berdasarkan lokasi
    sort(sensors.begin(), sensors.end(), [](SensorNode *a, SensorNode *b) {
        return a->location < b->location;
    });

    ostringstream oss;
    oss << "Sensor diurutkan berdasarkan lokasi:\n";
    oss << left << setw(5) << "ID" << setw(15) << "Lokasi" << setw(15) << "Tipe" << "\n";

    for (SensorNode *sensor : sensors)
    {
        oss << left << setw(5) << sensor->id
            << setw(15) << sensor->location
            << setw(15) << sensor->type << "\n";
    }

    string msg = oss.str();
    cout << msg << endl;
    return msg;
}


string IoTNetwork::sortAndDisplaySensors(const string &criteriaInput)
{
    vector<SensorNode *> sensors;
    SensorNode *current = head;
    ostringstream oss;

    while (current != nullptr)
    {
        sensors.push_back(current);
        current = current->next;
    }

    if (sensors.empty())
    {
        string msg = "Tidak ada sensor dalam jaringan.";
        cout << msg << endl;
        return msg;
    }

    // Konversi criteria ke lowercase
    string criteria = criteriaInput;
    transform(criteria.begin(), criteria.end(), criteria.begin(), ::tolower);

    if (criteria == "id")
    {
        sort(sensors.begin(), sensors.end(), [](SensorNode *a, SensorNode *b) {
            return a->id < b->id;
        });
    }
    else if (criteria == "lokasi")
    {
        sort(sensors.begin(), sensors.end(), [](SensorNode *a, SensorNode *b) {
            return a->location < b->location;
        });
    }
    else if (criteria == "tipe")
    {
        sort(sensors.begin(), sensors.end(), [](SensorNode *a, SensorNode *b) {
            return a->type < b->type;
        });
    }
    else
    {
        oss << "Kriteria pengurutan tidak dikenali : " << criteriaInput << endl;
        string msg = oss.str();
        cout << msg;
        return msg;
    }

    oss << "\nSensor diurutkan berdasarkan " << criteria << ":" << endl;
    oss << left << setw(5) << "ID" << setw(15) << "Lokasi" << setw(15) << "Tipe" << endl;
    for (SensorNode *sensor : sensors)
    {
        oss << left << setw(5) << sensor->id
            << setw(15) << sensor->location
            << setw(15) << sensor->type << endl;
    }
    oss << endl;

    return oss.str();
}

// Fungsi undo untuk membatalkan pengukuran terakhir
string IoTNetwork::undoLastMeasurement(int sensorId)
{
    SensorNode *current = head;
    while (current != nullptr)
    {
        if (current->id == sensorId)
        {
            if (current->measurementHistory.empty())
            {
                string msg = "Tidak ada histori pengukuran untuk sensor ID " + to_string(sensorId) + ".";
                cout << msg << endl;
                return msg;
            }

            current->measurementHistory.pop();  // hapus dari stack

            // Hapus elemen terakhir dari queue (manual karena queue tidak punya pop_back)
            queue<double> tempQueue;
            int size = current->measurements.size();
            for (int i = 0; i < size - 1; ++i)
            {
                tempQueue.push(current->measurements.front());
                current->measurements.pop();
            }
            current->measurements = tempQueue;

            string msg = "Pengukuran terakhir untuk sensor ID " + to_string(sensorId) + " telah dihapus (undo).";
            cout << msg << endl;
            return msg;
        }
        current = current->next;
    }

    string msg = "Sensor dengan ID " + to_string(sensorId) + " tidak ditemukan.";
    cout << msg << endl;
    return msg;
}

// Tampilkan semua pengukuran pada sensor tertentu
string IoTNetwork::displayMeasurement(int sensorId)
{
    SensorNode *current = head;
    while (current != nullptr)
    {
        if (current->id == sensorId)
        {
            if (current->measurements.empty())
            {
                string msg = "Sensor ID " + to_string(sensorId) + " tidak memiliki pengukuran.";
                cout << msg << endl;
                return msg;
            }

            ostringstream oss;
            oss << "Pengukuran untuk Sensor ID " << sensorId << ":\n";
            oss << fixed << setprecision(2);

            queue<double> tempQueue = current->measurements;
            int index = 1;
            while (!tempQueue.empty())
            {
                oss << "  " << index << ". " << tempQueue.front() << "\n";
                tempQueue.pop();
                index++;
            }

            string msg = oss.str();
            cout << msg << endl;
            return msg;
        }
        current = current->next;
    }

    string msg = "Sensor dengan ID " + to_string(sensorId) + " tidak ditemukan.";
    cout << msg << endl;
    return msg;
}

// Tambahkan sejumlah sensor dengan data acak
string IoTNetwork::loadRandomSampleData(int count) {
    srand(static_cast<unsigned>(time(nullptr)));
    ostringstream oss;

    // Ambil semua tipe sensor yang punya rentang valid
    vector<string> validSensorTypes;
    for (const auto &entry : SENSOR_VALID_RANGES) {
        validSensorTypes.push_back(entry.first);
    }

    for (int i = 0; i < count; ++i) {
        int id = i + 1;
        string location = LOCATIONS[rand() % (sizeof(LOCATIONS) / sizeof(string))];
        string type = validSensorTypes[rand() % validSensorTypes.size()];

        string result = addSensor(id, location, type);
        oss << "  - " << result << "\n";
    }

    return oss.str();
}


// Tambahkan sejumlah pengukuran acak ke semua sensor
string IoTNetwork::loadRandomMeasurementsToAll(int jumlahPengukuranPerSensor)
{
    srand(static_cast<unsigned>(time(nullptr)));

    if (head == nullptr)
    {
        string msg = "Tidak ada sensor untuk ditambahkan pengukuran.";
        cout << msg << endl;
        return msg;
    }

    ostringstream oss;
    SensorNode* current = head;

    while (current != nullptr)
    {
        int sensorId = current->id;
        string typeLower = toLower(current->type);

        // Temukan rentang valid berdasarkan tipe sensor
        auto it = find_if(
            SENSOR_VALID_RANGES.begin(),
            SENSOR_VALID_RANGES.end(),
            [&typeLower](const auto &entry) {
                return toLower(entry.first) == typeLower;
            });

        if (it == SENSOR_VALID_RANGES.end())
        {
            oss << "Sensor ID " << sensorId << ": Tipe sensor \"" << current->type << "\" tidak dikenali. Lewati.\n";
            current = current->next;
            continue;
        }

        double minVal = it->second.first;
        double maxVal = it->second.second;
        double rangeSpan = maxVal - minVal;

        oss << "Sensor ID " << sensorId << ":\n";

        for (int i = 0; i < jumlahPengukuranPerSensor; ++i)
        {
            double randRaw = static_cast<double>(rand() % 10000); // angka mentah
            double value = fmod(randRaw, rangeSpan) + minVal;

            string result = addMeasurement(sensorId, value);
            oss << "  - " << result << "\n";
        }

        current = current->next;
    }

    string msg = oss.str();
    cout << msg << endl;
    return msg;
}


// Fungsi untuk melakukan stress test dengan menambah 1000 sensor
string IoTNetwork::testCase() {
    string msg = "tambah 1000 sensor\n";
    for (int i = 0; i < 1000; i++) {
        msg += addSensor(i, "Ruang Tamu", "Suhu") + "\n";
    }
    return msg;
}

// Menghapus semua node di jaringan (destruktor helper)
string IoTNetwork::clearNetwork()
{
    int count = 0;
    SensorNode *current = head;
    while (current != nullptr)
    {
        SensorNode *temp = current;
        current = current->next;
        delete temp;
        count++;
    }
    head = nullptr;
    string msg = "Membersihkan jaringan IoT... (" + to_string(count) + " sensor dihapus)";
    cout << msg << endl;
    return msg;
}

// Destructor: panggil clearNetwork untuk membebaskan memori
IoTNetwork::~IoTNetwork()
{
    clearNetwork();
}
