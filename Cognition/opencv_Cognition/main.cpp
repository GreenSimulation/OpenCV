#include <QtGui/QApplication>
#include "Header.h"

#include "opencv.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
