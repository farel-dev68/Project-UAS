#ifndef SORTNDISPLAY_H
#define SORTNDISPLAY_H

#include <QDialog>

namespace Ui {
class SortnDisplay;
}

class SortnDisplay : public QDialog
{
    Q_OBJECT

public:
    explicit SortnDisplay(QWidget *parent = nullptr);
    ~SortnDisplay();

private:
    Ui::SortnDisplay *ui;
};

#endif // SORTNDISPLAY_H
