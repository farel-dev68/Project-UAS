#include "removesensor.h"
#include "ui_removesensor.h"

RemoveSensor::RemoveSensor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RemoveSensor)
{
    ui->setupUi(this);

    connect(ui->btnSubmit, &QPushButton::clicked, this, &QDialog::accept);
}

RemoveSensor::~RemoveSensor()
{
    delete ui;
}

int RemoveSensor::getSensorID() const {
    return ui->lineSensorID->text().toInt();
}
