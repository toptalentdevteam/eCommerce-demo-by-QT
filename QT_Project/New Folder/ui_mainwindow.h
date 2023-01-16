/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btnLazada;
    QPushButton *btnShopee;
    QPushButton *btnShopify;
    QPushButton *btnTiktok;
    QPushButton *btnAmazon;
    QLineEdit *ledUsername;
    QLineEdit *ledPassword;
    QPushButton *btnLogin;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(890, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 901, 601));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/images/images/design.png")));
        label->setScaledContents(true);
        btnLazada = new QPushButton(centralwidget);
        btnLazada->setObjectName(QString::fromUtf8("btnLazada"));
        btnLazada->setGeometry(QRect(0, 0, 151, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(26);
        btnLazada->setFont(font);
        btnLazada->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color:#155E4A;\n"
"    border-style: outset;\n"
"	color: #fff\n"
"    }\n"
"\n"
"\n"
"QPushButton:hover {   \n"
"    border: 1px solid black;\n"
"    border-radius: 5px;   \n"
"    background-color:#06c0df;\n"
"}"));
        btnShopee = new QPushButton(centralwidget);
        btnShopee->setObjectName(QString::fromUtf8("btnShopee"));
        btnShopee->setGeometry(QRect(160, 0, 151, 51));
        btnShopee->setFont(font);
        btnShopee->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color:#155E4A;\n"
"    border-style: outset;\n"
"	color: #fff\n"
"    }\n"
"\n"
"\n"
"QPushButton:hover {   \n"
"    border: 1px solid black;\n"
"    border-radius: 5px;   \n"
"    background-color:#06c0df;\n"
"}"));
        btnShopify = new QPushButton(centralwidget);
        btnShopify->setObjectName(QString::fromUtf8("btnShopify"));
        btnShopify->setGeometry(QRect(320, 0, 151, 51));
        btnShopify->setFont(font);
        btnShopify->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color:#155E4A;\n"
"    border-style: outset;\n"
"	color: #fff\n"
"    }\n"
"\n"
"\n"
"QPushButton:hover {   \n"
"    border: 1px solid black;\n"
"    border-radius: 5px;   \n"
"    background-color:#06c0df;\n"
"}"));
        btnTiktok = new QPushButton(centralwidget);
        btnTiktok->setObjectName(QString::fromUtf8("btnTiktok"));
        btnTiktok->setGeometry(QRect(480, 0, 151, 51));
        btnTiktok->setFont(font);
        btnTiktok->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color:#155E4A;\n"
"    border-style: outset;\n"
"	color: #fff\n"
"    }\n"
"\n"
"\n"
"QPushButton:hover {   \n"
"    border: 1px solid black;\n"
"    border-radius: 5px;   \n"
"    background-color:#06c0df;\n"
"}"));
        btnAmazon = new QPushButton(centralwidget);
        btnAmazon->setObjectName(QString::fromUtf8("btnAmazon"));
        btnAmazon->setGeometry(QRect(640, 0, 151, 51));
        btnAmazon->setFont(font);
        btnAmazon->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color:#155E4A;\n"
"    border-style: outset;\n"
"	color: #fff\n"
"    }\n"
"\n"
"\n"
"QPushButton:hover {   \n"
"    border: 1px solid black;\n"
"    border-radius: 5px;   \n"
"    background-color:#06c0df;\n"
"}"));
        ledUsername = new QLineEdit(centralwidget);
        ledUsername->setObjectName(QString::fromUtf8("ledUsername"));
        ledUsername->setGeometry(QRect(150, 80, 301, 41));
        QFont font1;
        font1.setPointSize(16);
        ledUsername->setFont(font1);
        ledUsername->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border: 1px solid yellow;\n"
"	background-color: rgba(0,0,0,0);\n"
"	color: white\n"
"}"));
        ledPassword = new QLineEdit(centralwidget);
        ledPassword->setObjectName(QString::fromUtf8("ledPassword"));
        ledPassword->setGeometry(QRect(150, 130, 301, 41));
        ledPassword->setFont(font1);
        ledPassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border: 1px solid yellow;\n"
"	background-color: rgba(0,0,0,0);\n"
"	color: white\n"
"}"));
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(300, 180, 151, 51));
        btnLogin->setFont(font);
        btnLogin->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color:#155E4A;\n"
"    border-style: outset;\n"
"	color: #fff\n"
"    }\n"
"\n"
"\n"
"QPushButton:hover {   \n"
"    border: 1px solid black;\n"
"    border-radius: 5px;   \n"
"    background-color:#06c0df;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 890, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        btnLazada->setText(QApplication::translate("MainWindow", "LAZADA", nullptr));
        btnShopee->setText(QApplication::translate("MainWindow", "SHOPEE", nullptr));
        btnShopify->setText(QApplication::translate("MainWindow", "SHOPIFY", nullptr));
        btnTiktok->setText(QApplication::translate("MainWindow", "TIKTOK", nullptr));
        btnAmazon->setText(QApplication::translate("MainWindow", "AMAZON", nullptr));
        ledUsername->setPlaceholderText(QApplication::translate("MainWindow", "Username:", nullptr));
        ledPassword->setPlaceholderText(QApplication::translate("MainWindow", "Password:", nullptr));
        btnLogin->setText(QApplication::translate("MainWindow", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
