#ifndef DISPLAYMEASUREMENT_H
#define DISPLAYMEASUREMENT_H

#include <QDialog>

namespace Ui {
class DisplayMeasurement;
}

class DisplayMeasurement : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayMeasurement(QWidget *parent = nullptr);
    ~DisplayMeasurement();

    int getSensorID() const;
private:
    Ui::DisplayMeasurement *ui;
};

#endif // DISPLAYMEASUREMENT_H
