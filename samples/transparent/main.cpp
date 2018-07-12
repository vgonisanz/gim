#include "QtFullscreenOverlayWidget.h"
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QtFullscreenOverlayWidget window;
    window.show();

    qDebug() << "Launching app...";
    return app.exec();
}
