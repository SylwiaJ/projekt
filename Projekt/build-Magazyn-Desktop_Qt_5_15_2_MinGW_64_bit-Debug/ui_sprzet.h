/********************************************************************************
** Form generated from reading UI file 'sprzet.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRZET_H
#define UI_SPRZET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sprzet
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Sprzet)
    {
        if (Sprzet->objectName().isEmpty())
            Sprzet->setObjectName(QString::fromUtf8("Sprzet"));
        Sprzet->resize(400, 300);
        verticalLayoutWidget = new QWidget(Sprzet);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 50, 301, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Sprzet);

        QMetaObject::connectSlotsByName(Sprzet);
    } // setupUi

    void retranslateUi(QDialog *Sprzet)
    {
        Sprzet->setWindowTitle(QCoreApplication::translate("Sprzet", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Sprzet", "Dodaj Sprzet", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Sprzet", "Usun Sprzet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sprzet: public Ui_Sprzet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRZET_H
