#include "sortanddisplay.h"
#include "ui_sortanddisplay.h"

SortAndDisplay::SortAndDisplay(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SortAndDisplay)
{
    ui->setupUi(this);

    connect(ui->btnSubmit, &QPushButton::clicked, this, &QDialog::accept);
}

SortAndDisplay::~SortAndDisplay()
{
    delete ui;
}

QString SortAndDisplay::getSortBy() const {
    return ui->lineSortBy->text();
}
