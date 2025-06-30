#include "cstart.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cstart w;
    w.show();
    return a.exec();
}
