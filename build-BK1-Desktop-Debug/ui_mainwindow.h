/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *trig_led;
    QLabel *label;
    QPushButton *out_led;
    QFrame *line;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_13;
    QLineEdit *cw_cn;
    QLabel *label_15;
    QLineEdit *cw_m;
    QTextEdit *textEdit;
    QLabel *label_12;
    QPushButton *pushButton;
    QFrame *line_2;
    QLabel *trigger_signal;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *out_signal;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_14;
    QLineEdit *cw_c;
    QPushButton *trigger;
    QPushButton *pushButton_2;
    QFrame *line_3;
    QLineEdit *pulsecounter;
    QPushButton *pulse;
    QLabel *label_2;
    QLabel *label_18;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_10;
    QLineEdit *meracounter;
    QLabel *label_7;
    QLineEdit *control;
    QLabel *label_11;
    QLabel *label_5;
    QLineEdit *counterport;
    QLabel *label_8;
    QLineEdit *cwport;
    QLabel *label_17;
    QWidget *page_2;
    QLabel *label_16;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(696, 740);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(195, 167, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 691, 680));
        stackedWidget->setMaximumSize(QSize(1360, 680));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        trig_led = new QPushButton(page);
        trig_led->setObjectName(QStringLiteral("trig_led"));
        trig_led->setGeometry(QRect(380, 590, 31, 31));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 92, 17));
        out_led = new QPushButton(page);
        out_led->setObjectName(QStringLiteral("out_led"));
        out_led->setGeometry(QRect(380, 530, 31, 31));
        line = new QFrame(page);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 340, 891, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 390, 221, 62));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QLatin1String("background-color:rgba(255, 255, 255, 0)\n"
""));

        gridLayout_2->addWidget(label_13, 0, 0, 1, 1);

        cw_cn = new QLineEdit(layoutWidget);
        cw_cn->setObjectName(QStringLiteral("cw_cn"));

        gridLayout_2->addWidget(cw_cn, 0, 1, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("background-color:rgba(255, 255, 255, 0)"));

        gridLayout_2->addWidget(label_15, 1, 0, 1, 1);

        cw_m = new QLineEdit(layoutWidget);
        cw_m->setObjectName(QStringLiteral("cw_m"));

        gridLayout_2->addWidget(cw_m, 1, 1, 1, 1);

        textEdit = new QTextEdit(page);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 210, 631, 121));
        label_12 = new QLabel(page);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 360, 92, 17));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(490, 110, 99, 27));
        line_2 = new QFrame(page);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 190, 891, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        trigger_signal = new QLabel(page);
        trigger_signal->setObjectName(QStringLiteral("trigger_signal"));
        trigger_signal->setGeometry(QRect(380, 590, 41, 31));
        trigger_signal->setStyleSheet(QStringLiteral("background-color:rgba(255, 255, 255, 0)"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(320, 590, 61, 31));
        label_4->setStyleSheet(QStringLiteral("background-color:rgba(255, 255, 255, 0)"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(320, 530, 61, 31));
        label_3->setStyleSheet(QStringLiteral("background-color:rgba(255, 255, 255, 0)"));
        out_signal = new QLabel(page);
        out_signal->setObjectName(QStringLiteral("out_signal"));
        out_signal->setGeometry(QRect(380, 530, 41, 31));
        out_signal->setStyleSheet(QLatin1String("background-color:rgba(255, 255, 255, 0)\n"
"\n"
""));
        layoutWidget_3 = new QWidget(page);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(450, 400, 109, 31));
        gridLayout_3 = new QGridLayout(layoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QStringLiteral("background-color:rgba(255, 255, 255, 0)"));

        gridLayout_3->addWidget(label_14, 0, 0, 1, 1);

        cw_c = new QLineEdit(layoutWidget_3);
        cw_c->setObjectName(QStringLiteral("cw_c"));

        gridLayout_3->addWidget(cw_c, 0, 1, 1, 1);

        trigger = new QPushButton(page);
        trigger->setObjectName(QStringLiteral("trigger"));
        trigger->setGeometry(QRect(160, 590, 91, 71));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(580, 20, 99, 27));
        line_3 = new QFrame(page);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 460, 891, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        pulsecounter = new QLineEdit(page);
        pulsecounter->setObjectName(QStringLiteral("pulsecounter"));
        pulsecounter->setGeometry(QRect(620, 640, 59, 27));
        pulse = new QPushButton(page);
        pulse->setObjectName(QStringLiteral("pulse"));
        pulse->setGeometry(QRect(160, 480, 91, 71));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 110, 42, 17));
        label_18 = new QLabel(page);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(300, 10, 67, 21));
        QFont font;
        font.setPointSize(18);
        label_18->setFont(font);
        label_18->setStyleSheet(QStringLiteral("background-color:rgba(255, 255, 255, 0)"));
        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(240, 170, 162, 17));
        label_9->setStyleSheet(QStringLiteral("background-color:rgba(255, 255, 255, 0)"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(240, 71, 32, 27));
        label_6->setStyleSheet(QLatin1String("background-color:rgba(255, 255, 255, 0)\n"
""));
        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(343, 71, 59, 27));
        label_10->setStyleSheet(QStringLiteral("background-color:rgba(255, 255, 255, 0)"));
        meracounter = new QLineEdit(page);
        meracounter->setObjectName(QStringLiteral("meracounter"));
        meracounter->setGeometry(QRect(343, 104, 59, 27));
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(240, 137, 32, 27));
        label_7->setStyleSheet(QLatin1String("background-color:rgba(255, 255, 255, 0)\n"
""));
        control = new QLineEdit(page);
        control->setObjectName(QStringLiteral("control"));
        control->setGeometry(QRect(343, 38, 59, 27));
        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(343, 137, 59, 27));
        label_11->setStyleSheet(QStringLiteral("background-color:rgba(255, 255, 255, 0)"));
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(240, 38, 97, 27));
        label_5->setStyleSheet(QStringLiteral("background-color:rgba(255, 255, 255, 0)"));
        counterport = new QLineEdit(page);
        counterport->setObjectName(QStringLiteral("counterport"));
        counterport->setGeometry(QRect(278, 137, 59, 27));
        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(240, 104, 97, 27));
        label_8->setStyleSheet(QStringLiteral("background-color:rgba(255, 255, 255, 0)"));
        cwport = new QLineEdit(page);
        cwport->setObjectName(QStringLiteral("cwport"));
        cwport->setGeometry(QRect(278, 71, 59, 27));
        label_17 = new QLabel(page);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(270, 660, 201, 20));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_16 = new QLabel(page_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(40, 20, 561, 521));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 696, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        trig_led->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Control Word", 0));
        out_led->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "Counter Number", 0));
        label_15->setText(QApplication::translate("MainWindow", "Mode", 0));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">8253 PIT.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">There are 6 (mode 0-5) modes, the 8253 IC can work in. It comprises of 3 counters (Counter 0, Counter 1, Counter 2).</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The counter latching operation should be 'Read/Load LSB only'.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:"
                        "0px;\">And it should be a BCD counter only.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A proper command word, with proper port addresses will result in a succesfull execution.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Port Addresses: 30 (Counter 0), 31 (Counter 1), 32 (Counter 2), 33 (Command Word).</p></body></html>", 0));
        label_12->setText(QApplication::translate("MainWindow", "Control Word", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Go!", 0));
        trigger_signal->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Trigger", 0));
        label_3->setText(QApplication::translate("MainWindow", "Out:", 0));
        out_signal->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "Count", 0));
        trigger->setText(QApplication::translate("MainWindow", "Trigger!", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "About App", 0));
        pulse->setText(QApplication::translate("MainWindow", "Pulse!", 0));
        label_2->setText(QApplication::translate("MainWindow", "Count", 0));
        label_18->setText(QApplication::translate("MainWindow", "8253", 0));
        label_9->setText(QApplication::translate("MainWindow", "INT 3", 0));
        label_6->setText(QApplication::translate("MainWindow", "OUT", 0));
        label_10->setText(QApplication::translate("MainWindow", ", AL", 0));
        label_7->setText(QApplication::translate("MainWindow", "OUT", 0));
        label_11->setText(QApplication::translate("MainWindow", ", AL", 0));
        label_5->setText(QApplication::translate("MainWindow", "MOV AL,", 0));
        label_8->setText(QApplication::translate("MainWindow", "MOV AL,", 0));
        label_17->setText(QApplication::translate("MainWindow", "Developed By: Ritesh Pallod", 0));
        label_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#4210d8;\">Copy All Image Files From Project Directory to build directory.</span></p><p><span style=\" color:#dace1d;\">Best viewd in 1080p.</span></p><p>This application is developed to simulate the <span style=\" color:#ff0000;\">Environment of</span></p><p><span style=\" color:#ff0000;\">MIT KIT Assignment Practicals </span><span style=\" color:#000000;\">for those who haven't practiced them well in lab.</span></p><p>These Applications are rapidly developed within the duration of just<span style=\" color:#00aa00;\"> two</span> days.</p><p>Therefore this application may not meet the <span style=\" color:#00aa00;\">expectations</span> of many users.</p><p>Still having something to practice with is always better than having nothing.</p><p>Note that <span style=\" color:#00aa00;\">Only 8251</span> have 'Simulated Compiler' support. </p><p>So be CAREFUL and type ONLY valid codes. If you are facing any problem </p><p>with this application </p><p><span style=\" color:#ff0"
                        "000;\">1]</span> Please use <span style=\" color:#ff0000;\">sample code</span> given in the Project directoy.</p><p><span style=\" color:#ff0000;\">2] </span>Or refer to the <span style=\" color:#ff0000;\">video </span>given in the same directory.</p><p>and if you like to develop things you are always <span style=\" color:#00aa00;\">welcome to contribute</span></p><p>to repository.<br/>-Ritesh PallodFor details and bugs report and review :P: Whatsapp at 9763036878</p><p><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
