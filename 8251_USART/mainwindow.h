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

    unsigned long instruction_fetch(unsigned long);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_bytetra_clicked();

    void on_blocktra_clicked();

    void on_soursebut_clicked();

    void on_pushButton_3_clicked();

    void on_desbut_clicked();

    void source_terminal();

    void on_about_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
