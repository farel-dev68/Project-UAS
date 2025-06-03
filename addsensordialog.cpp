#include "AddSensorDialog.h"
#include "ui_AddSensorDialog.h"

AddSensorDialog::AddSensorDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddSensorDialog)
{
    ui->setupUi(this);

    connect(ui->btnSubmit, &QPushButton::clicked, this, &QDialog::accept);
}

AddSensorDialog::~AddSensorDialog()
{
    delete ui;
}

int AddSensorDialog::getSensorID() const {
    return ui->lineSensorID->text().toInt();
}

QString AddSensorDialog::getLocation() const {
    return ui->lineLocation->text();
}

QString AddSensorDialog::getType() const {
    return ui->lineType->text();
}
