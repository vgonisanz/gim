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

// bool MainWindow::eventFilter(QObject *obj, QEvent *event)
// {
//     if (event->type() == QEvent::KeyPress)
//     {
//         QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
//         qDebug() << "key " << keyEvent->key() << "from" << obj;
//     }
//     return QObject::eventFilter(obj, event);
// }
void MainWindow::printer(QKeySequence *seq)
{
    qDebug() << "hi: " << seq->toString();
}

void MainWindow::printer()
{
    qDebug() << "hi 1: ";
}

void MainWindow::handleInputs()
{
    qDebug() << "handleInputs";

    Qt::Key key = Qt::Key_0;

    QTextStream out(stdout);
    QTextStream err(stderr);

    shortcut = new QKeySequence(key);
    globalShortcut = new QxtGlobalShortcut(*shortcut);


    //globalShortcut->setEnabled(true);

    // if ( !globalShortcut.isValid() ) {
    //     err << QString("Error: Failed to set shortcut %1")
    //         .arg(shortcut.toString()) << endl;
    //     return;
    // }

    out << QString("Press shortcut %1 (or CTRL+C to exit)").arg(shortcut->toString()) << endl;

    QObject::connect(
                globalShortcut, &QxtGlobalShortcut::activated, globalShortcut,
                [this]{ printer(shortcut); });
    // QObject::connect(
    //             globalShortcut, &QxtGlobalShortcut::activated, globalShortcut,
    //             this->printer());


}
