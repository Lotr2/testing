#include "loginwindow.h"
#include "ProductPage/ProductPage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginWindow w;
    w.show();
    return a.exec();
}
