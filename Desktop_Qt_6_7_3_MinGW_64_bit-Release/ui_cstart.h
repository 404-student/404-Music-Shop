/********************************************************************************
** Form generated from reading UI file 'cstart.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSTART_H
#define UI_CSTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cstart
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *cstart)
    {
        if (cstart->objectName().isEmpty())
            cstart->setObjectName("cstart");
        cstart->resize(384, 438);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cstart->sizePolicy().hasHeightForWidth());
        cstart->setSizePolicy(sizePolicy);
        cstart->setMinimumSize(QSize(384, 438));
        cstart->setMaximumSize(QSize(384, 438));
        cstart->setStyleSheet(QString::fromUtf8("*{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QFrame#frame{\n"
"	border-radius: 30px;\n"
"	border-image: url(:/res/goodBKG.jpg);\n"
"}\n"
"\n"
"#frame_2{\n"
"	border-radius: 30px;\n"
"	background-color: rgba(158, 158, 158, 120);\n"
"}\n"
"\n"
"QLabel#label_2{\n"
"	border-radius: 30px;\n"
"	background-color: rgba(98, 98, 98, 180);\n"
"}\n"
"\n"
"#label{\n"
"	background: transparent;\n"
"	color: rgba(255, 255, 255, 200);\n"
"	font: 25pt \"\347\255\211\347\272\277\";\n"
"}\n"
"\n"
"QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(100, 197, 255, 255), stop:1 rgba(133, 71, 255, 255));\n"
"	\n"
"	font: 14pt \"\347\255\211\347\272\277\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border-radius: 10px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 197, 255, 255), stop:1 rgba(133, 71, 255, 255));\n"
"	\n"
"	font: 14pt \"\347\255\211\347\272\277\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
""
                        "	border-radius: 10px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(100, 197, 255, 255), stop:1 rgba(133, 71, 255, 255));\n"
"	\n"
"	font: 14pt \"\347\255\211\347\272\277\";\n"
"}\n"
"\n"
"QPushButton#pushButton_3{\n"
"	border-radius: 10px;\n"
"	background: transparent;\n"
"	font: 20pt \"\347\255\211\347\272\277\";\n"
"}"));
        frame = new QFrame(cstart);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 384, 438));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(384, 438));
        frame->setMaximumSize(QSize(384, 438));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 384, 438));
        frame_2->setMinimumSize(QSize(384, 438));
        frame_2->setMaximumSize(QSize(384, 438));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 341, 401));
        label_2->setMinimumSize(QSize(341, 401));
        label_2->setMaximumSize(QSize(341, 401));
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 110, 280, 61));
        label->setMinimumSize(QSize(280, 61));
        label->setMaximumSize(QSize(280, 61));
        label->setStyleSheet(QString::fromUtf8("text.setStyleSheet(\"font-family: Arial; font-size: 48pt;\");"));
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 200, 201, 41));
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(90, 310, 201, 41));
        pushButton_2->setMinimumSize(QSize(201, 41));
        pushButton_2->setMaximumSize(QSize(201, 41));
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(320, 50, 31, 31));
        pushButton_3->setMinimumSize(QSize(0, 0));
        pushButton_3->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(cstart);

        QMetaObject::connectSlotsByName(cstart);
    } // setupUi

    void retranslateUi(QDialog *cstart)
    {
        cstart->setWindowTitle(QCoreApplication::translate("cstart", "Dialog", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("cstart", "404 MUSIC SHOP", nullptr));
        pushButton->setText(QCoreApplication::translate("cstart", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cstart", "\346\263\250\345\206\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("cstart", "\303\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cstart: public Ui_cstart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSTART_H
