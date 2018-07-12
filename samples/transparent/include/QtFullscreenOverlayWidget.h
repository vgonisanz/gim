#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include <QVBoxLayout>
#include <QLabel>
#include <QDebug>

class QtFullscreenOverlayWidget : public QWidget
{
    Q_OBJECT

public:
    explicit QtFullscreenOverlayWidget(QWidget *parent = 0);
    ~QtFullscreenOverlayWidget();

private:
    QLabel *myLabel;
    QVBoxLayout *mainLayout;

    bool eventFilter(QObject *obj, QEvent *event);
    void keyPressEvent(QKeyEvent* event);
};

#endif // CUSTOMWIDGET_H
