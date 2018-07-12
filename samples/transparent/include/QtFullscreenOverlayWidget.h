#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include <QDebug>

class QtFullscreenOverlayWidget : public QWidget
{
    Q_OBJECT

public:
    explicit QtFullscreenOverlayWidget(QWidget *parent = 0);
    ~QtFullscreenOverlayWidget();
    
protected:
    bool eventFilter(QObject *obj, QEvent *event);
};

#endif // CUSTOMWIDGET_H
