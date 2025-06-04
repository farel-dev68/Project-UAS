#include "getaverage.h"
#include "ui_getaverage.h"

GetAverage::GetAverage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GetAverage)
{
    ui->setupUi(this);
    connect(ui->btnSubmit, &QPushButton::clicked, this, &QDialog::accept);
}

int GetAverage::getSensorID() const {
    return ui->lineSensorID->text().toInt();
}

GetAverage::~GetAverage()
{
    delete ui;
}
