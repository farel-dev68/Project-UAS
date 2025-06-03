#include <iostream>
#include <string>
#include <QApplication>
#include <QMainWindow>
#include "MainWindow.h"
#include "IoTNetwork.h"


using namespace std;

int main(int argc, char *argv[]) {
    IoTNetwork network;
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

    // return 0;
    network.removeSensor(1);
    QApplication app(argc, argv);

    // QMainWindow window;
    // window.setStyleSheet("background-color: lightblue;");
    // window.resize(1280, 720);
    // window.show();
    // int x;   // Buat objek aplikasi

    MainWindow window;               // Buat objek MainWindow (kelas kamu)
    window.show();
    // pushButton->setStyleSheet("background-color: yellow; color: red;");
    return app.exec();
    // return 0;
}
