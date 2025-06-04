#ifndef FINDSENSORS_H
#define FINDSENSORS_H

#include <QDialog>

namespace Ui {
class FindSensors;
}

class FindSensors : public QDialog
{
    Q_OBJECT

public:
    explicit FindSensors(QWidget *parent = nullptr);
    ~FindSensors();

private:
    Ui::FindSensors *ui;
};

#endif // FINDSENSORS_H
