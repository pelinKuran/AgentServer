#include "agentInvoke.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    agentInvoke w;
    w.show();
    return a.exec();
}
