/********************************************************************************
** Form generated from reading UI file 'dodajpracownika.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DODAJPRACOWNIKA_H
#define UI_DODAJPRACOWNIKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DodajPracownika
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label_4;

    void setupUi(QDialog *DodajPracownika)
    {
        if (DodajPracownika->objectName().isEmpty())
            DodajPracownika->setObjectName(QString::fromUtf8("DodajPracownika"));
        DodajPracownika->resize(400, 300);
        formLayoutWidget = new QWidget(DodajPracownika);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(39, 109, 321, 112));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        horizontalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        label_4 = new QLabel(DodajPracownika);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 20, 191, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_4->setFont(font);

        retranslateUi(DodajPracownika);

        QMetaObject::connectSlotsByName(DodajPracownika);
    } // setupUi

    void retranslateUi(QDialog *DodajPracownika)
    {
        DodajPracownika->setWindowTitle(QCoreApplication::translate("DodajPracownika", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DodajPracownika", "Imie", nullptr));
        label_2->setText(QCoreApplication::translate("DodajPracownika", "Nazwisko", nullptr));
        label_3->setText(QCoreApplication::translate("DodajPracownika", "Stanowisko", nullptr));
        pushButton->setText(QCoreApplication::translate("DodajPracownika", "Dodaj", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DodajPracownika", "Pracownik Fizyczny", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DodajPracownika", "Pracownik Produkcji", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DodajPracownika", "Pracownik Logistyki", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("DodajPracownika", "Pracownik Biura", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("DodajPracownika", "Kierownik Produkcji", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("DodajPracownika", "Kierownik Logistyki", nullptr));

        label_4->setText(QCoreApplication::translate("DodajPracownika", "Dodaj Pracownika", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DodajPracownika: public Ui_DodajPracownika {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJPRACOWNIKA_H
