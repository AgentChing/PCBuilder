/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *display;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *leMinprice;
    QLineEdit *leMaxprice;
    QFrame *line_2;
    QLabel *label_3;
    QLineEdit *leBudget;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QPushButton *bPakage1;
    QPushButton *bPakage2;
    QPushButton *bPakage3;
    QPushButton *bPakage4;
    QPushButton *bPakage5;
    QPushButton *bPakage6;
    QFrame *line_6;
    QLabel *label_4;
    QLineEdit *lefinalprice;
    QLabel *label_5;
    QFrame *line_7;
    QPushButton *bDetailgraphics;
    QPushButton *bDetailprocessor;
    QPushButton *bDetailram;
    QPushButton *bDetailstore;
    QPushButton *bDetailmother;
    QPushButton *bDetailpower;
    QPushButton *bDetailram_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *leBrandproce;
    QLineEdit *leBrandgraph;
    QLineEdit *leBrandram;
    QLineEdit *leBrandstora;
    QLineEdit *leBrandmother;
    QLineEdit *leBrandpower;
    QLineEdit *leModelram;
    QLineEdit *leModelgraph;
    QLineEdit *leModelmother;
    QLineEdit *leModelstorag;
    QLineEdit *leModelpower;
    QLineEdit *leModelProce;
    QLineEdit *lePriceram;
    QLineEdit *lePricegraphi;
    QLineEdit *lePricemother;
    QLineEdit *lePricestorag;
    QLineEdit *lePricepower;
    QLineEdit *lePriceproces;
    QFrame *line_13;
    QFrame *line_14;
    QFrame *line_15;
    QFrame *line_16;
    QFrame *line_17;
    QFrame *line_21;
    QFrame *line_23;
    QFrame *line_22;
    QFrame *line_18;
    QFrame *line_20;
    QFrame *line_19;
    QFrame *line_24;
    QFrame *line_25;
    QFrame *line_26;
    QFrame *line_27;
    QFrame *line_28;
    QFrame *line_29;
    QFrame *line_30;
    QFrame *line_32;
    QFrame *line_33;
    QFrame *line_34;
    QFrame *line_35;
    QPushButton *bBuild;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1239, 744);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(160, 0, 20, 161));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(649, 9, 581, 681));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        display = new QTextBrowser(verticalLayoutWidget);
        display->setObjectName(QString::fromUtf8("display"));

        verticalLayout->addWidget(display);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 111, 31));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 111, 31));
        label_2->setFont(font);
        leMinprice = new QLineEdit(centralwidget);
        leMinprice->setObjectName(QString::fromUtf8("leMinprice"));
        leMinprice->setGeometry(QRect(10, 40, 141, 31));
        leMaxprice = new QLineEdit(centralwidget);
        leMaxprice->setObjectName(QString::fromUtf8("leMaxprice"));
        leMaxprice->setGeometry(QRect(10, 120, 141, 31));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 70, 161, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 30, 161, 31));
        QFont font1;
        font1.setPointSize(11);
        label_3->setFont(font1);
        leBudget = new QLineEdit(centralwidget);
        leBudget->setObjectName(QString::fromUtf8("leBudget"));
        leBudget->setGeometry(QRect(350, 30, 181, 31));
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(180, 70, 461, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 150, 161, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(180, 150, 461, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        bPakage1 = new QPushButton(centralwidget);
        bPakage1->setObjectName(QString::fromUtf8("bPakage1"));
        bPakage1->setGeometry(QRect(210, 90, 101, 21));
        bPakage2 = new QPushButton(centralwidget);
        bPakage2->setObjectName(QString::fromUtf8("bPakage2"));
        bPakage2->setGeometry(QRect(360, 90, 101, 21));
        bPakage3 = new QPushButton(centralwidget);
        bPakage3->setObjectName(QString::fromUtf8("bPakage3"));
        bPakage3->setGeometry(QRect(510, 90, 101, 21));
        bPakage4 = new QPushButton(centralwidget);
        bPakage4->setObjectName(QString::fromUtf8("bPakage4"));
        bPakage4->setGeometry(QRect(210, 130, 101, 21));
        bPakage5 = new QPushButton(centralwidget);
        bPakage5->setObjectName(QString::fromUtf8("bPakage5"));
        bPakage5->setGeometry(QRect(360, 130, 101, 21));
        bPakage6 = new QPushButton(centralwidget);
        bPakage6->setObjectName(QString::fromUtf8("bPakage6"));
        bPakage6->setGeometry(QRect(510, 130, 101, 21));
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(0, 620, 641, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 650, 121, 31));
        QFont font2;
        font2.setPointSize(13);
        label_4->setFont(font2);
        lefinalprice = new QLineEdit(centralwidget);
        lefinalprice->setObjectName(QString::fromUtf8("lefinalprice"));
        lefinalprice->setGeometry(QRect(140, 640, 341, 41));
        QFont font3;
        font3.setPointSize(12);
        lefinalprice->setFont(font3);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 220, 91, 31));
        QFont font4;
        font4.setPointSize(8);
        label_5->setFont(font4);
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(0, 180, 641, 16));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        bDetailgraphics = new QPushButton(centralwidget);
        bDetailgraphics->setObjectName(QString::fromUtf8("bDetailgraphics"));
        bDetailgraphics->setGeometry(QRect(560, 300, 51, 21));
        bDetailprocessor = new QPushButton(centralwidget);
        bDetailprocessor->setObjectName(QString::fromUtf8("bDetailprocessor"));
        bDetailprocessor->setGeometry(QRect(560, 220, 51, 21));
        bDetailram = new QPushButton(centralwidget);
        bDetailram->setObjectName(QString::fromUtf8("bDetailram"));
        bDetailram->setGeometry(QRect(560, 380, 51, 21));
        bDetailstore = new QPushButton(centralwidget);
        bDetailstore->setObjectName(QString::fromUtf8("bDetailstore"));
        bDetailstore->setGeometry(QRect(560, 460, 51, 21));
        bDetailmother = new QPushButton(centralwidget);
        bDetailmother->setObjectName(QString::fromUtf8("bDetailmother"));
        bDetailmother->setGeometry(QRect(560, 530, 51, 21));
        bDetailpower = new QPushButton(centralwidget);
        bDetailpower->setObjectName(QString::fromUtf8("bDetailpower"));
        bDetailpower->setGeometry(QRect(560, 590, 51, 21));
        bDetailram_2 = new QPushButton(centralwidget);
        bDetailram_2->setObjectName(QString::fromUtf8("bDetailram_2"));
        bDetailram_2->setGeometry(QRect(500, 640, 121, 41));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 300, 91, 31));
        label_6->setFont(font4);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 380, 91, 31));
        label_7->setFont(font4);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 460, 91, 31));
        label_8->setFont(font4);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 530, 91, 31));
        label_9->setFont(font4);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 590, 91, 31));
        label_10->setFont(font4);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(160, 160, 41, 31));
        label_11->setFont(font);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(310, 160, 41, 31));
        label_12->setFont(font);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(450, 160, 41, 31));
        label_13->setFont(font);
        leBrandproce = new QLineEdit(centralwidget);
        leBrandproce->setObjectName(QString::fromUtf8("leBrandproce"));
        leBrandproce->setGeometry(QRect(110, 220, 141, 31));
        leBrandgraph = new QLineEdit(centralwidget);
        leBrandgraph->setObjectName(QString::fromUtf8("leBrandgraph"));
        leBrandgraph->setGeometry(QRect(110, 300, 141, 31));
        leBrandram = new QLineEdit(centralwidget);
        leBrandram->setObjectName(QString::fromUtf8("leBrandram"));
        leBrandram->setGeometry(QRect(110, 380, 141, 31));
        leBrandstora = new QLineEdit(centralwidget);
        leBrandstora->setObjectName(QString::fromUtf8("leBrandstora"));
        leBrandstora->setGeometry(QRect(110, 460, 141, 31));
        leBrandmother = new QLineEdit(centralwidget);
        leBrandmother->setObjectName(QString::fromUtf8("leBrandmother"));
        leBrandmother->setGeometry(QRect(110, 530, 141, 31));
        leBrandpower = new QLineEdit(centralwidget);
        leBrandpower->setObjectName(QString::fromUtf8("leBrandpower"));
        leBrandpower->setGeometry(QRect(110, 590, 141, 31));
        leModelram = new QLineEdit(centralwidget);
        leModelram->setObjectName(QString::fromUtf8("leModelram"));
        leModelram->setGeometry(QRect(250, 380, 161, 31));
        leModelgraph = new QLineEdit(centralwidget);
        leModelgraph->setObjectName(QString::fromUtf8("leModelgraph"));
        leModelgraph->setGeometry(QRect(250, 300, 161, 31));
        leModelmother = new QLineEdit(centralwidget);
        leModelmother->setObjectName(QString::fromUtf8("leModelmother"));
        leModelmother->setGeometry(QRect(250, 530, 161, 31));
        leModelstorag = new QLineEdit(centralwidget);
        leModelstorag->setObjectName(QString::fromUtf8("leModelstorag"));
        leModelstorag->setGeometry(QRect(250, 460, 161, 31));
        leModelpower = new QLineEdit(centralwidget);
        leModelpower->setObjectName(QString::fromUtf8("leModelpower"));
        leModelpower->setGeometry(QRect(250, 590, 161, 31));
        leModelProce = new QLineEdit(centralwidget);
        leModelProce->setObjectName(QString::fromUtf8("leModelProce"));
        leModelProce->setGeometry(QRect(250, 220, 161, 31));
        lePriceram = new QLineEdit(centralwidget);
        lePriceram->setObjectName(QString::fromUtf8("lePriceram"));
        lePriceram->setGeometry(QRect(410, 380, 131, 31));
        lePricegraphi = new QLineEdit(centralwidget);
        lePricegraphi->setObjectName(QString::fromUtf8("lePricegraphi"));
        lePricegraphi->setGeometry(QRect(410, 300, 131, 31));
        lePricemother = new QLineEdit(centralwidget);
        lePricemother->setObjectName(QString::fromUtf8("lePricemother"));
        lePricemother->setGeometry(QRect(410, 530, 131, 31));
        lePricestorag = new QLineEdit(centralwidget);
        lePricestorag->setObjectName(QString::fromUtf8("lePricestorag"));
        lePricestorag->setGeometry(QRect(410, 460, 131, 31));
        lePricepower = new QLineEdit(centralwidget);
        lePricepower->setObjectName(QString::fromUtf8("lePricepower"));
        lePricepower->setGeometry(QRect(410, 590, 131, 31));
        lePriceproces = new QLineEdit(centralwidget);
        lePriceproces->setObjectName(QString::fromUtf8("lePriceproces"));
        lePriceproces->setGeometry(QRect(410, 220, 131, 31));
        line_13 = new QFrame(centralwidget);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(100, 260, 20, 31));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(centralwidget);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(100, 340, 20, 31));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_15 = new QFrame(centralwidget);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(100, 420, 20, 31));
        line_15->setFrameShape(QFrame::VLine);
        line_15->setFrameShadow(QFrame::Sunken);
        line_16 = new QFrame(centralwidget);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(100, 500, 20, 21));
        line_16->setFrameShape(QFrame::VLine);
        line_16->setFrameShadow(QFrame::Sunken);
        line_17 = new QFrame(centralwidget);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setGeometry(QRect(100, 570, 20, 16));
        line_17->setFrameShape(QFrame::VLine);
        line_17->setFrameShadow(QFrame::Sunken);
        line_21 = new QFrame(centralwidget);
        line_21->setObjectName(QString::fromUtf8("line_21"));
        line_21->setGeometry(QRect(240, 420, 20, 31));
        line_21->setFrameShape(QFrame::VLine);
        line_21->setFrameShadow(QFrame::Sunken);
        line_23 = new QFrame(centralwidget);
        line_23->setObjectName(QString::fromUtf8("line_23"));
        line_23->setGeometry(QRect(240, 191, 20, 20));
        line_23->setFrameShape(QFrame::VLine);
        line_23->setFrameShadow(QFrame::Sunken);
        line_22 = new QFrame(centralwidget);
        line_22->setObjectName(QString::fromUtf8("line_22"));
        line_22->setGeometry(QRect(240, 500, 20, 21));
        line_22->setFrameShape(QFrame::VLine);
        line_22->setFrameShadow(QFrame::Sunken);
        line_18 = new QFrame(centralwidget);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setGeometry(QRect(240, 260, 20, 31));
        line_18->setFrameShape(QFrame::VLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_20 = new QFrame(centralwidget);
        line_20->setObjectName(QString::fromUtf8("line_20"));
        line_20->setGeometry(QRect(240, 570, 20, 16));
        line_20->setFrameShape(QFrame::VLine);
        line_20->setFrameShadow(QFrame::Sunken);
        line_19 = new QFrame(centralwidget);
        line_19->setObjectName(QString::fromUtf8("line_19"));
        line_19->setGeometry(QRect(240, 340, 20, 31));
        line_19->setFrameShape(QFrame::VLine);
        line_19->setFrameShadow(QFrame::Sunken);
        line_24 = new QFrame(centralwidget);
        line_24->setObjectName(QString::fromUtf8("line_24"));
        line_24->setGeometry(QRect(400, 420, 20, 31));
        line_24->setFrameShape(QFrame::VLine);
        line_24->setFrameShadow(QFrame::Sunken);
        line_25 = new QFrame(centralwidget);
        line_25->setObjectName(QString::fromUtf8("line_25"));
        line_25->setGeometry(QRect(400, 191, 20, 20));
        line_25->setFrameShape(QFrame::VLine);
        line_25->setFrameShadow(QFrame::Sunken);
        line_26 = new QFrame(centralwidget);
        line_26->setObjectName(QString::fromUtf8("line_26"));
        line_26->setGeometry(QRect(400, 500, 20, 21));
        line_26->setFrameShape(QFrame::VLine);
        line_26->setFrameShadow(QFrame::Sunken);
        line_27 = new QFrame(centralwidget);
        line_27->setObjectName(QString::fromUtf8("line_27"));
        line_27->setGeometry(QRect(400, 260, 20, 31));
        line_27->setFrameShape(QFrame::VLine);
        line_27->setFrameShadow(QFrame::Sunken);
        line_28 = new QFrame(centralwidget);
        line_28->setObjectName(QString::fromUtf8("line_28"));
        line_28->setGeometry(QRect(400, 570, 20, 16));
        line_28->setFrameShape(QFrame::VLine);
        line_28->setFrameShadow(QFrame::Sunken);
        line_29 = new QFrame(centralwidget);
        line_29->setObjectName(QString::fromUtf8("line_29"));
        line_29->setGeometry(QRect(400, 340, 20, 31));
        line_29->setFrameShape(QFrame::VLine);
        line_29->setFrameShadow(QFrame::Sunken);
        line_30 = new QFrame(centralwidget);
        line_30->setObjectName(QString::fromUtf8("line_30"));
        line_30->setGeometry(QRect(530, 420, 20, 31));
        line_30->setFrameShape(QFrame::VLine);
        line_30->setFrameShadow(QFrame::Sunken);
        line_32 = new QFrame(centralwidget);
        line_32->setObjectName(QString::fromUtf8("line_32"));
        line_32->setGeometry(QRect(530, 500, 20, 21));
        line_32->setFrameShape(QFrame::VLine);
        line_32->setFrameShadow(QFrame::Sunken);
        line_33 = new QFrame(centralwidget);
        line_33->setObjectName(QString::fromUtf8("line_33"));
        line_33->setGeometry(QRect(530, 260, 20, 31));
        line_33->setFrameShape(QFrame::VLine);
        line_33->setFrameShadow(QFrame::Sunken);
        line_34 = new QFrame(centralwidget);
        line_34->setObjectName(QString::fromUtf8("line_34"));
        line_34->setGeometry(QRect(530, 570, 20, 16));
        line_34->setFrameShape(QFrame::VLine);
        line_34->setFrameShadow(QFrame::Sunken);
        line_35 = new QFrame(centralwidget);
        line_35->setObjectName(QString::fromUtf8("line_35"));
        line_35->setGeometry(QRect(530, 340, 20, 31));
        line_35->setFrameShape(QFrame::VLine);
        line_35->setFrameShadow(QFrame::Sunken);
        bBuild = new QPushButton(centralwidget);
        bBuild->setObjectName(QString::fromUtf8("bBuild"));
        bBuild->setGeometry(QRect(540, 20, 101, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1239, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "MIN. PRICE", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "MAX. PRICE", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter Your Budget :", nullptr));
        leBudget->setText(QString());
        bPakage1->setText(QCoreApplication::translate("MainWindow", "Package 1", nullptr));
        bPakage2->setText(QCoreApplication::translate("MainWindow", "Package 2", nullptr));
        bPakage3->setText(QCoreApplication::translate("MainWindow", "Package 3", nullptr));
        bPakage4->setText(QCoreApplication::translate("MainWindow", "Package 4", nullptr));
        bPakage5->setText(QCoreApplication::translate("MainWindow", "Package 5", nullptr));
        bPakage6->setText(QCoreApplication::translate("MainWindow", "S.Y.L Package", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Final Price :", nullptr));
        lefinalprice->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Processor", nullptr));
        bDetailgraphics->setText(QCoreApplication::translate("MainWindow", "Details", nullptr));
        bDetailprocessor->setText(QCoreApplication::translate("MainWindow", "Details ", nullptr));
        bDetailram->setText(QCoreApplication::translate("MainWindow", "Details", nullptr));
        bDetailstore->setText(QCoreApplication::translate("MainWindow", "Details", nullptr));
        bDetailmother->setText(QCoreApplication::translate("MainWindow", "Details", nullptr));
        bDetailpower->setText(QCoreApplication::translate("MainWindow", "Details", nullptr));
        bDetailram_2->setText(QCoreApplication::translate("MainWindow", "Detailed Report", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Graphics", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Ram", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Storage", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Mother Board", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Power Supply", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Brand", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Model", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        bBuild->setText(QCoreApplication::translate("MainWindow", "Build PC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
