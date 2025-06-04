#include "getaverage.h"
#include "ui_getaverage.h"

GetAverage::GetAverage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GetAverage)
{
    ui->setupUi(this);
}

GetAverage::~GetAverage()
{
    delete ui;
}
