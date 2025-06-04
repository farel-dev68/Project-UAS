#ifndef REMOVESENSOR_H
#define REMOVESENSOR_H

#include <QDialog>

namespace Ui {
class RemoveSensor;
}

class RemoveSensor : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveSensor(QWidget *parent = nullptr);
    ~RemoveSensor();

    int getSensorID() const;
private:
    Ui::RemoveSensor *ui;
};

#endif // REMOVESENSOR_H
