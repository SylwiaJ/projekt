/********************************************************************************
** Form generated from reading UI file 'dodajprzedmiot.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DODAJPRZEDMIOT_H
#define UI_DODAJPRZEDMIOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DodajPrzedmiot
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *NazwaPrzedmiotu;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QDialog *DodajPrzedmiot)
    {
        if (DodajPrzedmiot->objectName().isEmpty())
            DodajPrzedmiot->setObjectName(QString::fromUtf8("DodajPrzedmiot"));
        DodajPrzedmiot->resize(400, 300);
        gridLayoutWidget = new QWidget(DodajPrzedmiot);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 140, 341, 84));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        NazwaPrzedmiotu = new QLineEdit(gridLayoutWidget);
        NazwaPrzedmiotu->setObjectName(QString::fromUtf8("NazwaPrzedmiotu"));

        gridLayout->addWidget(NazwaPrzedmiotu, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        label_3 = new QLabel(DodajPrzedmiot);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 30, 191, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_3->setFont(font);

        retranslateUi(DodajPrzedmiot);

        QMetaObject::connectSlotsByName(DodajPrzedmiot);
    } // setupUi

    void retranslateUi(QDialog *DodajPrzedmiot)
    {
        DodajPrzedmiot->setWindowTitle(QCoreApplication::translate("DodajPrzedmiot", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DodajPrzedmiot", "Nazwa Przedmiotu", nullptr));
        label_2->setText(QCoreApplication::translate("DodajPrzedmiot", "Rodzaj", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("DodajPrzedmiot", "Pracownik Fizyczny", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("DodajPrzedmiot", "Pracownik Produkcji", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("DodajPrzedmiot", "Pracownik Logistyki", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("DodajPrzedmiot", "Pracownik Biura", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("DodajPrzedmiot", "Kierownik Produkcji", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("DodajPrzedmiot", "Kierownik Logistyki", nullptr));

        pushButton->setText(QCoreApplication::translate("DodajPrzedmiot", "Dodaj", nullptr));
        label_3->setText(QCoreApplication::translate("DodajPrzedmiot", "Dodaj przedmiot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DodajPrzedmiot: public Ui_DodajPrzedmiot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJPRZEDMIOT_H
