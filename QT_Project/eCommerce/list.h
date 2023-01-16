#ifndef LIST_H
#define LIST_H

#include <QDialog>
#include "products.h"
#include "followers.h"

namespace Ui {
class List;
}

class List : public QDialog
{
    Q_OBJECT

public:
    explicit List(QWidget *parent = nullptr);
    ~List();

private slots:
    void on_btnBoostproduct_clicked();

    void on_btnAddfollows_clicked();

private:
    Ui::List *ui;
};

#endif // LIST_H
