#include "displaysensor.h"
#include "ui_displaysensor.h"

DisplaySensor::DisplaySensor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DisplaySensor)
{
    ui->setupUi(this);
}

DisplaySensor::~DisplaySensor()
{
    delete ui;
}
