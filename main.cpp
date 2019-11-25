#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include "qcustomplot.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    // generate some data:

    w.show();
    return a.exec();
}
