#ifndef FOLLOWERS_H
#define FOLLOWERS_H

#include <QDialog>

namespace Ui {
class Followers;
}

class Followers : public QDialog
{
    Q_OBJECT

public:
    explicit Followers(QWidget *parent = nullptr);
    ~Followers();

private slots:
    void on_btnAddnow_clicked();

private:
    Ui::Followers *ui;
};

#endif // FOLLOWERS_H
