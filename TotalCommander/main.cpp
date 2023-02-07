#include "TotalCommander.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TotalCommander w;
    w.show();
    return a.exec();
}
