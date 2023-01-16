#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnLazada_clicked()
{
    List *pList = new List();
    pList->show();
}


void MainWindow::on_btnLogin_clicked()
{
    QMessageBox::information(this, "alert", "Login button clicked !");
}


void MainWindow::on_btnShopee_clicked()
{
    List *pList = new List();
    pList->show();
}


void MainWindow::on_btnShopify_clicked()
{
    List *pList = new List();
    pList->show();
}


void MainWindow::on_btnTiktok_clicked()
{
    List *pList = new List();
    pList->show();
}


void MainWindow::on_btnAmazon_clicked()
{
    List *pList = new List();
    pList->show();
}

