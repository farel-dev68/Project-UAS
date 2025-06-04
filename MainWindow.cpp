#include "MainWindow.h"
#include "ui_mainwindow.h"
#include "AddSensorDialog.h"
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
    QMessageBox::information(this, "Halo", "ANJAAY!");
}
