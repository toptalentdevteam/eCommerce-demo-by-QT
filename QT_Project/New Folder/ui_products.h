/********************************************************************************
** Form generated from reading UI file 'products.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTS_H
#define UI_PRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Products
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Products)
    {
        if (Products->objectName().isEmpty())
            Products->setObjectName(QString::fromUtf8("Products"));
        Products->resize(742, 515);
        verticalLayoutWidget = new QWidget(Products);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 145, 581, 341));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_8 = new QLineEdit(verticalLayoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        verticalLayout->addWidget(lineEdit_8);

        lineEdit_7 = new QLineEdit(verticalLayoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        verticalLayout->addWidget(lineEdit_7);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        lineEdit_10 = new QLineEdit(verticalLayoutWidget);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        verticalLayout->addWidget(lineEdit_10);

        lineEdit_6 = new QLineEdit(verticalLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout->addWidget(lineEdit_6);

        lineEdit_9 = new QLineEdit(verticalLayoutWidget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        verticalLayout->addWidget(lineEdit_9);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        pushButton = new QPushButton(Products);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 150, 111, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover {   \n"
"    border: 1px solid black;\n"
"    border-radius: 5px;   \n"
"    background-color:#06c0df;\n"
"}"));
        label = new QLabel(Products);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 701, 51));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(28);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Products);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 80, 521, 51));
        QFont font2;
        font2.setPointSize(24);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(Products);

        QMetaObject::connectSlotsByName(Products);
    } // setupUi

    void retranslateUi(QDialog *Products)
    {
        Products->setWindowTitle(QApplication::translate("Products", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Products", "BOOST NOW", nullptr));
        label->setText(QApplication::translate("Products", "ADD YOUR LINK PRODUCT TO BOOST", nullptr));
        label_2->setText(QApplication::translate("Products", "MAX BOOST 24  PRODUCTS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Products: public Ui_Products {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTS_H
