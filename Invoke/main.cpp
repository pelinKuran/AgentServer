#include "invoke.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Invoke w;
    w.show();
    return a.exec();
}
