/********************************************************************************
** Form generated from reading UI file 'pracownik.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACOWNIK_H
#define UI_PRACOWNIK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pracownik
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Pracownik)
    {
        if (Pracownik->objectName().isEmpty())
            Pracownik->setObjectName(QString::fromUtf8("Pracownik"));
        Pracownik->resize(400, 300);
        verticalLayoutWidget = new QWidget(Pracownik);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 0, 281, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Pracownik);

        QMetaObject::connectSlotsByName(Pracownik);
    } // setupUi

    void retranslateUi(QDialog *Pracownik)
    {
        Pracownik->setWindowTitle(QCoreApplication::translate("Pracownik", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Pracownik", "Dodaj Pracownika", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Pracownik", "Usun Pracownika", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pracownik: public Ui_Pracownik {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACOWNIK_H
