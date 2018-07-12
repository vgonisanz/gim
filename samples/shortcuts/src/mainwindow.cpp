#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QCoreApplication::instance()->installEventFilter(this);
    handleInputs();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::printer(unsigned int index)
{
    qDebug() << "Pushed: " << _keys[index]->seq->toString();
}

void MainWindow::printer()
{
    qDebug() << "printer";
}

void MainWindow::printKeys()
{
    qDebug() << "Key list: ";

    for (std::shared_ptr<KeyElement> key : _keys)
    {
        qDebug() << "* " << key->seq->toString();
    }
}

bool MainWindow::registerKey(Qt::Key key)
{
    const unsigned int index = _keys.size();

    std::shared_ptr<KeyElement> keye = std::make_shared<KeyElement> ();
    keye->seq = std::make_shared<QKeySequence> (key);
    keye->gshortcut = std::make_shared<QxtGlobalShortcut> (*keye->seq);

    if ( !keye->gshortcut->isValid() )
        return false;

    _keys.push_back(keye);
    qDebug() << "Adding: " << _keys[index]->seq->toString() << "at index: " << index;

    QObject::connect(_keys[index]->gshortcut.get(), &QxtGlobalShortcut::activated, _keys[index]->gshortcut.get(),
                [=]{ printer(index); });

    return true;
}

void MainWindow::handleInputs()
{
    qDebug() << "handleInputs";

    for (Qt::Key key : key_list)
    {
        if ( !registerKey(key) )
            qDebug() << QString("Error: Failed to set shortcut %1").arg(QString(key)) << endl;
    }
    printKeys();
}
