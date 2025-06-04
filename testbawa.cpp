#include "testbawa.h"
#include "ui_testbawa.h"

TestBawa::TestBawa(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TestBawa)
{
    ui->setupUi(this);
}

void TestBawa::on_btn1000_clicked()
{

}
void TestBawa::on_btnMeasurement_clicked()
{

}
void TestBawa::on_btnSample_clicked()
{

}



TestBawa::~TestBawa()
{
    delete ui;
}
