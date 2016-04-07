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
#include <QtWidgets/QHeaderView>
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QTextBrowser *display_terminal;
    QLineEdit *terminal;
    QLabel *label_6;
    QGridLayout *gridLayout;
    QLineEdit *cwb;
    QLabel *bllable;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *dpb;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *al;
    QLineEdit *cwa;
    QLineEdit *dpa;
    QLabel *label_7;
    QLabel *dl;
    QLineEdit *bl;
    QLineEdit *cl;
    QLineEdit *dl_2;
    QPushButton *soursebut;
    QRadioButton *blocktra;
    QRadioButton *bytetra;
    QPushButton *pushButton;
    QTextBrowser *status;
    QPushButton *about;
    QPushButton *desbut;
    QLabel *blockdig;
    QLabel *label_9;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QLabel *image;
    QPushButton *pushButton_2;
    QPushButton *led1;
    QPushButton *led1_2;
    QTextBrowser *display2;
    QTextBrowser *display2_2;
    QWidget *page_3;
    QLineEdit *terminal_2;
    QTextBrowser *display_terminal_2;
    QPushButton *pushButton_3;
    QLabel *label_10;
    QWidget *page_4;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(912, 660);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(61, 167, 123, 255), stop:1 rgba(196, 255, 192, 255))"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(1360, 680));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        display_terminal = new QTextBrowser(page);
        display_terminal->setObjectName(QStringLiteral("display_terminal"));
        display_terminal->setStyleSheet(QStringLiteral("background-color : black; color : white"));

        gridLayout_2->addWidget(display_terminal, 1, 0, 10, 1);

        terminal = new QLineEdit(page);
        terminal->setObjectName(QStringLiteral("terminal"));
        terminal->setStyleSheet(QStringLiteral("background-color : black; color : white"));

        gridLayout_2->addWidget(terminal, 11, 0, 1, 1);

        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setPointSize(20);
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("background-color: rgba(20, 141, 58,123);"));
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cwb = new QLineEdit(page);
        cwb->setObjectName(QStringLiteral("cwb"));

        gridLayout->addWidget(cwb, 1, 1, 1, 1);

        bllable = new QLabel(page);
        bllable->setObjectName(QStringLiteral("bllable"));

        gridLayout->addWidget(bllable, 5, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        dpb = new QLineEdit(page);
        dpb->setObjectName(QStringLiteral("dpb"));

        gridLayout->addWidget(dpb, 3, 1, 1, 1);

        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        al = new QLineEdit(page);
        al->setObjectName(QStringLiteral("al"));

        gridLayout->addWidget(al, 4, 1, 1, 1);

        cwa = new QLineEdit(page);
        cwa->setObjectName(QStringLiteral("cwa"));

        gridLayout->addWidget(cwa, 0, 1, 1, 1);

        dpa = new QLineEdit(page);
        dpa->setObjectName(QStringLiteral("dpa"));

        gridLayout->addWidget(dpa, 2, 1, 1, 1);

        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        dl = new QLabel(page);
        dl->setObjectName(QStringLiteral("dl"));

        gridLayout->addWidget(dl, 7, 0, 1, 1);

        bl = new QLineEdit(page);
        bl->setObjectName(QStringLiteral("bl"));

        gridLayout->addWidget(bl, 5, 1, 1, 1);

        cl = new QLineEdit(page);
        cl->setObjectName(QStringLiteral("cl"));

        gridLayout->addWidget(cl, 6, 1, 1, 1);

        dl_2 = new QLineEdit(page);
        dl_2->setObjectName(QStringLiteral("dl_2"));

        gridLayout->addWidget(dl_2, 7, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 1, 5, 1);

        soursebut = new QPushButton(page);
        soursebut->setObjectName(QStringLiteral("soursebut"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        soursebut->setFont(font1);
        soursebut->setStyleSheet(QStringLiteral("color:Blue"));

        gridLayout_2->addWidget(soursebut, 4, 3, 1, 1);

        blocktra = new QRadioButton(page);
        blocktra->setObjectName(QStringLiteral("blocktra"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        blocktra->setFont(font2);

        gridLayout_2->addWidget(blocktra, 3, 2, 1, 2);

        bytetra = new QRadioButton(page);
        bytetra->setObjectName(QStringLiteral("bytetra"));
        bytetra->setFont(font2);

        gridLayout_2->addWidget(bytetra, 2, 2, 1, 2);

        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 11, 1, 1, 1);

        status = new QTextBrowser(page);
        status->setObjectName(QStringLiteral("status"));
        status->setStyleSheet(QStringLiteral("background-color: rgba(92, 255, 223,0);"));
        status->setFrameShape(QFrame::NoFrame);
        status->setLineWidth(5);

        gridLayout_2->addWidget(status, 9, 1, 1, 1);

        about = new QPushButton(page);
        about->setObjectName(QStringLiteral("about"));

        gridLayout_2->addWidget(about, 0, 3, 1, 1);

        desbut = new QPushButton(page);
        desbut->setObjectName(QStringLiteral("desbut"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        desbut->setFont(font3);
        desbut->setStyleSheet(QStringLiteral("color:blue"));

        gridLayout_2->addWidget(desbut, 5, 3, 1, 1);

        blockdig = new QLabel(page);
        blockdig->setObjectName(QStringLiteral("blockdig"));
        blockdig->setStyleSheet(QStringLiteral("background-color: rgba(92, 255, 223,0);"));
        blockdig->setScaledContents(true);

        gridLayout_2->addWidget(blockdig, 6, 3, 6, 1);

        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 13, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 12, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        image = new QLabel(page_2);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(0, 10, 601, 571));
        sizePolicy.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy);
        image->setScaledContents(false);
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 340, 31, 71));
        pushButton_2->setStyleSheet(QStringLiteral("background-color:rgb(255, 0, 0);"));
        led1 = new QPushButton(page_2);
        led1->setObjectName(QStringLiteral("led1"));
        led1->setGeometry(QRect(30, 320, 21, 21));
        led1_2 = new QPushButton(page_2);
        led1_2->setObjectName(QStringLiteral("led1_2"));
        led1_2->setGeometry(QRect(30, 280, 21, 21));
        display2 = new QTextBrowser(page_2);
        display2->setObjectName(QStringLiteral("display2"));
        display2->setGeometry(QRect(0, 0, 361, 121));
        display2_2 = new QTextBrowser(page_2);
        display2_2->setObjectName(QStringLiteral("display2_2"));
        display2_2->setGeometry(QRect(370, 10, 231, 81));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        terminal_2 = new QLineEdit(page_3);
        terminal_2->setObjectName(QStringLiteral("terminal_2"));
        terminal_2->setGeometry(QRect(150, 386, 351, 41));
        terminal_2->setStyleSheet(QStringLiteral("background-color : black; color : white"));
        display_terminal_2 = new QTextBrowser(page_3);
        display_terminal_2->setObjectName(QStringLiteral("display_terminal_2"));
        display_terminal_2->setGeometry(QRect(150, 10, 351, 371));
        display_terminal_2->setStyleSheet(QStringLiteral("background-color : black; color : white"));
        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 10, 99, 27));
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 50, 121, 91));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_8 = new QLabel(page_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(36, 20, 561, 501));
        stackedWidget->addWidget(page_4);

        gridLayout_3->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 912, 25));
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
        label_6->setText(QApplication::translate("MainWindow", "8251 : USART", 0));
        bllable->setText(QApplication::translate("MainWindow", "BL", 0));
        label->setText(QApplication::translate("MainWindow", "CW-A", 0));
        label_2->setText(QApplication::translate("MainWindow", "CW_B", 0));
        label_5->setText(QApplication::translate("MainWindow", "AL", 0));
        label_3->setText(QApplication::translate("MainWindow", "DP-A", 0));
        label_4->setText(QApplication::translate("MainWindow", "DP-B", 0));
        label_7->setText(QApplication::translate("MainWindow", "CL", 0));
        dl->setText(QApplication::translate("MainWindow", "DL", 0));
        soursebut->setText(QApplication::translate("MainWindow", "Enter Data on source address", 0));
        blocktra->setText(QApplication::translate("MainWindow", "Block Transfer", 0));
        bytetra->setText(QApplication::translate("MainWindow", "Byte Transfer", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Hardware Mode", 0));
        about->setText(QApplication::translate("MainWindow", "About App", 0));
        desbut->setText(QApplication::translate("MainWindow", "See Data on Destination address", 0));
        blockdig->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_9->setText(QApplication::translate("MainWindow", "Developed By : Niranjan Rathod (SE-4)", 0));
        image->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "C\n"
"L\n"
"K", 0));
        led1->setText(QString());
        led1_2->setText(QString());
        display2_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If you are unable to see Kit image on left. copy &quot;dyna8251.jpg&quot; from project derectory to build directory .</p></body></html>", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "<-- Return", 0));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Use &quot;E&quot; command</p><p> to enter data.</p></body></html>", 0));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#4210d8;\">Copy All Image Files From Project Directory to build directory.</span></p><p><span style=\" color:#dace1d;\">Best viewd in 1080p.</span></p><p>This application is developed to simulate the <span style=\" color:#ff0000;\">Environment of</span></p><p><span style=\" color:#ff0000;\">MIT KIT Assignment Practicals </span><span style=\" color:#000000;\">for those who haven't practiced them well in Lab.</span></p><p>These Applications are rapidly developed within duration of<span style=\" color:#00aa00;\"> two</span> days.</p><p>Therefore this application may not meet <span style=\" color:#00aa00;\">expection</span> of many users.</p><p>Still having something to practise is always better than having nothing.</p><p>Note that <span style=\" color:#00aa00;\">Only 8251</span> have 'Simulated Compiler' support. </p><p>So be Careful and type ONLY valid codes. If you are facing any problem </p><p>with this application </p><p><span style=\" color:#ff0000;\">1]</span> Plea"
                        "se Use <span style=\" color:#ff0000;\">sample code</span> given in Project directoy.</p><p><span style=\" color:#ff0000;\">2] </span>Or refer to <span style=\" color:#ff0000;\">video </span>given in same directory.</p><p>and if you like to develop things you are always <span style=\" color:#00aa00;\">welcome to contribute</span></p><p>to repository.<br/>-Niranjan Rathod </p><p>For Details and bugs report and review : P : Whatsapp at +917276757446</p><p><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
