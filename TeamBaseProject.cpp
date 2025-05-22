#include <iostream>
#include <string>
#include <queue>
#include <iomanip>
using namespace std;

class IoTNetwork {
    private:
        struct SensorNode {
            int id;              // ID unik sensor
            string location; // Lokasi sensor
            string type;     // Tipe sensor
            SensorNode* next;    // Pointer ke node berikutnya
            queue<double> measurements; // Queue untuk menyimpan pengukuran
            SensorNode(int i, string loc, string t) : id(i), location(loc), type(t), next(nullptr) {}
        };
        SensorNode* head; // Head dari linked list
    
    public:
        IoTNetwork() : head(nullptr) {}
    
        // Menambahkan sensor baru ke linked list
    void addSensor(int id, const string& location, const string& type) {
            // Cek apakah ID sudah ada
            SensorNode* current = head;
            while (current != nullptr) {
                if (current->id == id) {
                    cout << "Sensor dengan ID " << id << " sudah ada." << endl;
                    return;
                }
                current = current->next;
            }

            // Buat node sensor baru
            SensorNode* newNode = new SensorNode(id, location, type);

            // Tambahkan node ke awal linked list
            newNode->next = head;
            head = newNode;

            cout << "Sensor berhasil ditambahkan: ID=" << id << ", Lokasi=" << location << ", Tipe=" << type << endl;
        }
        
    
        // Menghapus sensor berdasarkan ID dari linked list
        void removeSensor(int id) {
            // Jika linked list kosong
            if (head == nullptr) {
                cout << "Sensor tidak ditemukan. List kosong." << endl;
                return;
            }

            // Jika node yang akan dihapus adalah head
            if (head->id == id) {
                SensorNode* temp = head;
                head = head->next;
                delete temp;
                cout << "Sensor dengan ID " << id << " berhasil dihapus." << endl;
                return;
            }

            // Cari node sebelum node yang akan dihapus
            SensorNode* current = head;
            while (current->next != nullptr && current->next->id != id) {
                current = current->next;
            }

            // Jika sensor tidak ditemukan
            if (current->next == nullptr) {
                cout << "Sensor dengan ID " << id << " tidak ditemukan." << endl;
                return;
            }

            // Hapus node yang sesuai
            SensorNode* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "Sensor dengan ID " << id << " berhasil dihapus." << endl;
        }

    
        // Menambahkan pengukuran ke sensor tertentu
        void addMeasurement(int sensorId, double value) {
            // Cari sensor berdasarkan ID
            SensorNode* current = head;
            while (current != nullptr) {
                if (current->id == sensorId) {
                    // Tambahkan pengukuran ke queue
                    current->measurements.push(value);
                    cout << "Pengukuran " << value << " ditambahkan ke sensor ID " << sensorId << "." << endl;

                    // Jika jumlah pengukuran lebih dari 10, hapus yang tertua (optional)
                    // if (current->measurements.size() > 10) {
                    //     current->measurements.pop();
                    // }

                    return;
                }
                current = current->next;
            }

            // Jika sensor tidak ditemukan
            cout << "Sensor dengan ID " << sensorId << " tidak ditemukan." << endl;
        }
    
        // Menghitung rata-rata 10 pengukuran terakhir untuk sensor tertentu
        double getAverageMeasurement(int sensorId) {
            // TODO: Cari sensor berdasarkan ID
            // TODO: Ambil 10 pengukuran terakhir dari queue
            // TODO: Hitung dan kembalikan rata-ratanya
            return 0.0; // Placeholder
        }
    
        // Mencari dan menampilkan sensor berdasarkan lokasi
        void findSensorsByLocation(const string& location) {
            // TODO: Telusuri linked list untuk mencari sensor dengan lokasi yang sesuai
            // TODO: Tampilkan sensor yang ditemukan
        }
    
        // Menampilkan semua sensor dalam linked list
        void displaySensors() {
            // TODO: Telusuri linked list dan tampilkan setiap sensor
        }
    
        ~IoTNetwork() {
            // TODO: Bebaskan memori linked list
        }
    };

int main() {
    IoTNetwork network;
    // Tambahkan kode pengujian Anda di sini
    network.addSensor(1, "Ruang Kelas", "Suhu");
    network.addMeasurement(1, 25.5);
    network.addMeasurement(1, 26.0);
    network.removeSensor(1);
    return 0;
}