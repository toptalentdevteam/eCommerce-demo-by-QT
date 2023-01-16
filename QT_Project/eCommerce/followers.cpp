#include "followers.h"
#include "ui_followers.h"
#include "QMessageBox"

Followers::Followers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Followers)
{
    ui->setupUi(this);
    this->setWindowTitle("Add Followers");
}

Followers::~Followers()
{
    delete ui;
}

void Followers::on_btnAddnow_clicked()
{
    QMessageBox::information(this, "alert", "Add now button clicked !");
}

