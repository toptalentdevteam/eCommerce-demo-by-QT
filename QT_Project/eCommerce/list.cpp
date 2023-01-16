#include "list.h"
#include "ui_list.h"

List::List(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::List)
{
    ui->setupUi(this);
    this->setWindowTitle("List");
}

List::~List()
{
    delete ui;
}

void List::on_btnBoostproduct_clicked()
{
    this->close();
    Products *pTest = new Products();
    pTest->show();
}


void List::on_btnAddfollows_clicked()
{
    this->close();
    Followers *pFollowers = new Followers();
    pFollowers->show();
}

