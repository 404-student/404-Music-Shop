/********************************************************************************
** Form generated from reading UI file 'cmusic.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMUSIC_H
#define UI_CMUSIC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myslider.h"

QT_BEGIN_NAMESPACE

class Ui_cmusic
{
public:
    QPushButton *cin;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *btnlast;
    QPushButton *btnstart;
    QPushButton *btnstop;
    QPushButton *btnnext;
    MySlider *horizontalSlider;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *position;
    QLabel *label_2;
    QLabel *duration;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QLabel *label;
    QPushButton *song1;
    QPushButton *song2;
    QPushButton *song3;
    QPushButton *song4;
    QPushButton *song5;
    QPushButton *song6;
    QPushButton *song7;
    QPushButton *song8;
    QPushButton *del2;
    QPushButton *del3;
    QPushButton *del4;
    QPushButton *del5;
    QPushButton *del6;
    QPushButton *del7;
    QPushButton *del8;
    QPushButton *del1;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_record;
    QPushButton *btnadd;
    QPushButton *btnlower;
    MySlider *volumeSlider;
    QLabel *volumeLabel;

    void setupUi(QDialog *cmusic)
    {
        if (cmusic->objectName().isEmpty())
            cmusic->setObjectName("cmusic");
        cmusic->resize(572, 507);
        cmusic->setMinimumSize(QSize(572, 507));
        cmusic->setMaximumSize(QSize(572, 507));
        cmusic->setStyleSheet(QString::fromUtf8("#cmusic{border-image: url(:/res/goodBKG2.jpg);}\n"
"\n"
"QPushButton{\n"
"	border-radius: 30px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(100, 197, 255, 255), stop:1 rgba(133, 71, 255, 255));\n"
"	\n"
"	font: 14pt \"\347\255\211\347\272\277\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border-radius: 30px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 197, 255, 255), stop:1 rgba(133, 71, 255, 255));\n"
"	\n"
"	font: 14pt \"\347\255\211\347\272\277\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(100, 197, 255, 255), stop:1 rgba(133, 71, 255, 255));\n"
"	border-radius: 30px;\n"
"	font: 14pt \"\347\255\211\347\272\277\";\n"
"}\n"
"\n"
"QLabel#label{\n"
"	\n"
"	background-color: rgba(98, 98, 98, 80);\n"
"}\n"
"\n"
"QFrame#frame{\n"
"	background-color: rgba(158, 158, 158, 80);\n"
"}\n"
"\n"
"QPushButton#btnadd{\n"
"	border-radius: 10px;\n"
"	background-col"
                        "or: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(100, 197, 255, 255), stop:1 rgba(133, 71, 255, 255));\n"
"	\n"
"	font: 14pt \"\347\255\211\347\272\277\";\n"
"}\n"
"QPushButton#btnadd{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#cin{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnlast{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnlower{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnnext{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnstart{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnstop{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#pushButton_2{\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton#btnadd:pressed{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#cin:pressed{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnlast:pressed{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnlower:pressed{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnnext:pressed{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnstart:pressed{\n"
"	border-radius: 10px;\n"
""
                        "}\n"
"QPushButton#btnstop:pressed{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#pushButton_2:pressed{\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton#btnadd:hover{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#cin:hover{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnlast:hover{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnlower:hover{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnnext:hover{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnstart:hover{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#btnstop:hover{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#pushButton_2:hover{\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton#del1:hover{\n"
"	background: transparent;\n"
"color: rgb(105, 105, 105);\n"
"}\n"
"QPushButton#del2:hover{\n"
"	background: transparent;\n"
"color: rgb(105, 105, 105);\n"
"}\n"
"QPushButton#del3:hover{\n"
"	background: transparent;\n"
"color: rgb(105, 105, 105);\n"
"}\n"
"QPushButton#del4:hover{\n"
"	background: transparent;\n"
"color: rgb(105, 105, 105);\n"
""
                        "}\n"
"QPushButton#del5:hover{\n"
"	background: transparent;\n"
"color: rgb(105, 105, 105);\n"
"}\n"
"QPushButton#del6:hover{\n"
"	background: transparent;\n"
"color: rgb(105, 105, 105);\n"
"}\n"
"QPushButton#del7:hover{\n"
"	background: transparent;\n"
"color: rgb(105, 105, 105);\n"
"}\n"
"QPushButton#del8:hover{\n"
"	background: transparent;\n"
"color: rgb(105, 105, 105);\n"
"}\n"
"QPushButton#del8:pressed{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del7:pressed{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del6:pressed{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del5:pressed{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del4:pressed{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del3:pressed{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del2:pressed{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del1:pressed{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del8:hover{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del8{\n"
"	background: transparent;"
                        "\n"
"}\n"
"QPushButton#del7{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del6{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del5{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del4{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del3{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del2{\n"
"	background: transparent;\n"
"}\n"
"QPushButton#del1{\n"
"	background: transparent;\n"
"}\n"
"#label_record {\n"
"    border-radius: 45px;\n"
"    border: 2px solid #333;\n"
"    background-color: #222;\n"
"    background-image: url(:/res/Yeezus_resized.jpg); \n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"\n"
"QMessageBox {\n"
"	background-color: #F2F2F2;\n"
"}\n"
"\n"
"QMessageBox QLabel#qt_msgbox_label { \n"
"	color: #298DFF;\n"
"	background-color: transparent;\n"
"	min-width: 240px; \n"
"	min-height: 40px; \n"
"}\n"
"\n"
"QMessageBox QLabel#qt_msgboxex_icon_label { \n"
"	width: 40px;\n"
"	height: 40px; \n"
"}\n"
"\n"
"QMessageBox QPushButton { \n"
"	bo"
                        "rder: 1px solid #298DFF;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"	color: #298DFF;\n"
"	font-family: \"Microsoft YaHei\";\n"
"	font-size: 10pt;\n"
"	min-width: 70px;\n"
"	min-height: 25px;\n"
"}\n"
"\n"
"QMessageBox QPushButton:hover {\n"
"	background-color: #298DFF;\n"
"	color: #F2F2F2;\n"
"}\n"
"\n"
"QMessageBox QPushButton:pressed {\n"
"	background-color: #257FE6;\n"
"}\n"
"\n"
"QMessageBox QDialogButtonBox#qt_msgbox_buttonbox {\n"
"	button-layout: 0; \n"
"}"));
        cin = new QPushButton(cmusic);
        cin->setObjectName("cin");
        cin->setGeometry(QRect(390, 10, 151, 31));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cin->sizePolicy().hasHeightForWidth());
        cin->setSizePolicy(sizePolicy);
        cin->setMinimumSize(QSize(151, 31));
        cin->setMaximumSize(QSize(151, 31));
        widget = new QWidget(cmusic);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 450, 291, 46));
        widget->setMinimumSize(QSize(0, 46));
        widget->setMaximumSize(QSize(401, 46));
        widget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	min-width:32px;\n"
"	min-height:32px;\n"
"	max-width:32px;\n"
"	max-height:32px;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaylistRepeat));
        pushButton_2->setIcon(icon);

        horizontalLayout_2->addWidget(pushButton_2);

        btnlast = new QPushButton(widget);
        btnlast->setObjectName("btnlast");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::GoPrevious));
        btnlast->setIcon(icon1);

        horizontalLayout_2->addWidget(btnlast);

        btnstart = new QPushButton(widget);
        btnstart->setObjectName("btnstart");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackStart));
        btnstart->setIcon(icon2);

        horizontalLayout_2->addWidget(btnstart);

        btnstop = new QPushButton(widget);
        btnstop->setObjectName("btnstop");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackPause));
        btnstop->setIcon(icon3);

        horizontalLayout_2->addWidget(btnstop);

        btnnext = new QPushButton(widget);
        btnnext->setObjectName("btnnext");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::GoNext));
        btnnext->setIcon(icon4);

        horizontalLayout_2->addWidget(btnnext);

        horizontalSlider = new MySlider(cmusic);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(140, 430, 401, 16));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal { \n"
"border: 1px solid #bbb; \n"
"background: white; \n"
"height: 10px; \n"
"border-radius: 4px; \n"
"} \n"
"   \n"
"QSlider::sub-page:horizontal { \n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1, \n"
"    stop: 0 #bbf, stop: 1 #55f); \n"
"border: 1px solid #777; \n"
"height: 10px; \n"
"border-radius: 4px; \n"
"} \n"
"   \n"
"QSlider::add-page:horizontal { \n"
"background: #fff; \n"
"border: 1px solid #777; \n"
"height: 10px; \n"
"border-radius: 4px; \n"
"} \n"
"   \n"
"QSlider::handle:horizontal { \n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"    stop:0 #eee, stop:1 #ccc); \n"
"border: 1px solid #777; \n"
"width: 13px; \n"
"margin-top: -2px; \n"
"margin-bottom: -2px; \n"
"border-radius: 4px; \n"
"} \n"
"   \n"
"QSlider::handle:horizontal:hover { \n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"    stop:0 #fff, stop:1 #ddd); \n"
"border: 1px solid #444; \n"
"border-radius: 4px; \n"
"} \n"
"   \n"
"QSlider::sub-page:horizontal:disabled { \n"
""
                        "background: #bbb; \n"
"border-color: #999; \n"
"} \n"
"   \n"
"QSlider::add-page:horizontal:disabled { \n"
"background: #eee; \n"
"border-color: #999; \n"
"} \n"
"   \n"
"QSlider::handle:horizontal:disabled { \n"
"background: #eee; \n"
"border: 1px solid #aaa; \n"
"border-radius: 4px; \n"
"} "));
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        layoutWidget = new QWidget(cmusic);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 400, 401, 40));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        position = new QLabel(layoutWidget);
        position->setObjectName("position");
        position->setMinimumSize(QSize(36, 28));
        position->setMaximumSize(QSize(36, 28));

        horizontalLayout->addWidget(position);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(4, 28));
        label_2->setMaximumSize(QSize(4, 28));

        horizontalLayout->addWidget(label_2);

        duration = new QLabel(layoutWidget);
        duration->setObjectName("duration");
        duration->setMinimumSize(QSize(36, 28));
        duration->setMaximumSize(QSize(36, 28));

        horizontalLayout->addWidget(duration);

        horizontalSpacer = new QSpacerItem(208, 28, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frame = new QFrame(cmusic);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 50, 511, 321));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 511, 321));
        song1 = new QPushButton(frame);
        song1->setObjectName("song1");
        song1->setGeometry(QRect(0, 0, 511, 40));
        song1->setMinimumSize(QSize(511, 40));
        song1->setMaximumSize(QSize(511, 40));
        song2 = new QPushButton(frame);
        song2->setObjectName("song2");
        song2->setGeometry(QRect(0, 40, 511, 40));
        song2->setMinimumSize(QSize(511, 40));
        song2->setMaximumSize(QSize(511, 40));
        song3 = new QPushButton(frame);
        song3->setObjectName("song3");
        song3->setGeometry(QRect(0, 80, 511, 40));
        song3->setMinimumSize(QSize(511, 40));
        song3->setMaximumSize(QSize(511, 40));
        song4 = new QPushButton(frame);
        song4->setObjectName("song4");
        song4->setGeometry(QRect(0, 120, 511, 40));
        song4->setMinimumSize(QSize(511, 40));
        song4->setMaximumSize(QSize(511, 40));
        song5 = new QPushButton(frame);
        song5->setObjectName("song5");
        song5->setGeometry(QRect(0, 160, 511, 40));
        song5->setMinimumSize(QSize(511, 40));
        song5->setMaximumSize(QSize(511, 40));
        song6 = new QPushButton(frame);
        song6->setObjectName("song6");
        song6->setGeometry(QRect(0, 200, 511, 40));
        song6->setMinimumSize(QSize(511, 40));
        song6->setMaximumSize(QSize(511, 40));
        song7 = new QPushButton(frame);
        song7->setObjectName("song7");
        song7->setGeometry(QRect(0, 240, 511, 40));
        song7->setMinimumSize(QSize(511, 40));
        song7->setMaximumSize(QSize(511, 40));
        song8 = new QPushButton(frame);
        song8->setObjectName("song8");
        song8->setGeometry(QRect(0, 280, 511, 40));
        song8->setMinimumSize(QSize(511, 40));
        song8->setMaximumSize(QSize(511, 40));
        del2 = new QPushButton(frame);
        del2->setObjectName("del2");
        del2->setGeometry(QRect(452, 40, 59, 40));
        del2->setMinimumSize(QSize(59, 40));
        del2->setMaximumSize(QSize(59, 40));
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        del2->setIcon(icon5);
        del3 = new QPushButton(frame);
        del3->setObjectName("del3");
        del3->setGeometry(QRect(452, 80, 59, 40));
        del3->setMinimumSize(QSize(59, 40));
        del3->setMaximumSize(QSize(59, 40));
        del3->setIcon(icon5);
        del4 = new QPushButton(frame);
        del4->setObjectName("del4");
        del4->setGeometry(QRect(452, 120, 59, 40));
        del4->setMinimumSize(QSize(59, 40));
        del4->setMaximumSize(QSize(59, 40));
        del4->setIcon(icon5);
        del5 = new QPushButton(frame);
        del5->setObjectName("del5");
        del5->setGeometry(QRect(452, 160, 59, 40));
        del5->setMinimumSize(QSize(59, 40));
        del5->setMaximumSize(QSize(59, 40));
        del5->setIcon(icon5);
        del6 = new QPushButton(frame);
        del6->setObjectName("del6");
        del6->setGeometry(QRect(452, 200, 59, 40));
        del6->setMinimumSize(QSize(59, 40));
        del6->setMaximumSize(QSize(59, 40));
        del6->setIcon(icon5);
        del7 = new QPushButton(frame);
        del7->setObjectName("del7");
        del7->setGeometry(QRect(452, 240, 59, 40));
        del7->setMinimumSize(QSize(59, 40));
        del7->setMaximumSize(QSize(59, 40));
        del7->setIcon(icon5);
        del8 = new QPushButton(frame);
        del8->setObjectName("del8");
        del8->setGeometry(QRect(452, 280, 59, 40));
        del8->setMinimumSize(QSize(59, 40));
        del8->setMaximumSize(QSize(59, 40));
        del8->setIcon(icon5);
        del1 = new QPushButton(frame);
        del1->setObjectName("del1");
        del1->setGeometry(QRect(450, 0, 59, 40));
        del1->setMinimumSize(QSize(59, 40));
        del1->setMaximumSize(QSize(59, 40));
        del1->setIcon(icon5);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 51, 41));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 40, 51, 41));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 80, 51, 41));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 120, 51, 41));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 160, 51, 41));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 200, 51, 41));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 240, 51, 41));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 280, 51, 41));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayoutWidget = new QWidget(cmusic);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 400, 92, 92));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_record = new QLabel(verticalLayoutWidget);
        label_record->setObjectName("label_record");
        label_record->setMinimumSize(QSize(90, 90));
        label_record->setMaximumSize(QSize(90, 90));
        label_record->setLineWidth(1);
        label_record->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_record);

        btnadd = new QPushButton(cmusic);
        btnadd->setObjectName("btnadd");
        btnadd->setGeometry(QRect(490, 370, 32, 32));
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::AudioVolumeHigh));
        btnadd->setIcon(icon6);
        btnlower = new QPushButton(cmusic);
        btnlower->setObjectName("btnlower");
        btnlower->setGeometry(QRect(530, 370, 32, 32));
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::AudioVolumeLow));
        btnlower->setIcon(icon7);
        volumeSlider = new MySlider(cmusic);
        volumeSlider->setObjectName("volumeSlider");
        volumeSlider->setGeometry(QRect(430, 460, 111, 16));
        volumeSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal { \n"
"border: 1px solid #bbb; \n"
"background: white; \n"
"height: 10px; \n"
"border-radius: 4px; \n"
"} \n"
"   \n"
"QSlider::sub-page:horizontal { \n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1, \n"
"    stop: 0 #bbf, stop: 1 #55f); \n"
"border: 1px solid #777; \n"
"height: 10px; \n"
"border-radius: 4px; \n"
"} \n"
"   \n"
"QSlider::add-page:horizontal { \n"
"background: #fff; \n"
"border: 1px solid #777; \n"
"height: 10px; \n"
"border-radius: 4px; \n"
"} \n"
"   \n"
"QSlider::handle:horizontal { \n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"    stop:0 #eee, stop:1 #ccc); \n"
"border: 1px solid #777; \n"
"width: 13px; \n"
"margin-top: -2px; \n"
"margin-bottom: -2px; \n"
"border-radius: 4px; \n"
"} \n"
"   \n"
"QSlider::handle:horizontal:hover { \n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"    stop:0 #fff, stop:1 #ddd); \n"
"border: 1px solid #444; \n"
"border-radius: 4px; \n"
"} \n"
"   \n"
"QSlider::sub-page:horizontal:disabled { \n"
""
                        "background: #bbb; \n"
"border-color: #999; \n"
"} \n"
"   \n"
"QSlider::add-page:horizontal:disabled { \n"
"background: #eee; \n"
"border-color: #999; \n"
"} \n"
"   \n"
"QSlider::handle:horizontal:disabled { \n"
"background: #eee; \n"
"border: 1px solid #aaa; \n"
"border-radius: 4px; \n"
"} "));
        volumeSlider->setMaximum(100);
        volumeSlider->setValue(50);
        volumeSlider->setOrientation(Qt::Orientation::Horizontal);
        volumeLabel = new QLabel(cmusic);
        volumeLabel->setObjectName("volumeLabel");
        volumeLabel->setGeometry(QRect(430, 480, 161, 21));

        retranslateUi(cmusic);

        QMetaObject::connectSlotsByName(cmusic);
    } // setupUi

    void retranslateUi(QDialog *cmusic)
    {
        cmusic->setWindowTitle(QCoreApplication::translate("cmusic", "Dialog", nullptr));
        cin->setText(QCoreApplication::translate("cmusic", "\345\257\274\345\205\245\351\237\263\344\271\220", nullptr));
        pushButton_2->setText(QString());
        btnlast->setText(QString());
        btnstart->setText(QString());
        btnstop->setText(QString());
        btnnext->setText(QString());
        position->setText(QCoreApplication::translate("cmusic", "00:00", nullptr));
        label_2->setText(QCoreApplication::translate("cmusic", "/", nullptr));
        duration->setText(QCoreApplication::translate("cmusic", "00:00", nullptr));
        label->setText(QString());
        song1->setText(QCoreApplication::translate("cmusic", "\346\232\202\346\227\240\346\255\214\346\233\262", nullptr));
        song2->setText(QCoreApplication::translate("cmusic", "\346\232\202\346\227\240\346\255\214\346\233\262", nullptr));
        song3->setText(QCoreApplication::translate("cmusic", "\346\232\202\346\227\240\346\255\214\346\233\262", nullptr));
        song4->setText(QCoreApplication::translate("cmusic", "\346\232\202\346\227\240\346\255\214\346\233\262", nullptr));
        song5->setText(QCoreApplication::translate("cmusic", "\346\232\202\346\227\240\346\255\214\346\233\262", nullptr));
        song6->setText(QCoreApplication::translate("cmusic", "\346\232\202\346\227\240\346\255\214\346\233\262", nullptr));
        song7->setText(QCoreApplication::translate("cmusic", "\346\232\202\346\227\240\346\255\214\346\233\262", nullptr));
        song8->setText(QCoreApplication::translate("cmusic", "\346\232\202\346\227\240\346\255\214\346\233\262", nullptr));
        del2->setText(QString());
        del3->setText(QString());
        del4->setText(QString());
        del5->setText(QString());
        del6->setText(QString());
        del7->setText(QString());
        del8->setText(QString());
        del1->setText(QString());
        label_3->setText(QCoreApplication::translate("cmusic", "\345\275\223\345\211\215\346\222\255\346\224\276", nullptr));
        label_4->setText(QCoreApplication::translate("cmusic", "\345\275\223\345\211\215\346\222\255\346\224\276", nullptr));
        label_5->setText(QCoreApplication::translate("cmusic", "\345\275\223\345\211\215\346\222\255\346\224\276", nullptr));
        label_6->setText(QCoreApplication::translate("cmusic", "\345\275\223\345\211\215\346\222\255\346\224\276", nullptr));
        label_7->setText(QCoreApplication::translate("cmusic", "\345\275\223\345\211\215\346\222\255\346\224\276", nullptr));
        label_8->setText(QCoreApplication::translate("cmusic", "\345\275\223\345\211\215\346\222\255\346\224\276", nullptr));
        label_9->setText(QCoreApplication::translate("cmusic", "\345\275\223\345\211\215\346\222\255\346\224\276", nullptr));
        label_10->setText(QCoreApplication::translate("cmusic", "\345\275\223\345\211\215\346\222\255\346\224\276", nullptr));
        label_record->setText(QString());
        btnadd->setText(QString());
        btnlower->setText(QString());
        volumeLabel->setText(QCoreApplication::translate("cmusic", "\351\237\263\351\207\217\357\274\23250%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cmusic: public Ui_cmusic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMUSIC_H
