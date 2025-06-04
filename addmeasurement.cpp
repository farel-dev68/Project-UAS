#include "addmeasurement.h"
#include "ui_addmeasurement.h"

AddMeasurement::AddMeasurement(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddMeasurement)
{
    ui->setupUi(this);

    connect(ui->btnSubmit, &QPushButton::clicked, this, &QDialog::accept);
}

AddMeasurement::~AddMeasurement()
{
    delete ui;
}

int AddMeasurement::getSensorID() const {
    return ui->lineSensorID->text().toInt();
}

double AddMeasurement::getValue() const {
    return ui->lineValue->text().toDouble();
}
