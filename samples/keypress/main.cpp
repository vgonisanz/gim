#include <QApplication>
#include "keypress.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    KeyPress window;
    window.show();

    qDebug() << "Launching app...";
    return app.exec();
}
