/********************************************************************************
** Form generated from reading UI file 'list.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIST_H
#define UI_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_List
{
public:
    QPushButton *btnBoostproduct;
    QPushButton *btnAddfollows;

    void setupUi(QDialog *List)
    {
        if (List->objectName().isEmpty())
            List->setObjectName(QString::fromUtf8("List"));
        List->resize(400, 300);
        btnBoostproduct = new QPushButton(List);
        btnBoostproduct->setObjectName(QString::fromUtf8("btnBoostproduct"));
        btnBoostproduct->setGeometry(QRect(90, 60, 221, 61));
        QFont font;
        font.setPointSize(18);
        btnBoostproduct->setFont(font);
        btnBoostproduct->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton:hover {   \n"
"    border: 1px solid black;\n"
"    border-radius: 5px;   \n"
"    background-color:#06c0df;\n"
"}"));
        btnAddfollows = new QPushButton(List);
        btnAddfollows->setObjectName(QString::fromUtf8("btnAddfollows"));
        btnAddfollows->setGeometry(QRect(90, 150, 221, 61));
        btnAddfollows->setFont(font);
        btnAddfollows->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:hover {   \n"
"    border: 1px solid black;\n"
"    border-radius: 5px;   \n"
"    background-color:#06c0df;\n"
"}"));

        retranslateUi(List);

        QMetaObject::connectSlotsByName(List);
    } // setupUi

    void retranslateUi(QDialog *List)
    {
        List->setWindowTitle(QApplication::translate("List", "Dialog", nullptr));
        btnBoostproduct->setText(QApplication::translate("List", "BOOST PRODUCT", nullptr));
        btnAddfollows->setText(QApplication::translate("List", "ADD FOLOWERS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class List: public Ui_List {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST_H
