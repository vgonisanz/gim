#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QDebug>

#include <memory>

#include "key.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void printKeys();

private:
    Ui::MainWindow *ui;

    void handleInputs();
    bool registerKey(Qt::Key key);

    std::vector<std::shared_ptr<KeyElement> > _keys;

protected:
    void printer();
    void printer(unsigned int index);
};

#endif // MAINWINDOW_H
