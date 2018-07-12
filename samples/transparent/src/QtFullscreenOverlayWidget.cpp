#include "QtFullscreenOverlayWidget.h"

#include <QScreen>
#include <QGuiApplication>

QtFullscreenOverlayWidget::QtFullscreenOverlayWidget(QWidget *parent):QWidget(parent)
{
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width() * 2;
    setGeometry(QRect(0, 0, width, height));

    // setWindowState(Qt::WindowFullScreen);  // If full screen is used
                                              // the transparency is lost
    setWindowFlags(Qt::Widget |
                   Qt::FramelessWindowHint |         // Remove frame
                   Qt::WindowStaysOnTopHint |        // Always ontop
                   //Qt::WindowTransparentForInput |   // Ignore interaction
                   Qt::X11BypassWindowManagerHint);  // Ignore toolbars
    setParent(0); // Create TopLevel-Widget
    setAttribute(Qt::WA_NoSystemBackground, true);
    setAttribute(Qt::WA_TranslucentBackground, true);

    qApp->installEventFilter(this);

    //grabKeyboard();
}

QtFullscreenOverlayWidget::~QtFullscreenOverlayWidget()
{
    //releaseKeyboard();
}

bool QtFullscreenOverlayWidget::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::GrabKeyboard)
        qDebug() << "Grabing keyboard";
    if (event->type() == QEvent::GrabMouse)
        qDebug() << "Grabing mouse";
    if (event->type() == QEvent::UngrabKeyboard)
        qDebug() << "UnGrabing keyboard";
    if (event->type() == QEvent::UngrabMouse)
        qDebug() << "UnGrabing mouse";
    if (event->type() == QEvent::KeyRelease)
        qDebug() << "Key release";

    if (event->type() == QEvent::KeyPress)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        qDebug() << "key " << keyEvent->key() << "from" << obj;
    }
    return QObject::eventFilter(obj, event);
}
