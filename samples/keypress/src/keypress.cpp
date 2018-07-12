#include "keypress.h"

#include <QApplication>
#include <QKeyEvent>

KeyPress::KeyPress(QWidget *parent) :
    QWidget(parent)
{
    myLabel = new QLabel("Label with keytext");
    mainLayout = new QVBoxLayout;
    mainLayout->addWidget(myLabel);
    setLayout(mainLayout);
}

void KeyPress::keyPressEvent(QKeyEvent *event)
{
    myLabel->setText(event->text());
}

void KeyPress::keyReleaseEvent(QKeyEvent *event)
{

}
