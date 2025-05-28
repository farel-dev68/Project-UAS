#include <iostream>
#include <string>
#include <queue>
#include <iomanip>
#include <stack>
using namespace std;

class IoTNetwork
{
private:
    struct SensorNode
    {
        int id;                     // ID unik sensor
        string location;            // Lokasi sensor
        string type;                // Tipe sensor
        SensorNode *next;           // Pointer ke node berikutnya
        queue<double> measurements; // Queue untuk menyimpan pengukuran
        SensorNode(int i, string loc, string t) : id(i), location(loc), type(t), next(nullptr) {}
        stack<double> measurementHistory;
    };
    SensorNode *head; // Head dari linked list

public:
    IoTNetwork() : head(nullptr) {}

    // Menambahkan sensor baru ke linked list
    void addSensor(int id, const string &location, const string &type)
    {
        // Cek apakah ID sudah ada
        SensorNode *current = head;
        while (current != nullptr)
        {
            if (current->id == id)
            {
                cout << "Sensor dengan ID " << id << " sudah ada." << endl;
                return;
            }
            current = current->next;
        }

        // Buat node sensor baru
        SensorNode *newNode = new SensorNode(id, location, type);

        // Tambahkan node ke awal linked list
        newNode->next = head;
        head = newNode;

        cout << "Sensor added: ID=" << id << ", Location=" << location << ", Type=" << type << endl;
    }

    // Menghapus sensor berdasarkan ID dari linked list
    void removeSensor(int id)
    {
        // Jika linked list kosong
        if (head == nullptr)
        {
            cout << "Sensor tidak ditemukan. List kosong." << endl;
            return;
        }

        // Jika node yang akan dihapus adalah head
        if (head->id == id)
        {
            SensorNode *temp = head;
            head = head->next;
            delete temp;
            cout << "Sensor dengan ID " << id << " berhasil dihapus." << endl;
            return;
        }

        // Cari node sebelum node yang akan dihapus
        SensorNode *current = head;
        while (current->next != nullptr && current->next->id != id)
        {
            current = current->next;
        }

        // Jika sensor tidak ditemukan
        if (current->next == nullptr)
        {
            cout << "Sensor dengan ID " << id << " tidak ditemukan." << endl;
            return;
        }

        // Hapus node yang sesuai
        SensorNode *temp = current->next;
        current->next = current->next->next;
        delete temp;
        cout << "Sensor dengan ID " << id << " berhasil dihapus." << endl;
    }

    // Menambahkan pengukuran ke sensor tertentu
    void addMeasurement(int sensorId, double value)
    {
        // Cari sensor berdasarkan ID
        SensorNode *current = head;
        while (current != nullptr)
        {
            if (current->id == sensorId)
            {
                // Tambahkan pengukuran ke queue
                current->measurements.push(value);
                cout << "Measurments " << value << " ditambahkan ke sensor ID " << sensorId << "." << endl;

                // Jika jumlah pengukuran lebih dari 10, hapus yang tertua (optional)
                if (current->measurements.size() == 10)
                {
                    current->measurements.pop(); // Buang yang tertua jika sudah ada 10
                }
                // Simpan pengukuran terakhir ke stack sebelum ditimpa (jika ada)
                if (!current->measurements.empty())
                {
                    current->measurementHistory.push(current->measurements.back());
                }

                return;
            }
            current = current->next;
        }

        // Jika sensor tidak ditemukan
        cout << "Sensor dengan ID " << sensorId << " tidak ditemukan." << endl;
    }

    // Menghitung rata-rata 10 pengukuran terakhir untuk sensor tertentu
    double getAverageMeasurement(int sensorId)
    {
        // TODO: Cari sensor berdasarkan ID
        // TODO: Ambil 10 pengukuran terakhir dari queue
        // TODO: Hitung dan kembalikan rata-ratanya
        return 0.0; // Placeholder
    }

    // Mencari dan menampilkan sensor berdasarkan lokasi
    void findSensors(const string &location)
    {
        if (head == nullptr)
        {
            cout << "Tidak ada sensor dalam jaringan." << endl;
            return;
        }

        bool found = false;
        cout << "\nSensor di lokasi " << location << ":" << endl;
        cout << left << setw(5) << "ID" << setw(15) << "Lokasi" << setw(15) << "Tipe" << endl;

        SensorNode *current = head;
        while (current != nullptr)
        {
            if (current->location == location)
            {
                cout
                    << left << setw(5) << current->id
                    << setw(15) << current->location
                    << setw(15) << current->type << endl;
                found = true;
            }
            current = current->next;
        }

        if (!found)
        {
            cout << "Tidak ditemukan sensor di lokasi " << location << endl;
        }
    }

    // Menampilkan semua sensor dalam linked list
    void displaySensors()
    {
        if (head == nullptr)
        {
            cout << "Tidak ada sensor dalam jaringan." << endl;
            return;
        }

        cout << "\nDaftar Sensor:" << endl;
        cout << left << setw(5) << "ID" << setw(15) << "Lokasi" << setw(15) << "Tipe" << endl;

        SensorNode *current = head;
        while (current != nullptr)
        {
            cout << left << setw(5) << current->id
                 << setw(15) << current->location
                 << setw(15) << current->type << endl;
            current = current->next;
        }
        cout << endl;
    }

    void undoLastMeasurement(int sensorId)
    {
        SensorNode *current = head;
        while (current != nullptr)
        {
            if (current->id == sensorId)
            {
                if (current->measurementHistory.empty())
                {
                    cout << "Tidak ada histori pengukuran untuk sensor ID " << sensorId << "." << endl;
                    return;
                }

                double lastValue = current->measurementHistory.top();
                current->measurementHistory.pop();

                // Hapus pengukuran terakhir dari queue
                if (!current->measurements.empty())
                    current->measurements.pop();

                // Tambahkan kembali pengukuran sebelumnya dari stack
                current->measurements.push(lastValue);
                cout << "Undo dilakukan. Nilai dikembalikan ke " << lastValue << " untuk sensor ID " << sensorId << "." << endl;
                return;
            }
            current = current->next;
        }
        cout << "Sensor dengan ID " << sensorId << " tidak ditemukan." << endl;
    }

    ~IoTNetwork()
    {
        // TODO: Bebaskan memori linked list
    }
};

int main()
{
    IoTNetwork network;
    // Tambahkan kode pengujian Anda di sini
    network.addSensor(1, "Ruang Tamu", "Suhu");
    network.addSensor(2, "Kamar Tidur", "Kelembapan");
    network.addMeasurement(1, 25.5);
    network.addMeasurement(1, 26.0);
    network.addMeasurement(2, 60.0);
    network.addMeasurement(2, 65.0);
    // network.removeSensor(1);
    network.displaySensors();
    network.findSensors("Kamar Tidur");
    network.undoLastMeasurement(1);

    return 0;
}