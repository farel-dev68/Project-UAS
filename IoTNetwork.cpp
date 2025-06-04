#include "IoTNetwork.h"
#include <iostream>
#include <iomanip>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <QString>
#include <sstream>

using namespace std;

// Konstruktor
IoTNetwork::IoTNetwork() : head(nullptr) {}

// Tambahkan sensor baru ke linked list
string IoTNetwork::addSensor(int id, const string &location, const string &type)
{
    SensorNode *current = head;
    while (current != nullptr)
    {
        if (current->id == id)
        {
            string msg = "Sensor dengan ID " + to_string(id) + " sudah ada.";
            cout << msg << endl;
            return msg;
        }
        current = current->next;
    }

    SensorNode *newNode = new SensorNode(id, location, type);
    newNode->next = head;
    head = newNode;

    string msg = "Sensor ditambahkan:\nID: " + to_string(id) +
                 "\nLokasi: " + location + "\nTipe: " + type;
    cout << msg << endl;
    return msg;
}

// Hapus sensor berdasarkan ID
string IoTNetwork::removeSensor(int id)
{
    if (head == nullptr)
    {
        string msg = "Sensor tidak ditemukan. List kosong.";
        cout << msg << endl;
        return msg;
    }

    if (head->id == id)
    {
        SensorNode *temp = head;
        head = head->next;
        delete temp;
        string msg = "Sensor dengan ID " + to_string(id) + " berhasil dihapus.";
        cout << msg << endl;
        return msg;
    }

    SensorNode *current = head;
    while (current->next != nullptr && current->next->id != id)
    {
        current = current->next;
    }

    if (current->next == nullptr)
    {
        string msg = "Sensor dengan ID " + to_string(id) + " tidak ditemukan.";
        cout << msg << endl;
        return msg;
    }

    SensorNode *temp = current->next;
    current->next = current->next->next;
    delete temp;
    string msg = "Sensor dengan ID " + to_string(id) + " berhasil dihapus.";
    cout << msg << endl;
    return msg;
}

// Tambahkan pengukuran ke sensor
string IoTNetwork::addMeasurement(int sensorId, double value)
{
    SensorNode *current = head;
    while (current != nullptr)
    {
        if (current->id == sensorId)
        {
            if (current->measurements.size() >= 10)
            {
                current->measurements.pop();
            }

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

// Dapatkan rata-rata pengukuran
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

// Cari sensor berdasarkan lokasi
string IoTNetwork::findSensors(const string &location)
{
    ostringstream oss;
    if (head == nullptr)
    {
        string msg = "Tidak ada sensor dalam jaringan.";
        cout << msg << endl;
        return msg;
    }

    bool found = false;
    oss << "Sensor di lokasi " << location << ":\n";
    oss << left << setw(5) << "ID" << setw(15) << "Lokasi" << setw(15) << "Tipe" << "\n";

    SensorNode *current = head;
    while (current != nullptr)
    {
        if (current->location == location)
        {
            oss << left << setw(5) << current->id
                << setw(15) << current->location
                << setw(15) << current->type << "\n";
            found = true;
        }
        current = current->next;
    }

    string msg;
    if (!found)
    {
        msg = "Tidak ditemukan sensor di lokasi " + location;
    }
    else
    {
        msg = oss.str();
    }

    cout << msg << endl;
    return msg;
}

// Tampilkan semua sensor
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
    oss << left << setw(5) << "ID"
        << setw(15) << "Lokasi"
        << setw(15) << "Tipe" << "\n";

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

// Urutkan dan tampilkan sensor berdasarkan lokasi
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

    sort(sensors.begin(), sensors.end(), [](SensorNode *a, SensorNode *b) {
        return a->location < b->location;
    });

    ostringstream oss;
    oss << "Sensor diurutkan berdasarkan lokasi:\n";
    oss << left << setw(5) << "ID"
        << setw(15) << "Lokasi"
        << setw(15) << "Tipe" << "\n";

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

// Undo pengukuran terakhir
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

            current->measurementHistory.pop();

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

// Destructor helper
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

// Destructor
IoTNetwork::~IoTNetwork()
{
    clearNetwork();
}
