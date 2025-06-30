/********************************************************************************
** Form generated from reading UI file 'cclips.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCLIPS_H
#define UI_CCLIPS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "myslider.h"

QT_BEGIN_NAMESPACE

class Ui_cclips
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QFrame *frame_2;
    MySlider *positionSlider;
    QPushButton *fadeInButton;
    QPushButton *fadeOutButton;
    QPushButton *playButton;
    QPushButton *pauseButton;
    QLabel *speedLabel;
    QLabel *volumeLabel;
    QLabel *label;
    QLabel *label_3;
    MySlider *speedSlider;
    MySlider *volumeSlider;
    QLabel *position;
    QLabel *label_2;
    QLabel *duration;
    QLabel *label_4;
    QPushButton *cin;
    QPushButton *saveButton;
    QLabel *label_5;

    void setupUi(QDialog *cclips)
    {
        if (cclips->objectName().isEmpty())
            cclips->setObjectName("cclips");
        cclips->resize(572, 507);
        cclips->setStyleSheet(QString::fromUtf8("*{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QFrame#frame{\n"
"	border-image: url(:/res/goodBKG2.jpg);\n"
"}\n"
"\n"
"#frame_2{\n"
"	border-radius: 30px;\n"
"	background-color: rgba(158, 158, 158, 120);\n"
"}\n"
"\n"
"#frame_3{\n"
"	border-radius: 30px;\n"
"	background-color: rgba(158, 158, 158, 120);\n"
"}\n"
"\n"
"#frame_4{\n"
"	border-radius: 30px;\n"
"	background-color: rgba(158, 158, 158, 120);\n"
"}\n"
"\n"
"QLabel{\n"
"	background: transparent;\n"
"	color: rgba(255, 255, 255, 200);\n"
"	font: 12pt \"\347\255\211\347\272\277\";\n"
"}\n"
"\n"
"QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(100, 197, 255, 255), stop:1 rgba(133, 71, 255, 255));\n"
"	\n"
"	font: 12pt \"\347\255\211\347\272\277\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border-radius: 10px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 197, 255, 255), stop:1 rgba(133, 71, 255, 255));\n"
"	\n"
"	font: "
                        "12pt \"\347\255\211\347\272\277\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-radius: 10px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(100, 197, 255, 255), stop:1 rgba(133, 71, 255, 255));\n"
"	\n"
"	font: 12pt \"\347\255\211\347\272\277\";\n"
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
"	border: 1px solid #298DFF;\n"
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
"	backgr"
                        "ound-color: #257FE6;\n"
"}\n"
"\n"
"QMessageBox QDialogButtonBox#qt_msgbox_buttonbox {\n"
"	button-layout: 0; \n"
"}"));
        gridLayout = new QGridLayout(cclips);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(cclips);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(30, 60, 511, 371));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        positionSlider = new MySlider(frame_2);
        positionSlider->setObjectName("positionSlider");
        positionSlider->setGeometry(QRect(50, 90, 401, 16));
        positionSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal { \n"
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
        positionSlider->setOrientation(Qt::Orientation::Horizontal);
        fadeInButton = new QPushButton(frame_2);
        fadeInButton->setObjectName("fadeInButton");
        fadeInButton->setGeometry(QRect(80, 290, 101, 41));
        fadeOutButton = new QPushButton(frame_2);
        fadeOutButton->setObjectName("fadeOutButton");
        fadeOutButton->setGeometry(QRect(300, 290, 101, 41));
        playButton = new QPushButton(frame_2);
        playButton->setObjectName("playButton");
        playButton->setGeometry(QRect(140, 120, 41, 41));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackStart));
        playButton->setIcon(icon);
        pauseButton = new QPushButton(frame_2);
        pauseButton->setObjectName("pauseButton");
        pauseButton->setGeometry(QRect(300, 120, 41, 41));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackPause));
        pauseButton->setIcon(icon1);
        speedLabel = new QLabel(frame_2);
        speedLabel->setObjectName("speedLabel");
        speedLabel->setGeometry(QRect(50, 220, 141, 21));
        volumeLabel = new QLabel(frame_2);
        volumeLabel->setObjectName("volumeLabel");
        volumeLabel->setGeometry(QRect(270, 220, 161, 21));
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 111, 31));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 190, 111, 31));
        speedSlider = new MySlider(frame_2);
        speedSlider->setObjectName("speedSlider");
        speedSlider->setGeometry(QRect(50, 250, 161, 16));
        speedSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal { \n"
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
        speedSlider->setMinimum(50);
        speedSlider->setMaximum(200);
        speedSlider->setValue(100);
        speedSlider->setOrientation(Qt::Orientation::Horizontal);
        volumeSlider = new MySlider(frame_2);
        volumeSlider->setObjectName("volumeSlider");
        volumeSlider->setGeometry(QRect(270, 250, 161, 16));
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
        position = new QLabel(frame_2);
        position->setObjectName("position");
        position->setGeometry(QRect(50, 60, 36, 28));
        position->setMinimumSize(QSize(36, 28));
        position->setMaximumSize(QSize(36, 28));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 60, 4, 28));
        label_2->setMinimumSize(QSize(4, 28));
        label_2->setMaximumSize(QSize(4, 28));
        duration = new QLabel(frame_2);
        duration->setObjectName("duration");
        duration->setGeometry(QRect(100, 60, 36, 28));
        duration->setMinimumSize(QSize(36, 28));
        duration->setMaximumSize(QSize(36, 28));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 330, 211, 31));
        cin = new QPushButton(frame);
        cin->setObjectName("cin");
        cin->setGeometry(QRect(390, 20, 151, 31));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cin->sizePolicy().hasHeightForWidth());
        cin->setSizePolicy(sizePolicy);
        cin->setMinimumSize(QSize(151, 31));
        cin->setMaximumSize(QSize(151, 31));
        saveButton = new QPushButton(frame);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(390, 440, 151, 31));
        saveButton->setMinimumSize(QSize(151, 31));
        saveButton->setMaximumSize(QSize(151, 31));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(370, 470, 211, 31));

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(cclips);

        QMetaObject::connectSlotsByName(cclips);
    } // setupUi

    void retranslateUi(QDialog *cclips)
    {
        cclips->setWindowTitle(QCoreApplication::translate("cclips", "Dialog", nullptr));
        fadeInButton->setText(QCoreApplication::translate("cclips", "\346\267\241\345\205\245", nullptr));
        fadeOutButton->setText(QCoreApplication::translate("cclips", "\346\267\241\345\207\272", nullptr));
        playButton->setText(QString());
        pauseButton->setText(QString());
        speedLabel->setText(QCoreApplication::translate("cclips", "\351\200\237\345\272\246: 1.00x", nullptr));
        volumeLabel->setText(QCoreApplication::translate("cclips", "\351\237\263\351\207\217\357\274\23250%", nullptr));
        label->setText(QCoreApplication::translate("cclips", "\346\222\255\346\224\276\345\214\272", nullptr));
        label_3->setText(QCoreApplication::translate("cclips", "\346\216\247\345\210\266\345\214\272", nullptr));
        position->setText(QCoreApplication::translate("cclips", "00:00", nullptr));
        label_2->setText(QCoreApplication::translate("cclips", "/", nullptr));
        duration->setText(QCoreApplication::translate("cclips", "00:00", nullptr));
        label_4->setText(QCoreApplication::translate("cclips", "Tips\357\274\232\346\267\241\345\207\272\345\220\216\351\234\200\351\207\215\346\226\260\350\260\203\346\225\264\351\237\263\351\207\217", nullptr));
        cin->setText(QCoreApplication::translate("cclips", "\345\257\274\345\205\245\351\237\263\344\271\220", nullptr));
        saveButton->setText(QCoreApplication::translate("cclips", "\344\277\235\345\255\230", nullptr));
        label_5->setText(QCoreApplication::translate("cclips", "Tips\357\274\232\344\277\235\345\255\230\347\232\204\346\230\257\345\216\237\346\226\207\344\273\266\345\223\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cclips: public Ui_cclips {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCLIPS_H
