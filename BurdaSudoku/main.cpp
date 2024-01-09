#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[]) //This code initializes and runs a Qt application with a main window, displaying it to the user.

{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
