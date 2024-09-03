/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_01;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_City;
    QPushButton *pushButton_Search;
    QSpacerItem *horizontalSpacer;
    QLabel *label_Date;
    QWidget *widget_02;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_tianqiicon;
    QGridLayout *gridLayout_7;
    QLabel *label_tianqi;
    QLabel *label_wendu;
    QLabel *label_city;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_03;
    QGridLayout *gridLayout_6;
    QLabel *label_tips;
    QWidget *widget_03_01;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_win;
    QLabel *lblWinNum;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_13;
    QLabel *lblPM25;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    QVBoxLayout *verticalLayout_24;
    QLabel *label_15;
    QLabel *label_shidu;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_26;
    QVBoxLayout *verticalLayout;
    QLabel *label_24;
    QLabel *label_air;
    QWidget *widget_04;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_0401;
    QGridLayout *gridLayout_8;
    QLabel *lblWeek0;
    QLabel *lblWeek1;
    QLabel *lblWeek2;
    QLabel *lblWeek3;
    QLabel *lblWeek4;
    QLabel *lblWeek5;
    QLabel *lblDay0;
    QLabel *lblDay1;
    QLabel *lblDay2;
    QLabel *lblDay3;
    QLabel *lblDay4;
    QLabel *lblDay5;
    QWidget *widget_0402;
    QGridLayout *gridLayout_2;
    QLabel *lblTypeIcon0;
    QLabel *lblTypeIcon1;
    QLabel *lblTypeIcon2;
    QLabel *lblTypeIcon3;
    QLabel *lblTypeIcon4;
    QLabel *lblTypeIcon5;
    QLabel *lblType0;
    QLabel *lblType1;
    QLabel *lblType2;
    QLabel *lblType3;
    QLabel *lblType4;
    QLabel *lblType5;
    QWidget *widget_0403;
    QHBoxLayout *horizontalLayout_13;
    QLabel *lblRank0;
    QLabel *lblRank1;
    QLabel *lblRank2;
    QLabel *lblRank3;
    QLabel *lblRank4;
    QLabel *lblRank5;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_0404;
    QWidget *widget_0405;
    QWidget *widget_05;
    QGridLayout *gridLayout;
    QLabel *lblwindNum5;
    QLabel *lblwindNum3;
    QLabel *lblwindNum0;
    QLabel *lblwind5;
    QLabel *lblwind4;
    QLabel *lblwind2;
    QLabel *lblwindNum4;
    QLabel *lblwind0;
    QLabel *lblwindNum1;
    QLabel *lblwind3;
    QLabel *lblwindNum2;
    QLabel *lblwind1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(488, 734);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 22, 22);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(9, 9, 471, 750));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_01 = new QWidget(layoutWidget);
        widget_01->setObjectName("widget_01");
        horizontalLayout_12 = new QHBoxLayout(widget_01);
        horizontalLayout_12->setSpacing(35);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_City = new QLineEdit(widget_01);
        lineEdit_City->setObjectName("lineEdit_City");
        lineEdit_City->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     padding: 0 8px;\n"
"     background: white;\n"
"     selection-background-color: darkgray;\n"
" }\n"
""));

        horizontalLayout->addWidget(lineEdit_City);

        pushButton_Search = new QPushButton(widget_01);
        pushButton_Search->setObjectName("pushButton_Search");
        pushButton_Search->setMinimumSize(QSize(30, 30));
        pushButton_Search->setMaximumSize(QSize(30, 30));
        pushButton_Search->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Search->setIcon(icon);

        horizontalLayout->addWidget(pushButton_Search);


        horizontalLayout_12->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);

        label_Date = new QLabel(widget_01);
        label_Date->setObjectName("label_Date");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        label_Date->setFont(font);
        label_Date->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        label_Date->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_Date);

        horizontalLayout_12->setStretch(2, 3);

        verticalLayout_5->addWidget(widget_01);

        widget_02 = new QWidget(layoutWidget);
        widget_02->setObjectName("widget_02");
        widget_02->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        horizontalLayout_11 = new QHBoxLayout(widget_02);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_tianqiicon = new QLabel(widget_02);
        label_tianqiicon->setObjectName("label_tianqiicon");
        label_tianqiicon->setMinimumSize(QSize(100, 100));
        label_tianqiicon->setMaximumSize(QSize(100, 100));
        label_tianqiicon->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Qing.png")));
        label_tianqiicon->setScaledContents(true);

        horizontalLayout_10->addWidget(label_tianqiicon);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        label_tianqi = new QLabel(widget_02);
        label_tianqi->setObjectName("label_tianqi");
        QFont font1;
        font1.setPointSize(13);
        label_tianqi->setFont(font1);
        label_tianqi->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_tianqi, 1, 0, 1, 1);

        label_wendu = new QLabel(widget_02);
        label_wendu->setObjectName("label_wendu");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font2.setPointSize(33);
        font2.setBold(false);
        font2.setItalic(false);
        label_wendu->setFont(font2);
        label_wendu->setStyleSheet(QString::fromUtf8(""));

        gridLayout_7->addWidget(label_wendu, 0, 0, 1, 1);

        label_city = new QLabel(widget_02);
        label_city->setObjectName("label_city");
        label_city->setMinimumSize(QSize(30, 0));
        QFont font3;
        font3.setPointSize(15);
        label_city->setFont(font3);
        label_city->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_city, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 1, 1, 1, 1);


        horizontalLayout_10->addLayout(gridLayout_7);


        horizontalLayout_11->addLayout(horizontalLayout_10);


        verticalLayout_5->addWidget(widget_02);

        widget_03 = new QWidget(layoutWidget);
        widget_03->setObjectName("widget_03");
        widget_03->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        gridLayout_6 = new QGridLayout(widget_03);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setHorizontalSpacing(7);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_tips = new QLabel(widget_03);
        label_tips->setObjectName("label_tips");
        label_tips->setMinimumSize(QSize(0, 50));
        label_tips->setStyleSheet(QString::fromUtf8(""));
        label_tips->setWordWrap(true);

        gridLayout_6->addWidget(label_tips, 0, 0, 1, 1);

        widget_03_01 = new QWidget(widget_03);
        widget_03_01->setObjectName("widget_03_01");
        widget_03_01->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 107, 39);\n"
"border-radius: 20px;\n"
""));
        gridLayout_5 = new QGridLayout(widget_03_01);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setHorizontalSpacing(0);
        gridLayout_5->setVerticalSpacing(10);
        gridLayout_5->setContentsMargins(30, 30, 30, 30);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(widget_03_01);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(30, 30));
        label_6->setMaximumSize(QSize(30, 30));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/res/wind.png")));
        label_6->setScaledContents(true);

        horizontalLayout_2->addWidget(label_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_win = new QLabel(widget_03_01);
        label_win->setObjectName("label_win");
        label_win->setMinimumSize(QSize(50, 0));
        label_win->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_win);

        lblWinNum = new QLabel(widget_03_01);
        lblWinNum->setObjectName("lblWinNum");
        lblWinNum->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblWinNum);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_12 = new QLabel(widget_03_01);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(30, 30));
        label_12->setMaximumSize(QSize(30, 30));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/res/pm25.png")));
        label_12->setScaledContents(true);

        horizontalLayout_4->addWidget(label_12);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_13 = new QLabel(widget_03_01);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(50, 0));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_13);

        lblPM25 = new QLabel(widget_03_01);
        lblPM25->setObjectName("lblPM25");
        lblPM25->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lblPM25);


        horizontalLayout_4->addLayout(verticalLayout_4);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_17 = new QLabel(widget_03_01);
        label_17->setObjectName("label_17");
        label_17->setMinimumSize(QSize(30, 30));
        label_17->setMaximumSize(QSize(30, 30));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/res/humidity.png")));
        label_17->setScaledContents(true);

        horizontalLayout_6->addWidget(label_17);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName("verticalLayout_24");
        label_15 = new QLabel(widget_03_01);
        label_15->setObjectName("label_15");
        label_15->setMinimumSize(QSize(50, 0));
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_24->addWidget(label_15);

        label_shidu = new QLabel(widget_03_01);
        label_shidu->setObjectName("label_shidu");
        label_shidu->setAlignment(Qt::AlignCenter);

        verticalLayout_24->addWidget(label_shidu);


        horizontalLayout_6->addLayout(verticalLayout_24);


        gridLayout_5->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_26 = new QLabel(widget_03_01);
        label_26->setObjectName("label_26");
        label_26->setMinimumSize(QSize(30, 30));
        label_26->setMaximumSize(QSize(30, 30));
        label_26->setPixmap(QPixmap(QString::fromUtf8(":/res/aqi.png")));
        label_26->setScaledContents(true);

        horizontalLayout_9->addWidget(label_26);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_24 = new QLabel(widget_03_01);
        label_24->setObjectName("label_24");
        label_24->setMinimumSize(QSize(50, 0));
        label_24->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_24);

        label_air = new QLabel(widget_03_01);
        label_air->setObjectName("label_air");
        label_air->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_air);


        horizontalLayout_9->addLayout(verticalLayout);


        gridLayout_5->addLayout(horizontalLayout_9, 1, 1, 1, 1);


        gridLayout_6->addWidget(widget_03_01, 1, 0, 1, 1);

        gridLayout_6->setRowStretch(0, 1);
        gridLayout_6->setRowStretch(1, 5);

        verticalLayout_5->addWidget(widget_03);

        widget_04 = new QWidget(layoutWidget);
        widget_04->setObjectName("widget_04");
        verticalLayout_3 = new QVBoxLayout(widget_04);
        verticalLayout_3->setSpacing(7);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_0401 = new QWidget(widget_04);
        widget_0401->setObjectName("widget_0401");
        gridLayout_8 = new QGridLayout(widget_0401);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setHorizontalSpacing(7);
        gridLayout_8->setVerticalSpacing(0);
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        lblWeek0 = new QLabel(widget_0401);
        lblWeek0->setObjectName("lblWeek0");
        lblWeek0->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(70, 195, 203);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblWeek0->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblWeek0, 0, 0, 1, 1);

        lblWeek1 = new QLabel(widget_0401);
        lblWeek1->setObjectName("lblWeek1");
        lblWeek1->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(70, 195, 203);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblWeek1->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblWeek1, 0, 1, 1, 1);

        lblWeek2 = new QLabel(widget_0401);
        lblWeek2->setObjectName("lblWeek2");
        lblWeek2->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(70, 195, 203);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblWeek2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblWeek2, 0, 2, 1, 1);

        lblWeek3 = new QLabel(widget_0401);
        lblWeek3->setObjectName("lblWeek3");
        lblWeek3->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(70, 195, 203);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblWeek3->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblWeek3, 0, 3, 1, 1);

        lblWeek4 = new QLabel(widget_0401);
        lblWeek4->setObjectName("lblWeek4");
        lblWeek4->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(70, 195, 203);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblWeek4->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblWeek4, 0, 4, 1, 1);

        lblWeek5 = new QLabel(widget_0401);
        lblWeek5->setObjectName("lblWeek5");
        lblWeek5->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(70, 195, 203);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblWeek5->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblWeek5, 0, 5, 1, 1);

        lblDay0 = new QLabel(widget_0401);
        lblDay0->setObjectName("lblDay0");
        lblDay0->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(70, 195, 203);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblDay0->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblDay0, 1, 0, 1, 1);

        lblDay1 = new QLabel(widget_0401);
        lblDay1->setObjectName("lblDay1");
        lblDay1->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(70, 195, 203);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblDay1->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblDay1, 1, 1, 1, 1);

        lblDay2 = new QLabel(widget_0401);
        lblDay2->setObjectName("lblDay2");
        lblDay2->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(70, 195, 203);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblDay2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblDay2, 1, 2, 1, 1);

        lblDay3 = new QLabel(widget_0401);
        lblDay3->setObjectName("lblDay3");
        lblDay3->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(70, 195, 203);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblDay3->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblDay3, 1, 3, 1, 1);

        lblDay4 = new QLabel(widget_0401);
        lblDay4->setObjectName("lblDay4");
        lblDay4->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(70, 195, 203);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblDay4->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblDay4, 1, 4, 1, 1);

        lblDay5 = new QLabel(widget_0401);
        lblDay5->setObjectName("lblDay5");
        lblDay5->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(70, 195, 203);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblDay5->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(lblDay5, 1, 5, 1, 1);


        verticalLayout_3->addWidget(widget_0401);

        widget_0402 = new QWidget(widget_04);
        widget_0402->setObjectName("widget_0402");
        widget_0402->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(widget_0402);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lblTypeIcon0 = new QLabel(widget_0402);
        lblTypeIcon0->setObjectName("lblTypeIcon0");
        lblTypeIcon0->setMinimumSize(QSize(0, 0));
        lblTypeIcon0->setMaximumSize(QSize(1000, 1000));
        lblTypeIcon0->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblTypeIcon0->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Qing.png")));
        lblTypeIcon0->setScaledContents(true);

        gridLayout_2->addWidget(lblTypeIcon0, 0, 0, 1, 1);

        lblTypeIcon1 = new QLabel(widget_0402);
        lblTypeIcon1->setObjectName("lblTypeIcon1");
        lblTypeIcon1->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblTypeIcon1->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Yu.png")));
        lblTypeIcon1->setScaledContents(true);

        gridLayout_2->addWidget(lblTypeIcon1, 0, 1, 1, 1);

        lblTypeIcon2 = new QLabel(widget_0402);
        lblTypeIcon2->setObjectName("lblTypeIcon2");
        lblTypeIcon2->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblTypeIcon2->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon2->setScaledContents(true);

        gridLayout_2->addWidget(lblTypeIcon2, 0, 2, 1, 1);

        lblTypeIcon3 = new QLabel(widget_0402);
        lblTypeIcon3->setObjectName("lblTypeIcon3");
        lblTypeIcon3->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblTypeIcon3->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon3->setScaledContents(true);

        gridLayout_2->addWidget(lblTypeIcon3, 0, 3, 1, 1);

        lblTypeIcon4 = new QLabel(widget_0402);
        lblTypeIcon4->setObjectName("lblTypeIcon4");
        lblTypeIcon4->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblTypeIcon4->setPixmap(QPixmap(QString::fromUtf8(":/res/type/ZhongYu.png")));
        lblTypeIcon4->setScaledContents(true);

        gridLayout_2->addWidget(lblTypeIcon4, 0, 4, 1, 1);

        lblTypeIcon5 = new QLabel(widget_0402);
        lblTypeIcon5->setObjectName("lblTypeIcon5");
        lblTypeIcon5->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblTypeIcon5->setPixmap(QPixmap(QString::fromUtf8(":/res/type/BaoYu.png")));
        lblTypeIcon5->setScaledContents(true);

        gridLayout_2->addWidget(lblTypeIcon5, 0, 5, 1, 1);

        lblType0 = new QLabel(widget_0402);
        lblType0->setObjectName("lblType0");
        lblType0->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblType0->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblType0, 1, 0, 1, 1);

        lblType1 = new QLabel(widget_0402);
        lblType1->setObjectName("lblType1");
        lblType1->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblType1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblType1, 1, 1, 1, 1);

        lblType2 = new QLabel(widget_0402);
        lblType2->setObjectName("lblType2");
        lblType2->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblType2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblType2, 1, 2, 1, 1);

        lblType3 = new QLabel(widget_0402);
        lblType3->setObjectName("lblType3");
        lblType3->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblType3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblType3, 1, 3, 1, 1);

        lblType4 = new QLabel(widget_0402);
        lblType4->setObjectName("lblType4");
        lblType4->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblType4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblType4, 1, 4, 1, 1);

        lblType5 = new QLabel(widget_0402);
        lblType5->setObjectName("lblType5");
        lblType5->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblType5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblType5, 1, 5, 1, 1);


        verticalLayout_3->addWidget(widget_0402);

        widget_0403 = new QWidget(widget_04);
        widget_0403->setObjectName("widget_0403");
        horizontalLayout_13 = new QHBoxLayout(widget_0403);
        horizontalLayout_13->setSpacing(7);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        lblRank0 = new QLabel(widget_0403);
        lblRank0->setObjectName("lblRank0");
        lblRank0->setMinimumSize(QSize(0, 45));
        lblRank0->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);\n"
"background-color: rgb(150, 213, 32);\n"
"border-radius: 5px;"));
        lblRank0->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(lblRank0);

        lblRank1 = new QLabel(widget_0403);
        lblRank1->setObjectName("lblRank1");
        lblRank1->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);\n"
"background-color: rgb(150, 213, 32);\n"
"border-radius: 5px;"));
        lblRank1->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(lblRank1);

        lblRank2 = new QLabel(widget_0403);
        lblRank2->setObjectName("lblRank2");
        lblRank2->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);\n"
"background-color: rgb(150, 213, 32);\n"
"border-radius: 5px;"));
        lblRank2->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(lblRank2);

        lblRank3 = new QLabel(widget_0403);
        lblRank3->setObjectName("lblRank3");
        lblRank3->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);\n"
"background-color: rgb(150, 213, 32);\n"
"border-radius: 5px;"));
        lblRank3->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(lblRank3);

        lblRank4 = new QLabel(widget_0403);
        lblRank4->setObjectName("lblRank4");
        lblRank4->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);\n"
"background-color: rgb(150, 213, 32);\n"
"border-radius: 5px;"));
        lblRank4->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(lblRank4);

        lblRank5 = new QLabel(widget_0403);
        lblRank5->setObjectName("lblRank5");
        lblRank5->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);\n"
"background-color: rgb(150, 213, 32);\n"
"border-radius: 5px;"));
        lblRank5->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(lblRank5);


        verticalLayout_3->addWidget(widget_0403);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        widget_0404 = new QWidget(widget_04);
        widget_0404->setObjectName("widget_0404");
        widget_0404->setMinimumSize(QSize(0, 80));
        widget_0404->setStyleSheet(QString::fromUtf8("background-color: rgb(166, 166, 166);\n"
"border-radius: 10px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));

        verticalLayout_6->addWidget(widget_0404);

        widget_0405 = new QWidget(widget_04);
        widget_0405->setObjectName("widget_0405");
        widget_0405->setMinimumSize(QSize(0, 80));
        widget_0405->setStyleSheet(QString::fromUtf8("background-color: rgb(166, 166, 166);\n"
"border-radius: 10px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));

        verticalLayout_6->addWidget(widget_0405);


        verticalLayout_3->addLayout(verticalLayout_6);

        widget_05 = new QWidget(widget_04);
        widget_05->setObjectName("widget_05");
        gridLayout = new QGridLayout(widget_05);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(7);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblwindNum5 = new QLabel(widget_05);
        lblwindNum5->setObjectName("lblwindNum5");
        lblwindNum5->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblwindNum5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblwindNum5, 1, 5, 1, 1);

        lblwindNum3 = new QLabel(widget_05);
        lblwindNum3->setObjectName("lblwindNum3");
        lblwindNum3->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblwindNum3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblwindNum3, 1, 3, 1, 1);

        lblwindNum0 = new QLabel(widget_05);
        lblwindNum0->setObjectName("lblwindNum0");
        lblwindNum0->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblwindNum0->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblwindNum0, 1, 0, 1, 1);

        lblwind5 = new QLabel(widget_05);
        lblwind5->setObjectName("lblwind5");
        lblwind5->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblwind5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblwind5, 0, 5, 1, 1);

        lblwind4 = new QLabel(widget_05);
        lblwind4->setObjectName("lblwind4");
        lblwind4->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblwind4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblwind4, 0, 4, 1, 1);

        lblwind2 = new QLabel(widget_05);
        lblwind2->setObjectName("lblwind2");
        lblwind2->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblwind2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblwind2, 0, 2, 1, 1);

        lblwindNum4 = new QLabel(widget_05);
        lblwindNum4->setObjectName("lblwindNum4");
        lblwindNum4->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblwindNum4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblwindNum4, 1, 4, 1, 1);

        lblwind0 = new QLabel(widget_05);
        lblwind0->setObjectName("lblwind0");
        lblwind0->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblwind0->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblwind0, 0, 0, 1, 1);

        lblwindNum1 = new QLabel(widget_05);
        lblwindNum1->setObjectName("lblwindNum1");
        lblwindNum1->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblwindNum1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblwindNum1, 1, 1, 1, 1);

        lblwind3 = new QLabel(widget_05);
        lblwind3->setObjectName("lblwind3");
        lblwind3->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblwind3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblwind3, 0, 3, 1, 1);

        lblwindNum2 = new QLabel(widget_05);
        lblwindNum2->setObjectName("lblwindNum2");
        lblwindNum2->setStyleSheet(QString::fromUtf8("color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-radius: 7px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        lblwindNum2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblwindNum2, 1, 2, 1, 1);

        lblwind1 = new QLabel(widget_05);
        lblwind1->setObjectName("lblwind1");
        lblwind1->setStyleSheet(QString::fromUtf8("border-radius: 7px;\n"
"color:rgb(230,230,230);\n"
"background-color: rgb(74, 74, 74);\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        lblwind1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblwind1, 0, 1, 1, 1);


        verticalLayout_3->addWidget(widget_05);


        verticalLayout_5->addWidget(widget_04);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 2);
        verticalLayout_5->setStretch(2, 2);
        verticalLayout_5->setStretch(3, 7);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit_City->setText(QString());
        pushButton_Search->setText(QString());
        label_Date->setText(QCoreApplication::translate("MainWindow", "2024/08/28          \346\230\237\346\234\237\344\270\211", nullptr));
        label_tianqiicon->setText(QString());
        label_tianqi->setText(QCoreApplication::translate("MainWindow", "\346\231\264\350\275\254\345\244\232\344\272\221  19\302\260~31\302\260", nullptr));
        label_wendu->setText(QCoreApplication::translate("MainWindow", "32\342\204\203", nullptr));
        label_city->setText(QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254\345\270\202  ", nullptr));
        label_tips->setText(QCoreApplication::translate("MainWindow", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\204\277\347\253\245\345\222\214\350\200\201\345\271\264\344\272\272\345\207\217\345\260\221\345\244\226\345\207\272", nullptr));
        label_6->setText(QString());
        label_win->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblWinNum->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        label_12->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "PM2.5", nullptr));
        lblPM25->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_17->setText(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        label_shidu->setText(QCoreApplication::translate("MainWindow", "60%", nullptr));
        label_26->setText(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        label_air->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        lblWeek0->setText(QCoreApplication::translate("MainWindow", "\346\230\250\345\244\251", nullptr));
        lblWeek1->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        lblWeek2->setText(QCoreApplication::translate("MainWindow", "\346\230\216\345\244\251", nullptr));
        lblWeek3->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\233\233", nullptr));
        lblWeek4->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\272\224", nullptr));
        lblWeek5->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\205\255", nullptr));
        lblDay0->setText(QCoreApplication::translate("MainWindow", "01/10", nullptr));
        lblDay1->setText(QCoreApplication::translate("MainWindow", "01/10", nullptr));
        lblDay2->setText(QCoreApplication::translate("MainWindow", "01/10", nullptr));
        lblDay3->setText(QCoreApplication::translate("MainWindow", "01/10", nullptr));
        lblDay4->setText(QCoreApplication::translate("MainWindow", "01/10", nullptr));
        lblDay5->setText(QCoreApplication::translate("MainWindow", "01/10", nullptr));
        lblTypeIcon0->setText(QString());
        lblTypeIcon1->setText(QString());
        lblTypeIcon2->setText(QString());
        lblTypeIcon3->setText(QString());
        lblTypeIcon4->setText(QString());
        lblTypeIcon5->setText(QString());
        lblType0->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        lblType1->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        lblType2->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        lblType3->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        lblType4->setText(QCoreApplication::translate("MainWindow", "\344\270\255\351\233\250", nullptr));
        lblType5->setText(QCoreApplication::translate("MainWindow", "\346\232\264\351\233\250", nullptr));
        lblRank0->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        lblRank1->setText(QCoreApplication::translate("MainWindow", "\350\211\257", nullptr));
        lblRank2->setText(QCoreApplication::translate("MainWindow", "\350\275\273\345\272\246", nullptr));
        lblRank3->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\272\246", nullptr));
        lblRank4->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\272\246", nullptr));
        lblRank5->setText(QCoreApplication::translate("MainWindow", "\344\270\245\351\207\215", nullptr));
        lblwindNum5->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblwindNum3->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblwindNum0->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblwind5->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        lblwind4->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        lblwind2->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        lblwindNum4->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblwind0->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        lblwindNum1->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblwind3->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        lblwindNum2->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblwind1->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
