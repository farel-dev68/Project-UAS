// testbawa.h

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

    int getJumlah() const;
    QString getMode() const;

private slots:
    void on_btn1000_clicked();
    void on_btnMeasurement_clicked();
    void on_btnSample_clicked();

private:
    Ui::TestBawa *ui;
    int jumlah = 0;
    QString mode; // "1000", "measurement", atau "sample"
};

#endif // TESTBAWA_H
