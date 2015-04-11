#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    ui = new Ui_MainWindow;
    ui->setupUi(this);

    //
    connect(ui->exitAction, SIGNAL(triggered()), this, SLOT(close()));

    //
    connect(ui->aboutAction, SIGNAL(triggered()), this, SLOT(showAbout()));

    //
    connect(ui->helpAction, SIGNAL(triggered()), this, SLOT(showHelp()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete aboutDialog;
}

//
void MainWindow::showAbout()
{
    aboutDialog = new AboutDialog(this);
    aboutDialog->setVisible(true);
}

//
void MainWindow::showHelp()
{
    HelpBrowser::showPage("index.html");
}

