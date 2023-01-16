#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "list.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnLazada_clicked();

    void on_btnLogin_clicked();

    void on_btnShopee_clicked();

    void on_btnShopify_clicked();

    void on_btnTiktok_clicked();

    void on_btnAmazon_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
