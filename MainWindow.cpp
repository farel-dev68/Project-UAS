#include "MainWindow.h"
#include "ui_mainwindow.h"
#include "AddSensorDialog.h"
#include "addmeasurement.h"
#include "undomeasurement.h"
#include "removesensor.h"
#include "testbawa.h"
#include "getaverage.h"
#include "findsensors.h"
#include "displaymeasurement.h"
#include <QMessageBox>

// Konstruktor: simpan referensi ke IoTNetwork
MainWindow::MainWindow(IoTNetwork &networkRef, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), network(networkRef)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAddSensor_clicked()
{
    AddSensorDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int id = dialog.getSensorID();
        QString location = dialog.getLocation();
        QString type = dialog.getType();

        std::string result = network.addSensor(id, location.toStdString(), type.toStdString());
        ui->textOutput->append(QString::fromStdString(result));
    }
}

void MainWindow::on_btnRemoveSensor_clicked()
{
    RemoveSensor dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int id = dialog.getSensorID();

        std::string result = network.removeSensor(id);
        ui->textOutput->append(QString::fromStdString(result));
    }
}

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

void MainWindow::on_btnDisplaySensor_clicked()
{
    std::string result = network.displaySensors();
    ui->textOutput->append(QString::fromStdString(result));
}

void MainWindow::on_btnFindSensors_clicked()
{
    FindSensors dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        QString location = dialog.getLocation();

        std::string result = network.findSensors(location.toStdString());
        ui->textOutput->append(QString::fromStdString(result));
    }
}


void MainWindow::on_btnSortnDisplay_clicked()
{
    std::string result = network.sortAndDisplaySensorsByLocation();
    ui->textOutput->append(QString::fromStdString(result));
}

void MainWindow::on_btnDisplayMeasurement_clicked()
{
    DisplayMeasurement dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int id = dialog.getSensorID();

        std::string result = network.displayMeasurement(id);
        ui->textOutput->append(QString::fromStdString(result));
    }
}

void MainWindow::on_btnUndoMeasurement_clicked()
{
    UndoMeasurement dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int id = dialog.getSensorID();

        std::string result = network.undoLastMeasurement(id);
        ui->textOutput->append(QString::fromStdString(result));
    }
}

void MainWindow::on_btnGetAverage_clicked()
{
    GetAverage dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int id = dialog.getSensorID();

        std::string result = network.getAverageMeasurement(id);
        ui->textOutput->append(QString::fromStdString(result));
    }
}

void MainWindow::on_btnClear_clicked()
{
    std::string result = network.clearNetwork();
    ui->textOutput->append(QString::fromStdString(result));
}

void MainWindow::on_btnTestBawa_clicked()
{
    TestBawa dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int jumlah = dialog.getJumlah();
        QString mode = dialog.getMode();

        std::string result;

        if (mode == "1000") {
            result = network.testCase();
        } else if (mode == "measurement") {
            result = network.loadRandomMeasurementsToAll(jumlah);
        } else if (mode == "sample") {
            result = network.loadRandomSampleData(jumlah);
        }

        ui->textOutput->append(QString::fromStdString(result));
    }
}
