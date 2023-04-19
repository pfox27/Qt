#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QApplication>
#include <QCoreApplication>
#include <QtGlobal>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_exitButton_clicked()
{
    //QApplicaton :: exit ();
    qApp->exit();
}

