#include "undomeasurement.h"
#include "ui_undomeasurement.h"

UndoMeasurement::UndoMeasurement(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UndoMeasurement)
{
    ui->setupUi(this);

    connect(ui->btnSubmit, &QPushButton::clicked, this, &QDialog::accept);
}

int UndoMeasurement::getSensorID() const {
    return ui->lineSensorID->text().toInt();
}

UndoMeasurement::~UndoMeasurement()
{
    delete ui;
}


