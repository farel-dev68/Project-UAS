#ifndef SORTANDDISPLAY_H
#define SORTANDDISPLAY_H

#include <QDialog>

namespace Ui {
class SortAndDisplay;
}

class SortAndDisplay : public QDialog
{
    Q_OBJECT

public:
    explicit SortAndDisplay(QWidget *parent = nullptr);
    ~SortAndDisplay();

    QString getSortBy() const;
private:
    Ui::SortAndDisplay *ui;
};

#endif // SORTANDDISPLAY_H
