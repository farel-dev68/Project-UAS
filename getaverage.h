#ifndef GETAVERAGE_H
#define GETAVERAGE_H

#include <QDialog>

namespace Ui {
class GetAverage;
}

class GetAverage : public QDialog
{
    Q_OBJECT

public:
    explicit GetAverage(QWidget *parent = nullptr);
    ~GetAverage();

    int getSensorID() const;
private:
    Ui::GetAverage *ui;

};

#endif // GETAVERAGE_H
