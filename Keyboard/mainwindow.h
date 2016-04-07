#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Enterdata_clicked();

    void on_ENTER_pressed();

    void go_to_Sleep();

    void on_enter_clicked();

    void on_return_2_clicked();

    void on_about_clicked();

    void on_wdr_clicked();

    void on_return_3_clicked();

    void delay_terminal();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
