#include "IoTNetwork.h"
#include "MainWindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "AddSensorDialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);  // setup UI dari file .ui

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
