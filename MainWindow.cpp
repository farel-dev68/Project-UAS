#include "MainWindow.h"
#include "ui_mainwindow.h"
#include "AddSensorDialog.h"
#include "addmeasurement.h"
#include "undomeasurement.h"
#include "removesensor.h"
#include "testbawa.h"
#include "getaverage.h"
#include "findsensors.h"
#include "sortanddisplay.h"
#include "displaymeasurement.h"
#include <QMessageBox>

// Konstruktor MainWindow: menginisialisasi UI dan menyimpan referensi ke IoTNetwork
MainWindow::MainWindow(IoTNetwork &networkRef, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), network(networkRef)
{
    ui->setupUi(this); // Men-setup tampilan antarmuka pengguna
}

// Destruktor: membersihkan memori untuk UI
MainWindow::~MainWindow()
{
    delete ui;
}

// Handler untuk tombol "Add Sensor" - membuka dialog untuk menambah sensor baru
void MainWindow::on_btnAddSensor_clicked()
{
    AddSensorDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int id = dialog.getSensorID();
        QString location = dialog.getLocation();
        QString type = dialog.getType();

        // Menambahkan sensor ke jaringan IoT
        std::string result = network.addSensor(id, location.toStdString(), type.toStdString());
        ui->textOutput->append(QString::fromStdString(result));
    }
}

// Handler untuk tombol "Remove Sensor" - membuka dialog untuk menghapus sensor berdasarkan ID
void MainWindow::on_btnRemoveSensor_clicked()
{
    RemoveSensor dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int id = dialog.getSensorID();

        std::string result = network.removeSensor(id);
        ui->textOutput->append(QString::fromStdString(result));
    }
}

// Handler untuk tombol "Add Measurement" - membuka dialog untuk menambah data pengukuran ke sensor
void MainWindow::on_btnAddMeasurement_clicked()
{
    AddMeasurement dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int id = dialog.getSensorID();
        double value = dialog.getValue();

        std::string result = network.addMeasurement(id, value);
        ui->textOutput->append(QString::fromStdString(result));
    }
}

// Handler untuk tombol "Display Sensors" - menampilkan semua sensor yang ada di jaringan
void MainWindow::on_btnDisplaySensor_clicked()
{
    std::string result = network.displaySensors();
    ui->textOutput->append(QString::fromStdString(result));
}

// Handler untuk tombol "Find Sensors" - mencari sensor berdasarkan lokasi
void MainWindow::on_btnFindSensors_clicked()
{
    FindSensors dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        QString location = dialog.getLocation();

        std::string result = network.findSensors(location.toStdString());
        ui->textOutput->append(QString::fromStdString(result));
    }
}

// Handler untuk tombol "Sort and Display" - menampilkan sensor yang diurutkan berdasarkan lokasi
void MainWindow::on_btnSortnDisplay_clicked()
{
    SortAndDisplay dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        QString criteria = dialog.getSortBy();

        std::string result = network.sortAndDisplaySensors(criteria.toStdString());
        ui->textOutput->append(QString::fromStdString(result));
    }
}

// Handler untuk tombol "Display Measurement" - menampilkan semua pengukuran untuk sensor tertentu
void MainWindow::on_btnDisplayMeasurement_clicked()
{
    DisplayMeasurement dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int id = dialog.getSensorID();

        std::string result = network.displayMeasurement(id);
        ui->textOutput->append(QString::fromStdString(result));
    }
}

// Handler untuk tombol "Undo Measurement" - membatalkan pengukuran terakhir untuk sensor tertentu
void MainWindow::on_btnUndoMeasurement_clicked()
{
    UndoMeasurement dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int id = dialog.getSensorID();

        std::string result = network.undoLastMeasurement(id);
        ui->textOutput->append(QString::fromStdString(result));
    }
}

// Handler untuk tombol "Get Average" - menghitung rata-rata pengukuran untuk sensor tertentu
void MainWindow::on_btnGetAverage_clicked()
{
    GetAverage dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int id = dialog.getSensorID();

        std::string result = network.getAverageMeasurement(id);
        ui->textOutput->append(QString::fromStdString(result));
    }
}

// Handler untuk tombol "Clear Network" - menghapus seluruh data sensor dari jaringan
void MainWindow::on_btnClear_clicked()
{
    std::string result = network.clearNetwork();
    ui->textOutput->append(QString::fromStdString(result));
}

// Handler untuk tombol "Test Bawa" - memuat data uji berdasarkan mode: testCase, measurement, atau sample
void MainWindow::on_btnTestBawa_clicked()
{
    TestBawa dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int jumlah = dialog.getJumlah();
        QString mode = dialog.getMode();

        std::string result;

        if (mode == "1000") {
            result = network.testCase(); // Tambah 1000 sensor untuk pengujian performa
        } else if (mode == "measurement") {
            result = network.loadRandomMeasurementsToAll(jumlah); // Tambah pengukuran acak ke semua sensor
        } else if (mode == "sample") {
            result = network.loadRandomSampleData(jumlah); // Tambah sensor acak untuk uji coba
        }

        ui->textOutput->append(QString::fromStdString(result));
    }
}
