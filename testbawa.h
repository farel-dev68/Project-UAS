#ifndef TESTBAWA_H
#define TESTBAWA_H

#include <QDialog>

namespace Ui {
class TestBawa;
}

class TestBawa : public QDialog
{
    Q_OBJECT

public:
    explicit TestBawa(QWidget *parent = nullptr);
    ~TestBawa();

private slots:
    void on_btn1000_clicked();
    void on_btnMeasurement_clicked();
    void on_btnSample_clicked();

private:
    Ui::TestBawa *ui;
};

#endif // TESTBAWA_H
