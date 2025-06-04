#ifndef ADDMEASUREMENT_H
#define ADDMEASUREMENT_H

#include <QDialog>

namespace Ui {
class AddMeasurement;
}

class AddMeasurement : public QDialog
{
    Q_OBJECT

public:
    explicit AddMeasurement(QWidget *parent = nullptr);
    ~AddMeasurement();

    int getSensorID() const;
    double getValue() const;

private:
    Ui::AddMeasurement *ui;
};

#endif // ADDMEASUREMENT_H
