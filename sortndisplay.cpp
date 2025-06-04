#include "sortndisplay.h"
#include "ui_sortndisplay.h"

SortnDisplay::SortnDisplay(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SortnDisplay)
{
    ui->setupUi(this);
}

SortnDisplay::~SortnDisplay()
{
    delete ui;
}
