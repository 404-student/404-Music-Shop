#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include<user.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class Menu;
}
QT_END_NAMESPACE

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    Menu(QWidget *parent = nullptr, user in = user());
    ~Menu();

private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

private:
    Ui::Menu *ui;
    QString namefile;
    QString headfile;
    QString minfile;
    QString timefile;
    QString listfile;
    bool createDefaultUserFile(QString fileadd);
};
#endif // MENU_H
