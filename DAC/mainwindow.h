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

    void on_ENTER_pressed();

    void on_sw_clicked();

    void on_zz_clicked();

    ;

    void on_fw_clicked();
    void paintEvent(QPaintEvent *v);

    void on_dial_sliderMoved(int position);

    void on_DAC_clicked();

    void on_ADC_clicked();

    void on_setvoltage_clicked();

    void on_ret_clicked();

    void on_about_clicked();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
