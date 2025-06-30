/********************************************************************************
** Form generated from reading UI file 'cvideo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVIDEO_H
#define UI_CVIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_cvideo
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_15;
    QLabel *label_16;

    void setupUi(QDialog *cvideo)
    {
        if (cvideo->objectName().isEmpty())
            cvideo->setObjectName("cvideo");
        cvideo->resize(572, 507);
        cvideo->setMinimumSize(QSize(572, 507));
        cvideo->setMaximumSize(QSize(572, 507));
        cvideo->setStyleSheet(QString::fromUtf8("*{\n"
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
"QLabel#label{\n"
"	font: 16pt \"\347\255\211\347\272\277\";\n"
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
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0"
                        " rgba(0, 197, 255, 255), stop:1 rgba(133, 71, 255, 255));\n"
"	\n"
"	font: 12pt \"\347\255\211\347\272\277\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border-radius: 10px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(100, 197, 255, 255), stop:1 rgba(133, 71, 255, 255));\n"
"	\n"
"	font: 12pt \"\347\255\211\347\272\277\";\n"
"}"));
        gridLayout = new QGridLayout(cvideo);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(cvideo);
        frame->setObjectName("frame");
        frame->setEnabled(true);
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(30, 30, 511, 421));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 341, 41));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 130, 461, 31));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 160, 461, 31));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 190, 461, 31));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 220, 461, 31));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 250, 461, 31));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 70, 461, 31));
        label_15 = new QLabel(frame_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(30, 100, 461, 31));
        label_16 = new QLabel(frame_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 280, 461, 31));

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(cvideo);

        QMetaObject::connectSlotsByName(cvideo);
    } // setupUi

    void retranslateUi(QDialog *cvideo)
    {
        cvideo->setWindowTitle(QCoreApplication::translate("cvideo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("cvideo", "\344\275\234\350\200\205\350\202\235\345\256\214\345\220\216\347\232\204\347\242\216\347\242\216\345\277\265", nullptr));
        label_2->setText(QCoreApplication::translate("cvideo", "\346\234\254\347\250\213\345\272\217\347\224\261404 student\347\213\254\347\253\213\345\256\214\346\210\220\357\274\214\346\204\237\350\260\242404 student\343\200\202", nullptr));
        label_3->setText(QCoreApplication::translate("cvideo", "\346\234\254\347\250\213\345\272\217\347\232\204\345\256\214\346\210\220\347\246\273\344\270\215\345\274\200\347\224\250\350\277\231\344\270\252\346\222\255\346\224\276\345\231\250\346\224\276\347\232\204\346\211\200\346\234\211\351\237\263\344\271\220\343\200\202", nullptr));
        label_4->setText(QCoreApplication::translate("cvideo", "\347\224\261\344\272\216\350\203\275\345\212\233\346\234\211\351\231\220\357\274\214\347\250\213\345\272\217\346\234\211\350\257\270\345\244\232\344\270\215\350\266\263\346\210\226\346\210\221\346\234\252\345\217\221\347\216\260\347\232\204bug\357\274\214\346\254\242\350\277\216\346\211\271\350\257\204\346\214\207\346\255\243\357\274\201", nullptr));
        label_5->setText(QCoreApplication::translate("cvideo", "\345\220\214\346\240\267\347\232\204\357\274\214\345\246\202\346\236\234\346\234\211\347\250\213\345\272\217\347\276\216\345\214\226\346\226\271\351\235\242\347\232\204\346\204\217\350\247\201\357\274\214\344\271\237\350\257\267\346\214\207\345\207\272\344\273\245\344\276\277\346\210\221\344\274\230\345\214\226\343\200\202", nullptr));
        label_6->setText(QCoreApplication::translate("cvideo", "\346\204\237\350\260\242\346\211\200\346\234\211\345\260\235\350\257\225\345\271\266\344\270\272\346\234\254\347\250\213\345\272\217\346\217\220\344\276\233\344\274\230\345\214\226\346\204\217\350\247\201\347\232\204\346\211\200\346\234\211\344\272\272\357\274\201", nullptr));
        label_7->setText(QCoreApplication::translate("cvideo", "\346\204\237\350\260\242\346\202\250\347\234\213\345\210\260\350\277\231\351\207\214\357\274\201\346\204\237\350\260\242\346\202\250\347\232\204\344\275\277\347\224\250\357\274\201", nullptr));
        label_15->setText(QCoreApplication::translate("cvideo", "\345\246\202\346\236\234\346\202\250\346\234\211\344\273\200\344\271\210\346\203\263\346\263\225\357\274\214\350\257\267\345\221\212\347\237\245\346\210\221\343\200\202\346\210\221\345\260\206\346\233\264\346\226\260\346\225\264\344\270\252\347\250\213\345\272\217\343\200\202", nullptr));
        label_16->setText(QCoreApplication::translate("cvideo", "\350\277\231\344\270\252\345\267\245\347\250\213\346\234\200\346\201\266\345\277\203\347\232\204\345\234\260\346\226\271\346\230\257QT6\345\210\240\346\216\211\344\272\206\344\270\200\345\240\206\351\237\263\344\271\220\345\272\223\357\274\214\346\262\241\345\225\245\350\265\204\346\226\231\350\203\275\346\237\245\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cvideo: public Ui_cvideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVIDEO_H
