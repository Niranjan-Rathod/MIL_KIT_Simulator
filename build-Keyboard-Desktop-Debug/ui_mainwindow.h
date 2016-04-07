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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *terminal;
    QPushButton *about;
    QPushButton *enter;
    QLabel *label_9;
    QGridLayout *gridLayout;
    QRadioButton *Le;
    QRadioButton *Re;
    QRadioButton *Roll;
    QRadioButton *Flash;
    QPushButton *Enterdata;
    QPushButton *wdr;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *blockdig;
    QTextBrowser *display_terminal;
    QWidget *page_4;
    QGridLayout *gridLayout_4;
    QPushButton *return_3;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *display_terminal_2;
    QLineEdit *terminal_2;
    QWidget *page_2;
    QGridLayout *gridLayout_5;
    QPushButton *return_2;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdNumber8;
    QLCDNumber *lcdNumber7;
    QLCDNumber *lcdNumber6;
    QLCDNumber *lcdNumber5;
    QLCDNumber *lcdNumber4;
    QLCDNumber *lcdNumber3;
    QLCDNumber *lcdNumber2;
    QLCDNumber *lcdNumber1;
    QWidget *page_3;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1255, 726);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(101, 166, 58, 255), stop:1 rgba(196, 255, 192, 255))"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setMaximumSize(QSize(1360, 680));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(18);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background-color: rgba(201, 255, 218,0);"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 4, 1, 1, 1);

        terminal = new QLineEdit(page);
        terminal->setObjectName(QStringLiteral("terminal"));
        terminal->setStyleSheet(QStringLiteral("background-color : black; color : white"));

        gridLayout_3->addWidget(terminal, 4, 0, 1, 1);

        about = new QPushButton(page);
        about->setObjectName(QStringLiteral("about"));

        gridLayout_3->addWidget(about, 0, 2, 1, 1);

        enter = new QPushButton(page);
        enter->setObjectName(QStringLiteral("enter"));

        gridLayout_3->addWidget(enter, 4, 2, 1, 1);

        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("background-color: rgba(184, 255, 217,0);"));

        gridLayout_3->addWidget(label_9, 5, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Le = new QRadioButton(page);
        Le->setObjectName(QStringLiteral("Le"));

        gridLayout->addWidget(Le, 0, 0, 1, 1);

        Re = new QRadioButton(page);
        Re->setObjectName(QStringLiteral("Re"));

        gridLayout->addWidget(Re, 1, 0, 1, 1);

        Roll = new QRadioButton(page);
        Roll->setObjectName(QStringLiteral("Roll"));

        gridLayout->addWidget(Roll, 2, 0, 1, 1);

        Flash = new QRadioButton(page);
        Flash->setObjectName(QStringLiteral("Flash"));

        gridLayout->addWidget(Flash, 3, 0, 1, 1);

        Enterdata = new QPushButton(page);
        Enterdata->setObjectName(QStringLiteral("Enterdata"));

        gridLayout->addWidget(Enterdata, 4, 0, 1, 1);

        wdr = new QPushButton(page);
        wdr->setObjectName(QStringLiteral("wdr"));

        gridLayout->addWidget(wdr, 5, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 1, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: rgba(164, 255, 190,0);"));

        gridLayout_3->addWidget(label, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 2, 1, 1);

        blockdig = new QLabel(page);
        blockdig->setObjectName(QStringLiteral("blockdig"));
        blockdig->setScaledContents(true);

        gridLayout_3->addWidget(blockdig, 3, 2, 1, 1);

        display_terminal = new QTextBrowser(page);
        display_terminal->setObjectName(QStringLiteral("display_terminal"));
        display_terminal->setStyleSheet(QStringLiteral("background-color : black; color : white"));

        gridLayout_3->addWidget(display_terminal, 1, 0, 3, 1);

        stackedWidget->addWidget(page);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout_4 = new QGridLayout(page_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        return_3 = new QPushButton(page_4);
        return_3->setObjectName(QStringLiteral("return_3"));

        gridLayout_4->addWidget(return_3, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        display_terminal_2 = new QTextBrowser(page_4);
        display_terminal_2->setObjectName(QStringLiteral("display_terminal_2"));
        display_terminal_2->setStyleSheet(QStringLiteral("background-color : black; color : white"));

        verticalLayout_2->addWidget(display_terminal_2);


        gridLayout_4->addLayout(verticalLayout_2, 0, 1, 1, 1);

        terminal_2 = new QLineEdit(page_4);
        terminal_2->setObjectName(QStringLiteral("terminal_2"));
        terminal_2->setStyleSheet(QStringLiteral("background-color : black; color : white"));

        gridLayout_4->addWidget(terminal_2, 1, 1, 1, 1);

        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_5 = new QGridLayout(page_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        return_2 = new QPushButton(page_2);
        return_2->setObjectName(QStringLiteral("return_2"));

        gridLayout_5->addWidget(return_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lcdNumber8 = new QLCDNumber(page_2);
        lcdNumber8->setObjectName(QStringLiteral("lcdNumber8"));
        lcdNumber8->setStyleSheet(QStringLiteral("color:red;background-color:black;"));
        lcdNumber8->setDigitCount(1);
        lcdNumber8->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber8);

        lcdNumber7 = new QLCDNumber(page_2);
        lcdNumber7->setObjectName(QStringLiteral("lcdNumber7"));
        lcdNumber7->setStyleSheet(QStringLiteral("color:red;background-color:black;"));
        lcdNumber7->setDigitCount(1);
        lcdNumber7->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber7);

        lcdNumber6 = new QLCDNumber(page_2);
        lcdNumber6->setObjectName(QStringLiteral("lcdNumber6"));
        lcdNumber6->setStyleSheet(QStringLiteral("color:red;background-color:black;"));
        lcdNumber6->setDigitCount(1);
        lcdNumber6->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber6);

        lcdNumber5 = new QLCDNumber(page_2);
        lcdNumber5->setObjectName(QStringLiteral("lcdNumber5"));
        lcdNumber5->setStyleSheet(QStringLiteral("color:red;background-color:black;"));
        lcdNumber5->setDigitCount(1);
        lcdNumber5->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber5);

        lcdNumber4 = new QLCDNumber(page_2);
        lcdNumber4->setObjectName(QStringLiteral("lcdNumber4"));
        lcdNumber4->setStyleSheet(QStringLiteral("color:red;background-color:black;"));
        lcdNumber4->setDigitCount(1);
        lcdNumber4->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber4);

        lcdNumber3 = new QLCDNumber(page_2);
        lcdNumber3->setObjectName(QStringLiteral("lcdNumber3"));
        lcdNumber3->setStyleSheet(QLatin1String("color:red;background-color:black;\n"
""));
        lcdNumber3->setDigitCount(1);
        lcdNumber3->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber3);

        lcdNumber2 = new QLCDNumber(page_2);
        lcdNumber2->setObjectName(QStringLiteral("lcdNumber2"));
        lcdNumber2->setStyleSheet(QLatin1String("color:red;background-color:black;\n"
""));
        lcdNumber2->setDigitCount(1);
        lcdNumber2->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber2);

        lcdNumber1 = new QLCDNumber(page_2);
        lcdNumber1->setObjectName(QStringLiteral("lcdNumber1"));
        lcdNumber1->setStyleSheet(QStringLiteral("color:red;background-color:black;"));
        lcdNumber1->setDigitCount(1);
        lcdNumber1->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber1);


        gridLayout_5->addLayout(horizontalLayout, 1, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_6 = new QGridLayout(page_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_8 = new QLabel(page_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1255, 25));
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
        label_2->setText(QApplication::translate("MainWindow", "8279 : KeyBoard", 0));
        about->setText(QApplication::translate("MainWindow", "About App", 0));
        enter->setText(QApplication::translate("MainWindow", "Enter", 0));
        label_9->setText(QApplication::translate("MainWindow", "Developed By : Niranjan Rathod (SE-4)", 0));
        Le->setText(QApplication::translate("MainWindow", "Left Entry ", 0));
        Re->setText(QApplication::translate("MainWindow", "Right Entry", 0));
        Roll->setText(QApplication::translate("MainWindow", "Rolling", 0));
        Flash->setText(QApplication::translate("MainWindow", "Flashing", 0));
        Enterdata->setText(QApplication::translate("MainWindow", "Enter data", 0));
        wdr->setText(QApplication::translate("MainWindow", "Write Delay Routine", 0));
        label->setText(QString());
        blockdig->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        display_terminal->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        return_3->setText(QApplication::translate("MainWindow", "<--- Return", 0));
        display_terminal_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        return_2->setText(QApplication::translate("MainWindow", "<--- Return", 0));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#4210d8;\">Copy All Image Files From Project Directory to build directory.</span></p><p><span style=\" color:#000000;\">Best viewd in 1080p.</span></p><p>This application is developed to simulate the <span style=\" color:#ff0000;\">Environment of</span></p><p><span style=\" color:#ff0000;\">MIT KIT Assignment Practicals </span><span style=\" color:#000000;\">for those who haven't practiced them well in Lab.</span></p><p>These Applications are rapidly developed within duration of<span style=\" color:#00aa00;\"> two</span> days.</p><p>Therefore this application may not meet <span style=\" color:#00aa00;\">expection</span> of many users.</p><p>Still having something to practise is always better than having nothing.</p><p>Note that <span style=\" color:#00aa00;\">Only 8251</span> have 'Simulated Compiler' support. </p><p>So be Careful and type ONLY valid codes. If you are facing any problem </p><p>with this application </p><p><span style=\" color:#ff0000;\">1]</span> Plea"
                        "se Use <span style=\" color:#ff0000;\">sample code</span> given in Project directoy.</p><p><span style=\" color:#ff0000;\">2] </span>Or refer to <span style=\" color:#ff0000;\">video </span>given in same directory.</p><p>and if you like to develop things you are always <span style=\" color:#00aa00;\">welcome to contribute</span></p><p>to repository.<br/>-Niranjan Rathod </p><p>For Details and bugs report and Review :P : Whatsapp at 7276757446</p><p><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
