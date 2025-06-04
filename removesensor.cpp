#include "removesensor.h"
#include "ui_removesensor.h"

RemoveSensor::RemoveSensor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RemoveSensor)
{
    ui->setupUi(this);
}

RemoveSensor::~RemoveSensor()
{
    delete ui;
}
