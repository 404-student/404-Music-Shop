/********************************************************************************
** Form generated from reading UI file 'cmaking.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAKING_H
#define UI_CMAKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cmaking
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label;
    QPushButton *button_back;
    QLineEdit *cin_check_answer;
    QLabel *answer_len_warning;
    QLabel *answer_check_warning;
    QLabel *success;
    QPushButton *button_done;
    QLineEdit *cin_id;
    QPushButton *button_turn;
    QLabel *id_same_warning;
    QLineEdit *cin_answer;
    QPushButton *pushButton_3;

    void setupUi(QDialog *cmaking)
    {
        if (cmaking->objectName().isEmpty())
            cmaking->setObjectName("cmaking");
        cmaking->resize(384, 438);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmaking->sizePolicy().hasHeightForWidth());
        cmaking->setSizePolicy(sizePolicy);
        cmaking->setStyleSheet(QString::fromUtf8("*{\n"
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
"	font: 12pt \"\347\255\211\347\272\277\";\n"
"selection-background-color: green;\n"
"}"));
        frame = new QFrame(cmaking);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-1, -1, 384, 438));
        frame->setMinimumSize(QSize(384, 0));
        frame->setMaximumSize(QSize(384, 438));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 384, 441));
        frame_2->setMinimumSize(QSize(384, 0));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 341, 411));
        button_back = new QPushButton(frame_2);
        button_back->setObjectName("button_back");
        button_back->setGeometry(QRect(30, 40, 80, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_back->sizePolicy().hasHeightForWidth());
        button_back->setSizePolicy(sizePolicy1);
        button_back->setMinimumSize(QSize(61, 31));
        button_back->setMaximumSize(QSize(16777215, 201));
        QFont font;
        font.setFamilies({QString::fromUtf8("\347\255\211\347\272\277")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        button_back->setFont(font);
        cin_check_answer = new QLineEdit(frame_2);
        cin_check_answer->setObjectName("cin_check_answer");
        cin_check_answer->setGeometry(QRect(70, 230, 231, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cin_check_answer->sizePolicy().hasHeightForWidth());
        cin_check_answer->setSizePolicy(sizePolicy2);
        cin_check_answer->setMinimumSize(QSize(231, 41));
        cin_check_answer->setMaximumSize(QSize(231, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\347\255\211\347\272\277")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        cin_check_answer->setFont(font1);
        cin_check_answer->setEchoMode(QLineEdit::EchoMode::Password);
        answer_len_warning = new QLabel(frame_2);
        answer_len_warning->setObjectName("answer_len_warning");
        answer_len_warning->setGeometry(QRect(100, 280, 181, 31));
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(answer_len_warning->sizePolicy().hasHeightForWidth());
        answer_len_warning->setSizePolicy(sizePolicy3);
        answer_len_warning->setMinimumSize(QSize(181, 31));
        answer_len_warning->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\347\255\211\347\272\277")});
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        answer_len_warning->setFont(font2);
        answer_len_warning->setAlignment(Qt::AlignmentFlag::AlignCenter);
        answer_check_warning = new QLabel(frame_2);
        answer_check_warning->setObjectName("answer_check_warning");
        answer_check_warning->setGeometry(QRect(100, 280, 181, 31));
        sizePolicy3.setHeightForWidth(answer_check_warning->sizePolicy().hasHeightForWidth());
        answer_check_warning->setSizePolicy(sizePolicy3);
        answer_check_warning->setMinimumSize(QSize(181, 31));
        answer_check_warning->setMaximumSize(QSize(16777215, 16777215));
        answer_check_warning->setFont(font2);
        answer_check_warning->setAlignment(Qt::AlignmentFlag::AlignCenter);
        success = new QLabel(frame_2);
        success->setObjectName("success");
        success->setGeometry(QRect(100, 280, 181, 31));
        success->setMinimumSize(QSize(181, 31));
        success->setMaximumSize(QSize(16777215, 16777215));
        success->setFont(font2);
        success->setAlignment(Qt::AlignmentFlag::AlignCenter);
        button_done = new QPushButton(frame_2);
        button_done->setObjectName("button_done");
        button_done->setGeometry(QRect(110, 320, 171, 31));
        button_done->setMinimumSize(QSize(171, 31));
        button_done->setMaximumSize(QSize(16777215, 81));
        button_done->setFont(font);
        cin_id = new QLineEdit(frame_2);
        cin_id->setObjectName("cin_id");
        cin_id->setGeometry(QRect(70, 110, 231, 41));
        sizePolicy2.setHeightForWidth(cin_id->sizePolicy().hasHeightForWidth());
        cin_id->setSizePolicy(sizePolicy2);
        cin_id->setMinimumSize(QSize(231, 41));
        cin_id->setMaximumSize(QSize(231, 41));
        cin_id->setFont(font1);
        cin_id->setFrame(true);
        button_turn = new QPushButton(frame_2);
        button_turn->setObjectName("button_turn");
        button_turn->setGeometry(QRect(110, 380, 171, 31));
        button_turn->setMinimumSize(QSize(171, 31));
        button_turn->setMaximumSize(QSize(16777215, 81));
        button_turn->setFont(font);
        id_same_warning = new QLabel(frame_2);
        id_same_warning->setObjectName("id_same_warning");
        id_same_warning->setGeometry(QRect(100, 280, 181, 31));
        sizePolicy3.setHeightForWidth(id_same_warning->sizePolicy().hasHeightForWidth());
        id_same_warning->setSizePolicy(sizePolicy3);
        id_same_warning->setMinimumSize(QSize(181, 31));
        id_same_warning->setMaximumSize(QSize(16777215, 16777215));
        id_same_warning->setFont(font2);
        id_same_warning->setAlignment(Qt::AlignmentFlag::AlignCenter);
        cin_answer = new QLineEdit(frame_2);
        cin_answer->setObjectName("cin_answer");
        cin_answer->setGeometry(QRect(70, 170, 231, 41));
        sizePolicy2.setHeightForWidth(cin_answer->sizePolicy().hasHeightForWidth());
        cin_answer->setSizePolicy(sizePolicy2);
        cin_answer->setMinimumSize(QSize(231, 41));
        cin_answer->setMaximumSize(QSize(231, 41));
        cin_answer->setFont(font1);
        cin_answer->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(320, 40, 31, 31));
        pushButton_3->setMinimumSize(QSize(0, 0));
        pushButton_3->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(cmaking);

        QMetaObject::connectSlotsByName(cmaking);
    } // setupUi

    void retranslateUi(QDialog *cmaking)
    {
        cmaking->setWindowTitle(QCoreApplication::translate("cmaking", "Dialog", nullptr));
        label->setText(QString());
        button_back->setText(QCoreApplication::translate("cmaking", "\350\277\224\345\233\236", nullptr));
        cin_check_answer->setText(QString());
        cin_check_answer->setPlaceholderText(QCoreApplication::translate("cmaking", "\350\257\267\345\206\215\350\276\223\345\205\245\344\270\200\351\201\215\346\202\250\347\232\204\345\257\206\347\240\201", nullptr));
        answer_len_warning->setText(QCoreApplication::translate("cmaking", "\345\257\206\347\240\201\351\225\277\345\272\246\344\270\215\350\266\263\345\205\255\344\275\215\357\274\201", nullptr));
        answer_check_warning->setText(QCoreApplication::translate("cmaking", "\344\270\244\346\254\241\350\276\223\345\205\245\347\232\204\345\257\206\347\240\201\344\270\215\347\233\270\345\220\214\357\274\201", nullptr));
        success->setText(QCoreApplication::translate("cmaking", "\346\263\250\345\206\214\346\210\220\345\212\237\357\274\201\350\257\267\350\275\254\350\207\263\347\231\273\345\275\225\357\274\201", nullptr));
        button_done->setText(QCoreApplication::translate("cmaking", "\346\263\250\345\206\214", nullptr));
        cin_id->setPlaceholderText(QCoreApplication::translate("cmaking", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\350\264\246\345\217\267", nullptr));
        button_turn->setText(QCoreApplication::translate("cmaking", "\350\275\254\350\207\263\347\231\273\345\275\225", nullptr));
        id_same_warning->setText(QCoreApplication::translate("cmaking", "\350\257\245\350\264\246\345\217\267\345\267\262\347\273\217\346\263\250\345\206\214\350\277\207\344\272\206\357\274\201", nullptr));
        cin_answer->setText(QString());
        cin_answer->setPlaceholderText(QCoreApplication::translate("cmaking", "\350\276\223\345\205\245\345\244\247\344\272\216\345\205\255\344\275\215\344\270\224\346\227\240\346\261\211\345\255\227\347\232\204\345\257\206\347\240\201", nullptr));
        pushButton_3->setText(QCoreApplication::translate("cmaking", "\303\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cmaking: public Ui_cmaking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAKING_H
