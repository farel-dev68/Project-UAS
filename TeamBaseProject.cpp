#include <iostream>
#include <string>
#include <QApplication>
#include <QMainWindow>
#include "MainWindow.h"
#include "IoTNetwork.h"


using namespace std;


IoTNetwork network;
void testCase()
{
    network.addSensor(1, "Ruang Tamu", "Suhu");
    network.addSensor(2, "Kamar Tidur", "Kelembapan");
    network.addSensor(3, "Dapur", "Asap");
    network.addMeasurement(1, 25.5);
    network.addMeasurement(1, 26.0);
    network.addMeasurement(2, 60.0);
    network.addMeasurement(2, 65.0);
    network.displaySensors();
    network.removeSensor (2);
    network.findSensors("Kamar Tidur");
    network.undoLastMeasurement(1);
    network.sortAndDisplaySensorsByLocation();
    network.removeSensor(1);
}

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);
    MainWindow window(network);  // Kirim referensi ke konstruktor
    window.show();
    cout << " Selamat Datang!!, ini consol IoTMonitoring" << endl;

    return app.exec();
    // return 0;
}
