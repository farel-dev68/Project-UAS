#include "findsensors.h"
#include "ui_findsensors.h"

FindSensors::FindSensors(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FindSensors)
{
    ui->setupUi(this);

    connect(ui->btnSubmit, &QPushButton::clicked, this, &QDialog::accept);
}

QString FindSensors::getLocation() const {
    return ui->lineLocation->text();
}

FindSensors::~FindSensors()
{
    delete ui;
}
