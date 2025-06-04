#ifndef DISPLAYSENSOR_H
#define DISPLAYSENSOR_H

#include <QDialog>

namespace Ui {
class DisplaySensor;
}

class DisplaySensor : public QDialog
{
    Q_OBJECT

public:
    explicit DisplaySensor(QWidget *parent = nullptr);
    ~DisplaySensor();

private:
    Ui::DisplaySensor *ui;
};

#endif // DISPLAYSENSOR_H
