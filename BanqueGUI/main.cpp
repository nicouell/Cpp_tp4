#include "banquegui.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BanqueGUI w;
    w.show();
    return a.exec();
}
