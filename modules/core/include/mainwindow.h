#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QDebug>

#include "qxtglobalshortcut.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    void handleInputs();

    QKeySequence *shortcut;
    QxtGlobalShortcut *globalShortcut;

protected:
    //bool eventFilter(QObject *obj, QEvent *event);
    static void printer();
    static void printer(QKeySequence *seq);
};

#endif // MAINWINDOW_H
