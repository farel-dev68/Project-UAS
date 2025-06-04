#ifndef UNDOMEASUREMENT_H
#define UNDOMEASUREMENT_H

#include <QDialog>

namespace Ui {
class UndoMeasurement;
}

class UndoMeasurement : public QDialog
{
    Q_OBJECT

public:
    explicit UndoMeasurement(QWidget *parent = nullptr);
    ~UndoMeasurement();

    int getSensorID() const;
private:
    Ui::UndoMeasurement *ui;
};

#endif // UNDOMEASUREMENT_H
