// testbawa.cpp

#include "testbawa.h"
#include "ui_testbawa.h"

TestBawa::TestBawa(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TestBawa)
{
    ui->setupUi(this);
}

TestBawa::~TestBawa()
{
    delete ui;
}

int TestBawa::getJumlah() const {
    return jumlah;
}

QString TestBawa::getMode() const {
    return mode;
}

void TestBawa::on_btn1000_clicked()
{
    jumlah = 1000;
    mode = "1000";
    accept();  // Tutup dialog dan kembalikan QDialog::Accepted
}

void TestBawa::on_btnMeasurement_clicked()
{
    jumlah = ui->lineMeasurement->text().toInt();
    mode = "measurement";
    accept();
}

void TestBawa::on_btnSample_clicked()
{
    jumlah = ui->lineSample->text().toInt();
    mode = "sample";
    accept();
}
