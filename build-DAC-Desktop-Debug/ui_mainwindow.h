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
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QTextBrowser *display_terminal;
    QVBoxLayout *verticalLayout;
    QPushButton *DAC;
    QPushButton *ADC;
    QGridLayout *gridLayout;
    QRadioButton *fw;
    QRadioButton *sw;
    QRadioButton *zz;
    QRadioButton *stw;
    QLabel *label_6;
    QPushButton *setvoltage;
    QLineEdit *terminal;
    QSpacerItem *horizontalSpacer;
    QLabel *label_9;
    QPushButton *about;
    QLabel *blockdigs;
    QWidget *page_2;
    QLabel *label;
    QWidget *page_3;
    QLCDNumber *lcdNumber;
    QDial *dial;
    QPushButton *ret;
    QLabel *label_2;
    QWidget *page_4;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 974);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(123, 233, 255, 255), stop:1 rgba(255,255,255 255))\n"
""));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(1360, 680));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        display_terminal = new QTextBrowser(page);
        display_terminal->setObjectName(QStringLiteral("display_terminal"));
        display_terminal->setStyleSheet(QStringLiteral("background-color : black; color : white"));

        gridLayout_3->addWidget(display_terminal, 1, 0, 4, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        DAC = new QPushButton(page);
        DAC->setObjectName(QStringLiteral("DAC"));

        verticalLayout->addWidget(DAC);

        ADC = new QPushButton(page);
        ADC->setObjectName(QStringLiteral("ADC"));

        verticalLayout->addWidget(ADC);


        gridLayout_3->addLayout(verticalLayout, 2, 1, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        fw = new QRadioButton(page);
        fw->setObjectName(QStringLiteral("fw"));

        gridLayout->addWidget(fw, 4, 0, 1, 1);

        sw = new QRadioButton(page);
        sw->setObjectName(QStringLiteral("sw"));

        gridLayout->addWidget(sw, 0, 0, 1, 1);

        zz = new QRadioButton(page);
        zz->setObjectName(QStringLiteral("zz"));

        gridLayout->addWidget(zz, 1, 0, 1, 1);

        stw = new QRadioButton(page);
        stw->setObjectName(QStringLiteral("stw"));

        gridLayout->addWidget(stw, 3, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 4, 1, 1, 2);

        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setPointSize(20);
        label_6->setFont(font);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        setvoltage = new QPushButton(page);
        setvoltage->setObjectName(QStringLiteral("setvoltage"));

        gridLayout_3->addWidget(setvoltage, 3, 1, 1, 2);

        terminal = new QLineEdit(page);
        terminal->setObjectName(QStringLiteral("terminal"));
        terminal->setStyleSheet(QStringLiteral("background-color : black; color : white"));

        gridLayout_3->addWidget(terminal, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 3, 1, 1);

        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("background-color: rgba(94, 255, 148, 0);"));

        gridLayout_3->addWidget(label_9, 6, 0, 1, 1);

        about = new QPushButton(page);
        about->setObjectName(QStringLiteral("about"));

        gridLayout_3->addWidget(about, 0, 1, 2, 2);

        blockdigs = new QLabel(page);
        blockdigs->setObjectName(QStringLiteral("blockdigs"));
        blockdigs->setScaledContents(true);

        gridLayout_3->addWidget(blockdigs, 4, 3, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 400, 400));
        label->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
""));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        lcdNumber = new QLCDNumber(page_3);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(200, 120, 231, 81));
        lcdNumber->setStyleSheet(QLatin1String("color:red;background-color:black\n"
""));
        lcdNumber->setFrameShape(QFrame::Box);
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setDigitCount(3);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        dial = new QDial(page_3);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(270, 220, 131, 101));
        ret = new QPushButton(page_3);
        ret->setObjectName(QStringLiteral("ret"));
        ret->setGeometry(QRect(30, 20, 99, 27));
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 60, 81, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("UnDinaru"));
        font1.setPointSize(15);
        label_2->setFont(font1);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_8 = new QLabel(page_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, -30, 561, 551));
        stackedWidget->addWidget(page_4);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 25));
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
        display_terminal->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        DAC->setText(QApplication::translate("MainWindow", "Perform DAC", 0));
        ADC->setText(QApplication::translate("MainWindow", "Perform ADC", 0));
        fw->setText(QApplication::translate("MainWindow", "Forward wave", 0));
        sw->setText(QApplication::translate("MainWindow", "Square wave", 0));
        zz->setText(QApplication::translate("MainWindow", "ZIG-ZAG wave", 0));
        stw->setText(QApplication::translate("MainWindow", "Stepping Wave", 0));
        label_6->setText(QApplication::translate("MainWindow", "8255: DAC-ADC", 0));
        setvoltage->setText(QApplication::translate("MainWindow", "Set Voltage", 0));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Developed By : Niranjan Rathod (SE-4)</p></body></html>", 0));
        about->setText(QApplication::translate("MainWindow", "About App", 0));
        blockdigs->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        ret->setText(QApplication::translate("MainWindow", "<-- Return", 0));
        label_2->setText(QApplication::translate("MainWindow", "VOLTAGE", 0));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#4210d8;\">Copy All Image Files From Project Directory to build directory.</span></p><p><span style=\" color:#000000;\">Best viewd in 1080p</span><span style=\" color:#dace1d;\">.</span></p><p>This application is developed to simulate the <span style=\" color:#ff0000;\">Environment of</span></p><p><span style=\" color:#ff0000;\">MIT KIT Assignment Practicals </span><span style=\" color:#000000;\">for those who haven't practiced them well in Lab.</span></p><p>These Applications are rapidly developed within duration of<span style=\" color:#00aa00;\"> two</span> days.</p><p>Therefore this application may not meet <span style=\" color:#00aa00;\">expection</span> of many users.</p><p>Still having something to practise is always better than having nothing.</p><p>Note that <span style=\" color:#00aa00;\">Only 8251</span> have 'Simulated Compiler' support. </p><p>So be Careful and type ONLY valid codes. If you are facing any problem </p><p>with this application </p><p><span s"
                        "tyle=\" color:#ff0000;\">1]</span> Please Use <span style=\" color:#ff0000;\">sample code</span> given in Project directoy.</p><p><span style=\" color:#ff0000;\">2] </span>Or refer to <span style=\" color:#ff0000;\">video </span>given in same directory.</p><p>and if you like to develop things you are always <span style=\" color:#00aa00;\">welcome to contribute</span></p><p>to repository.</p><p>-Niranjan Rathod </p><p>For Details and bugs report and reviews :P: Whatsapp at 7276757446<br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
