#include "QtFullscreenOverlayWidget.h"

#include <QScreen>
#include <QGuiApplication>
#include <QEvent>
#include <QMetaEnum>
#include <QDebug>
#include <QStyle>

/* Redefine qdebug operator to print event */
QDebug operator<<(QDebug str, const QEvent * ev)
{
   static int eventEnumIndex = QEvent::staticMetaObject
         .indexOfEnumerator("Type");
   str << "QEvent: ";
   if (ev)
   {
      QString name = QEvent::staticMetaObject
            .enumerator(eventEnumIndex).valueToKey(ev->type());
      if (!name.isEmpty()) str << name; else str << ev->type();
   }
   else
   {
      str << (void*)ev;
   }
   return str.maybeSpace();
}

QtFullscreenOverlayWidget::QtFullscreenOverlayWidget(QWidget *parent):QWidget(parent)
{
    myLabel = new QLabel("Label with keytext");
    mainLayout = new QVBoxLayout;

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();

    int width = 200;
    int height = 200;

    height = screenGeometry.height() >> 1;
    width = screenGeometry.width() >> 1;

    int x0 = 0;
    int y0 = 0;

    height = screenGeometry.height();
    width = screenGeometry.width();

    qDebug() << "Creating screen with geometry: " << width << "x" << height;
    setGeometry(QRect(x0, y0, width, height));
    //move(width * 2, height/2);
    //move( QStyle::alignedRect( Qt::LeftToRight, Qt::AlignCenter, size(), rect() ).topLeft() );

    //setWindowState(Qt::WindowFullScreen);  // If full screen is used
                                              // the transparency is lost
    setWindowFlags(Qt::Widget
                    //|
                   | Qt::FramelessWindowHint         // Remove frame
                   | Qt::WindowStaysOnTopHint        // Always ontop
                   //Qt::WindowTransparentForInput |   // Ignore interaction
                   //| Qt::X11BypassWindowManagerHint  // Ignore toolbars
                    );
    //setParent(0); // Create TopLevel-Widget
    setAttribute(Qt::WA_NoSystemBackground, true);
    setAttribute(Qt::WA_TranslucentBackground, true);
    //setAttribute(Qt::WA_TransparentForMouseEvents, true);   // disable mouse

    //this->setFocusPolicy(Qt::StrongFocus);
    //QWidget::grabKeyboard();
    QCoreApplication::instance()->installEventFilter(this);
    //installEventFilter(this);

    //grabKeyboard();
    //setFocus();
    //mainLayout->addWidget(myLabel);
    //setLayout(mainLayout);
}

QtFullscreenOverlayWidget::~QtFullscreenOverlayWidget()
{
    //releaseKeyboard();
}

void QtFullscreenOverlayWidget::keyPressEvent(QKeyEvent* event)
{
    QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
    int key = keyEvent->key();
    QString text = keyEvent->text();

    qDebug() << "keyPressEvent: " << text;

    // switch ( tolower(event->ascii()) )
    // {
    //     case 'r':                               // reload
    //         pict->load( name );
    //         update();
    //         break;
    //     case 'q':                               // quit
    //         QApplication::exit();
    //         break;
    // }
     //QCoreApplication::exit(-1);
}

bool QtFullscreenOverlayWidget::eventFilter(QObject *obj, QEvent *event)
{
    //Debug() << event;
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
    // if (event->type() == QEvent::MouseMove)
    //     qDebug() << "Mouse movement";
    if (event->type() == QEvent::MouseButtonPress)
        qDebug() << "Mouse press";
    if (event->type() == QEvent::MouseButtonRelease)
        qDebug() << "Mouse release";

    if (event->type() == QEvent::KeyPress)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        int key = keyEvent->key();
        QString text = keyEvent->text();

        qDebug() << "keyPressEvent: " << text;
    }
    return QObject::eventFilter(obj, event);
}
