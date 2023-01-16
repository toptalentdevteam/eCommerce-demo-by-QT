#include "products.h"
#include "ui_products.h"
#include "QMessageBox"

Products::Products(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Products)
{
    ui->setupUi(this);
    this->setWindowTitle("Add Products");
}

Products::~Products()
{
    delete ui;
}

void Products::on_pushButton_clicked()
{
    QMessageBox::information(this, "alert", "Boost now button clicked !");
}

