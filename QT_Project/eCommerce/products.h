#ifndef PRODUCTS_H
#define PRODUCTS_H

#include <QDialog>

namespace Ui {
class Products;
}

class Products : public QDialog
{
    Q_OBJECT

public:
    explicit Products(QWidget *parent = nullptr);
    ~Products();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Products *ui;
};

#endif // PRODUCTS_H
