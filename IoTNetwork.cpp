#include "IoTNetwork.h"
#include <iostream>
#include <iomanip>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <QString>

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
            cout << msg << endl; // untuk debug terminal
            return msg;                    // untuk ditampilkan di UI
        }
        current = current->next;
    }

    SensorNode *newNode = new SensorNode(id, location, type);
    newNode->next = head;
    head = newNode;

    string msg = "Sensor ditambahkan:\nID: " + to_string(id) +
                      "\nLokasi: " + location + "\nTipe: " + type;
    cout << msg << endl; // debug ke terminal
    return msg;                    // untuk tampilkan di UI
}



// Hapus sensor berdasarkan ID
void IoTNetwork::removeSensor(int id)
{
    if (head == nullptr)
    {
        cout << "Sensor tidak ditemukan. List kosong." << endl;
        return;
    }

    if (head->id == id)
    {
        SensorNode *temp = head;
        head = head->next;
        delete temp;
        cout << "Sensor dengan ID " << id << " berhasil dihapus." << endl;
        return;
    }

    SensorNode *current = head;
    while (current->next != nullptr && current->next->id != id)
    {
        current = current->next;
    }

    if (current->next == nullptr)
    {
        cout << "Sensor dengan ID " << id << " tidak ditemukan." << endl;
        return;
    }

    SensorNode *temp = current->next;
    current->next = current->next->next;
    delete temp;
    cout << "Sensor dengan ID " << id << " berhasil dihapus." << endl;
}

// Tambahkan pengukuran ke sensor
void IoTNetwork::addMeasurement(int sensorId, double value)
{
    SensorNode *current = head;
    while (current != nullptr)
    {
        if (current->id == sensorId)
        {
            current->measurements.push(value);
            cout << "Measurement " << value << " ditambahkan ke sensor ID " << sensorId << "." << endl;

            if (!current->measurements.empty())
            {
                current->measurementHistory.push(current->measurements.back());
            }

            if (current->measurements.size() == 10)
            {
                current->measurements.pop();
            }

            return;
        }
        current = current->next;
    }

    cout << "Sensor dengan ID " << sensorId << " tidak ditemukan." << endl;
}

double IoTNetwork::getAverageMeasurement(int sensorId)
{
    SensorNode *current = head;
    while (current != nullptr)
    {
        if (current->id == sensorId)
        {
            if (current->measurements.empty())
            {
                cout << "Sensor ID " << sensorId << " tidak memiliki pengukuran." << endl;
                return 0.0;
            }

            // Salin queue agar tidak mengubah data asli
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
            cout << "Rata-rata pengukuran untuk sensor ID " << sensorId << " adalah " << fixed << setprecision(2) << average << endl;
            return average;
        }
        current = current->next;
    }

    cout << "Sensor dengan ID " << sensorId << " tidak ditemukan." << endl;
    return 0.0;
}


// Cari sensor berdasarkan lokasi
void IoTNetwork::findSensors(const string &location)
{
    if (head == nullptr)
    {
        cout << "Tidak ada sensor dalam jaringan." << endl;
        return;
    }

    bool found = false;
    cout << "Sensor di lokasi " << location << ":" << endl;
    cout << left << setw(5) << "ID" << setw(15) << "Lokasi" << setw(15) << "Tipe" << endl;

    SensorNode *current = head;
    while (current != nullptr)
    {
        if (current->location == location)
        {
            cout << left << setw(5) << current->id
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

// Tampilkan semua sensor
void IoTNetwork::displaySensors()
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

// Urutkan dan tampilkan sensor berdasarkan lokasi
void IoTNetwork::sortAndDisplaySensorsByLocation()
{
    vector<SensorNode *> sensors;
    SensorNode *current = head;
    while (current != nullptr)
    {
        sensors.push_back(current);
        current = current->next;
    }

    sort(sensors.begin(), sensors.end(), [](SensorNode *a, SensorNode *b) {
        return a->location < b->location;
    });

    cout << "Sensor diurutkan berdasarkan lokasi:" << endl;
    cout << left << setw(5) << "ID" << setw(15) << "Lokasi" << setw(15) << "Tipe" << endl;
    for (SensorNode *sensor : sensors)
    {
        cout << left << setw(5) << sensor->id
             << setw(15) << sensor->location
             << setw(15) << sensor->type << endl;
    }
}

// Undo pengukuran terakhir
void IoTNetwork::undoLastMeasurement(int sensorId)
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

            if (!current->measurements.empty())
                current->measurements.pop();

            current->measurements.push(lastValue);
            cout << "\nUndo dilakukan. Nilai dikembalikan ke " << lastValue << " untuk sensor ID " << sensorId << "." << endl
                 << endl;
            return;
        }
        current = current->next;
    }
    cout << "Sensor dengan ID " << sensorId << " tidak ditemukan." << endl;
}

// Destructor
IoTNetwork::~IoTNetwork()
{
    cout << "Membersihkan jaringan IoT..." << endl;
    SensorNode *current = head;
    while (current != nullptr)
    {
        SensorNode *temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
}
