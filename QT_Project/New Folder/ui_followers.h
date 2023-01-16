/********************************************************************************
** Form generated from reading UI file 'followers.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLLOWERS_H
#define UI_FOLLOWERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Followers
{
public:
    QLabel *qlaMax;
    QLabel *qlaAddfollowers;
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
    QPushButton *btnAddnow;

    void setupUi(QDialog *Followers)
    {
        if (Followers->objectName().isEmpty())
            Followers->setObjectName(QString::fromUtf8("Followers"));
        Followers->resize(755, 474);
        qlaMax = new QLabel(Followers);
        qlaMax->setObjectName(QString::fromUtf8("qlaMax"));
        qlaMax->setGeometry(QRect(90, 60, 521, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Nirmala UI"));
        font.setPointSize(24);
        qlaMax->setFont(font);
        qlaMax->setAlignment(Qt::AlignCenter);
        qlaAddfollowers = new QLabel(Followers);
        qlaAddfollowers->setObjectName(QString::fromUtf8("qlaAddfollowers"));
        qlaAddfollowers->setGeometry(QRect(0, 20, 701, 51));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        qlaAddfollowers->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(28);
        qlaAddfollowers->setFont(font1);
        qlaAddfollowers->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(Followers);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 120, 581, 341));
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

        btnAddnow = new QPushButton(Followers);
        btnAddnow->setObjectName(QString::fromUtf8("btnAddnow"));
        btnAddnow->setGeometry(QRect(610, 130, 111, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(12);
        btnAddnow->setFont(font2);
        btnAddnow->setStyleSheet(QString::fromUtf8("QPushButton:hover {   \n"
"    border: 1px solid black;\n"
"    border-radius: 5px;   \n"
"    background-color:#06c0df;\n"
"}"));

        retranslateUi(Followers);

        QMetaObject::connectSlotsByName(Followers);
    } // setupUi

    void retranslateUi(QDialog *Followers)
    {
        Followers->setWindowTitle(QApplication::translate("Followers", "Dialog", nullptr));
        qlaMax->setText(QApplication::translate("Followers", "MAX 400 FOLLOWERS", nullptr));
        qlaAddfollowers->setText(QApplication::translate("Followers", "ADD FOLLOWERS", nullptr));
        btnAddnow->setText(QApplication::translate("Followers", "ADD NOW", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Followers: public Ui_Followers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLLOWERS_H
