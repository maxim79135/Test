#include <QtWidgets>
#include <QApplication>
#include <viewexample.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ViewExample v;
    v.show();

    return a.exec();
}
