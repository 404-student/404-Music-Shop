/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *sidebar;
    QGridLayout *gridLayout_2;
    QToolButton *button1;
    QToolButton *button2;
    QToolButton *button3;
    QToolButton *button4;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(661, 507);
        Menu->setMinimumSize(QSize(661, 507));
        Menu->setMaximumSize(QSize(661, 507));
        Menu->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        sidebar = new QWidget(centralwidget);
        sidebar->setObjectName("sidebar");
        sidebar->setStyleSheet(QString::fromUtf8("background-color:rgb(64, 65, 66)"));
        gridLayout_2 = new QGridLayout(sidebar);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        button1 = new QToolButton(sidebar);
        button1->setObjectName("button1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button1->sizePolicy().hasHeightForWidth());
        button1->setSizePolicy(sizePolicy);
        button1->setMinimumSize(QSize(86, 90));
        QFont font;
        font.setPointSize(12);
        button1->setFont(font);
        button1->setStyleSheet(QString::fromUtf8("QToolButton{   \n"
"	border-top: 3px outset transparent;           /* \344\270\212\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"	border-bottom: 7px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;\n"
"    min-width: 80px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 80px;\n"
"	background-color: rgb(64,65,66);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);  /* \345\267\246\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201"
                        "\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\346\267\261\346\267\261\347\201\260 */\n"
"	background-color: rgb(33,34,34);	\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        button1->setIcon(icon);
        button1->setIconSize(QSize(48, 48));
        button1->setCheckable(true);
        button1->setAutoExclusive(true);
        button1->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(button1, 0, 0, 1, 1);

        button2 = new QToolButton(sidebar);
        button2->setObjectName("button2");
        sizePolicy.setHeightForWidth(button2->sizePolicy().hasHeightForWidth());
        button2->setSizePolicy(sizePolicy);
        button2->setMinimumSize(QSize(86, 90));
        button2->setFont(font);
        button2->setStyleSheet(QString::fromUtf8("QToolButton{   \n"
"	border-top: 3px outset transparent;           /* \344\270\212\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"	border-bottom: 7px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;\n"
"    min-width: 80px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 80px;\n"
"	background-color: rgb(64,65,66);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);  /* \345\267\246\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201"
                        "\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\346\267\261\346\267\261\347\201\260 */\n"
"	background-color: rgb(33,34,34);	\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        button2->setIcon(icon1);
        button2->setIconSize(QSize(48, 48));
        button2->setCheckable(true);
        button2->setAutoExclusive(true);
        button2->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(button2, 1, 0, 1, 1);

        button3 = new QToolButton(sidebar);
        button3->setObjectName("button3");
        sizePolicy.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy);
        button3->setMinimumSize(QSize(86, 90));
        button3->setFont(font);
        button3->setStyleSheet(QString::fromUtf8("QToolButton{   \n"
"	border-top: 3px outset transparent;           /* \344\270\212\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"	border-bottom: 7px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;\n"
"    min-width: 80px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 80px;\n"
"	background-color: rgb(64,65,66);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);  /* \345\267\246\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201"
                        "\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\346\267\261\346\267\261\347\201\260 */\n"
"	background-color: rgb(33,34,34);	\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::EditCut));
        button3->setIcon(icon2);
        button3->setIconSize(QSize(48, 48));
        button3->setCheckable(true);
        button3->setAutoExclusive(true);
        button3->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(button3, 2, 0, 1, 1);

        button4 = new QToolButton(sidebar);
        button4->setObjectName("button4");
        sizePolicy.setHeightForWidth(button4->sizePolicy().hasHeightForWidth());
        button4->setSizePolicy(sizePolicy);
        button4->setMinimumSize(QSize(86, 90));
        button4->setFont(font);
        button4->setStyleSheet(QString::fromUtf8("QToolButton{   \n"
"	border-top: 3px outset transparent;           /* \344\270\212\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"	border-bottom: 7px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;\n"
"    min-width: 80px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 80px;\n"
"	background-color: rgb(64,65,66);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);  /* \345\267\246\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201"
                        "\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\346\267\261\346\267\261\347\201\260 */\n"
"	background-color: rgb(33,34,34);	\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::DialogInformation));
        button4->setIcon(icon3);
        button4->setIconSize(QSize(48, 48));
        button4->setCheckable(true);
        button4->setAutoExclusive(true);
        button4->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(button4, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 208, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);


        gridLayout->addWidget(sidebar, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMinimumSize(QSize(572, 507));
        stackedWidget->setMaximumSize(QSize(572, 507));

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);

        Menu->setCentralWidget(centralwidget);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Menu", nullptr));
        button1->setText(QCoreApplication::translate("Menu", "\344\270\273\351\241\265", nullptr));
        button2->setText(QCoreApplication::translate("Menu", "\351\237\263\351\242\221\345\272\223", nullptr));
        button3->setText(QCoreApplication::translate("Menu", "\351\237\263\351\242\221\345\244\204\347\220\206", nullptr));
        button4->setText(QCoreApplication::translate("Menu", "\344\275\234\350\200\205\345\257\204\350\257\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
