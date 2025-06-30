/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QFrame *frame_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *head;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QFrame *frame_3;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *frame_4;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QDialog *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName("home");
        home->resize(572, 507);
        home->setStyleSheet(QString::fromUtf8("*{\n"
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
        gridLayout = new QGridLayout(home);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(home);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(30, 30, 511, 121));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget = new QWidget(frame_2);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 20, 92, 92));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        head = new QLabel(verticalLayoutWidget);
        head->setObjectName("head");
        head->setMinimumSize(QSize(90, 90));
        head->setMaximumSize(QSize(90, 90));

        verticalLayout->addWidget(head);

        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 20, 321, 31));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 50, 361, 31));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(410, 80, 74, 30));
        pushButton_2->setMinimumSize(QSize(74, 30));
        pushButton_2->setMaximumSize(QSize(74, 30));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(131, 81, 231, 31));
        label_3->setMinimumSize(QSize(231, 31));
        label_3->setMaximumSize(QSize(231, 31));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 80, 74, 30));
        pushButton->setMinimumSize(QSize(74, 30));
        pushButton->setMaximumSize(QSize(74, 30));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(30, 190, 511, 121));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(19, 21, 471, 31));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 70, 471, 31));
        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(30, 350, 511, 141));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        label_6 = new QLabel(frame_4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 111, 31));
        verticalLayoutWidget_2 = new QWidget(frame_4);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(160, 10, 92, 92));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(90, 90));
        label_7->setMaximumSize(QSize(90, 90));

        verticalLayout_2->addWidget(label_7);

        verticalLayoutWidget_3 = new QWidget(frame_4);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(280, 10, 92, 92));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(90, 90));
        label_8->setMaximumSize(QSize(90, 90));

        verticalLayout_3->addWidget(label_8);

        verticalLayoutWidget_4 = new QWidget(frame_4);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(400, 10, 92, 92));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget_4);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(90, 90));
        label_9->setMaximumSize(QSize(90, 90));

        verticalLayout_4->addWidget(label_9);

        label_10 = new QLabel(frame_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(160, 110, 91, 31));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_11 = new QLabel(frame_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(280, 110, 91, 31));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_12 = new QLabel(frame_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(400, 110, 91, 31));
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_13 = new QLabel(frame_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 40, 121, 31));

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QDialog *home)
    {
        home->setWindowTitle(QCoreApplication::translate("home", "Dialog", nullptr));
        head->setText(QString());
        label->setText(QCoreApplication::translate("home", "\350\277\231\351\207\214\346\230\257\344\270\200\345\217\245\350\257\235", nullptr));
        label_2->setText(QCoreApplication::translate("home", "\350\277\231\351\207\214\346\230\257\344\270\200\345\217\245\350\257\235", nullptr));
        pushButton_2->setText(QCoreApplication::translate("home", "\347\274\226\350\276\221\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("home", "\346\233\264\346\215\242\345\244\264\345\203\217\345\222\214\345\220\215\347\247\260\357\274\214\347\202\271\345\207\273\346\255\244\345\244\204\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("home", "\347\274\226\350\276\221\345\244\264\345\203\217", nullptr));
        label_4->setText(QCoreApplication::translate("home", "\350\277\231\351\207\214\345\217\210\346\230\257\344\270\200\345\217\245\350\257\235", nullptr));
        label_5->setText(QCoreApplication::translate("home", "\346\210\221\346\200\216\344\271\210\350\257\235\350\277\231\344\271\210\345\244\232", nullptr));
        label_6->setText(QCoreApplication::translate("home", "\346\210\220\345\260\261\345\261\225\350\247\210\351\246\206", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QCoreApplication::translate("home", "1\345\260\217\346\227\266", nullptr));
        label_11->setText(QCoreApplication::translate("home", "10\345\260\217\346\227\266", nullptr));
        label_12->setText(QCoreApplication::translate("home", "100\345\260\217\346\227\266", nullptr));
        label_13->setText(QCoreApplication::translate("home", "\345\220\254\346\255\214\347\202\271\344\272\256\345\256\203\344\273\254\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
