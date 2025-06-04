#include "MainWindow.h"
#include "ui_mainwindow.h"
#include "AddSensorDialog.h"
#include "addmeasurement.h"
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

}
void MainWindow::on_btnSortnDisplay_clicked()
{
    std::string result = network.sortAndDisplaySensorsByLocation();
    ui->textOutput->append(QString::fromStdString(result));
}
void MainWindow::on_btnUndoMeasurement_clicked()
{
    AddMeasurement dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        int id = dialog.getSensorID();

        std::string result = network.undoLastMeasurement(id);
        ui->textOutput->append(QString::fromStdString(result));
    }
}
void MainWindow::on_btnGetAverage_clicked()
{

}
void MainWindow::on_btnTestSensor_clicked()
{

}
