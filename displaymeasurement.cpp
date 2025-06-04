#include "displaymeasurement.h"
#include "ui_displaymeasurement.h"

DisplayMeasurement::DisplayMeasurement(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DisplayMeasurement)
{
    ui->setupUi(this);

    connect(ui->btnSubmit, &QPushButton::clicked, this, &QDialog::accept);
}

int DisplayMeasurement::getSensorID() const {
    return ui->lineSensorID->text().toInt();
}

DisplayMeasurement::~DisplayMeasurement()
{
    delete ui;
}
