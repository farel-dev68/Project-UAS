#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "IoTNetwork.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    // Tambah parameter referensi IoTNetwork
    explicit MainWindow(IoTNetwork &networkRef, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAddSensor_clicked();
    void on_btnRemoveSensor_clicked();

private:
    Ui::MainWindow *ui;
    IoTNetwork &network;  // <-- Gunakan referensi, bukan objek baru
};

#endif // MAINWINDOW_H
