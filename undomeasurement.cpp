#include "undomeasurement.h"
#include "ui_undomeasurement.h"

UndoMeasurement::UndoMeasurement(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UndoMeasurement)
{
    ui->setupUi(this);
}

UndoMeasurement::~UndoMeasurement()
{
    delete ui;
}
