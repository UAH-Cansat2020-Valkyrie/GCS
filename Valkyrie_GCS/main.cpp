#include <QApplication>
#include "mainwindow.h"

#define TEAM_ID "1234"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
