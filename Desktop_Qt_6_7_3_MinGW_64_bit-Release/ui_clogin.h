/********************************************************************************
** Form generated from reading UI file 'clogin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOGIN_H
#define UI_CLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_clogin
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label;
    QPushButton *button_check;
    QLabel *success;
    QLabel *wrong;
    QPushButton *button_back;
    QPushButton *button_turn;
    QLineEdit *cin_id;
    QLineEdit *cin_answer;
    QLabel *label_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *clogin)
    {
        if (clogin->objectName().isEmpty())
            clogin->setObjectName("clogin");
        clogin->resize(384, 438);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clogin->sizePolicy().hasHeightForWidth());
        clogin->setSizePolicy(sizePolicy);
        clogin->setMinimumSize(QSize(384, 438));
        clogin->setMaximumSize(QSize(384, 438));
        clogin->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        clogin->setStyleSheet(QString::fromUtf8("*{\n"
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
"QLabel#label{\n"
"	border-radius: 30px;\n"
"	background-color: rgba(98, 98, 98, 120);\n"
"}\n"
"\n"
"QLabel{\n"
"	background: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"\347\255\211\347\272\277\";\n"
"}\n"
"\n"
"QLabel#label_2{\n"
"	background: transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 20pt \"\347\255\211\347\272\277\";\n"
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
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 197, 25"
                        "5, 255), stop:1 rgba(133, 71, 255, 255));\n"
"	\n"
"	font: 14pt \"\347\255\211\347\272\277\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
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
"}\n"
"\n"
"QLineEdit{\n"
"	background: transparent;\n"
"	border: none;\n"
"	border-bottom: 1px solid rgba(255, 255, 255, 180);\n"
"	color: rgba(255,255,255,200);\n"
"	font: 14pt \"\347\255\211\347\272\277\";\n"
"}"));
        frame = new QFrame(clogin);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 384, 438));
        frame->setMinimumSize(QSize(384, 0));
        frame->setMaximumSize(QSize(384, 438));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 384, 438));
        frame_2->setMinimumSize(QSize(384, 0));
        frame_2->setMaximumSize(QSize(384, 438));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 40, 341, 401));
        label->setMinimumSize(QSize(341, 401));
        label->setMaximumSize(QSize(341, 401));
        button_check = new QPushButton(frame_2);
        button_check->setObjectName("button_check");
        button_check->setGeometry(QRect(110, 320, 171, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_check->sizePolicy().hasHeightForWidth());
        button_check->setSizePolicy(sizePolicy1);
        button_check->setMinimumSize(QSize(171, 31));
        button_check->setMaximumSize(QSize(16777215, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("\347\255\211\347\272\277")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        button_check->setFont(font);
        success = new QLabel(frame_2);
        success->setObjectName("success");
        success->setGeometry(QRect(110, 280, 181, 31));
        sizePolicy1.setHeightForWidth(success->sizePolicy().hasHeightForWidth());
        success->setSizePolicy(sizePolicy1);
        success->setMinimumSize(QSize(181, 31));
        success->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\347\255\211\347\272\277")});
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        success->setFont(font1);
        success->setAlignment(Qt::AlignmentFlag::AlignCenter);
        wrong = new QLabel(frame_2);
        wrong->setObjectName("wrong");
        wrong->setGeometry(QRect(110, 280, 181, 31));
        sizePolicy1.setHeightForWidth(wrong->sizePolicy().hasHeightForWidth());
        wrong->setSizePolicy(sizePolicy1);
        wrong->setMinimumSize(QSize(181, 31));
        wrong->setMaximumSize(QSize(16777215, 16777215));
        wrong->setFont(font1);
        wrong->setAlignment(Qt::AlignmentFlag::AlignCenter);
        button_back = new QPushButton(frame_2);
        button_back->setObjectName("button_back");
        button_back->setGeometry(QRect(30, 60, 80, 31));
        sizePolicy1.setHeightForWidth(button_back->sizePolicy().hasHeightForWidth());
        button_back->setSizePolicy(sizePolicy1);
        button_back->setMinimumSize(QSize(61, 31));
        button_back->setMaximumSize(QSize(16777215, 201));
        button_turn = new QPushButton(frame_2);
        button_turn->setObjectName("button_turn");
        button_turn->setGeometry(QRect(110, 380, 171, 31));
        sizePolicy1.setHeightForWidth(button_turn->sizePolicy().hasHeightForWidth());
        button_turn->setSizePolicy(sizePolicy1);
        button_turn->setMinimumSize(QSize(171, 31));
        button_turn->setMaximumSize(QSize(16777215, 81));
        button_turn->setFont(font);
        cin_id = new QLineEdit(frame_2);
        cin_id->setObjectName("cin_id");
        cin_id->setGeometry(QRect(50, 160, 281, 31));
        cin_answer = new QLineEdit(frame_2);
        cin_answer->setObjectName("cin_answer");
        cin_answer->setGeometry(QRect(50, 230, 281, 31));
        cin_answer->setEchoMode(QLineEdit::EchoMode::Password);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 90, 151, 41));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(320, 60, 31, 31));
        pushButton_3->setMinimumSize(QSize(0, 0));
        pushButton_3->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(clogin);

        QMetaObject::connectSlotsByName(clogin);
    } // setupUi

    void retranslateUi(QDialog *clogin)
    {
        clogin->setWindowTitle(QCoreApplication::translate("clogin", "Dialog", nullptr));
        label->setText(QString());
        button_check->setText(QCoreApplication::translate("clogin", "\347\231\273\345\275\225", nullptr));
        success->setText(QCoreApplication::translate("clogin", "\347\231\273\345\275\225\346\210\220\345\212\237\357\274\201", nullptr));
        wrong->setText(QCoreApplication::translate("clogin", "\345\257\206\347\240\201\346\210\226\350\264\246\345\217\267\351\224\231\350\257\257\357\274\201", nullptr));
        button_back->setText(QCoreApplication::translate("clogin", "\350\277\224\345\233\236", nullptr));
        button_turn->setText(QCoreApplication::translate("clogin", "\350\275\254\350\207\263\346\263\250\345\206\214", nullptr));
        cin_id->setPlaceholderText(QCoreApplication::translate("clogin", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        cin_answer->setPlaceholderText(QCoreApplication::translate("clogin", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("clogin", "Log In", nullptr));
        pushButton_3->setText(QCoreApplication::translate("clogin", "\303\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clogin: public Ui_clogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOGIN_H
