#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "timer.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    Timer obj[20];
    static int pulses;
    static int inc;
    void checkmode();
    void set_textedit();

    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pulse_clicked();

    void on_trigger_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
