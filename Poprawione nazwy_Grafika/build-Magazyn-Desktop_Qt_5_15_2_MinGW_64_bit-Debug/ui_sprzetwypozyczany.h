/********************************************************************************
** Form generated from reading UI file 'sprzetwypozyczany.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRZETWYPOZYCZANY_H
#define UI_SPRZETWYPOZYCZANY_H

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

class Ui_SprzetWypozyczany
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *SprzetWypozyczany)
    {
        if (SprzetWypozyczany->objectName().isEmpty())
            SprzetWypozyczany->setObjectName(QString::fromUtf8("SprzetWypozyczany"));
        SprzetWypozyczany->resize(400, 300);
        formLayoutWidget = new QWidget(SprzetWypozyczany);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 100, 341, 114));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        horizontalLayout->addLayout(horizontalLayout_2);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(SprzetWypozyczany);

        QMetaObject::connectSlotsByName(SprzetWypozyczany);
    } // setupUi

    void retranslateUi(QDialog *SprzetWypozyczany)
    {
        SprzetWypozyczany->setWindowTitle(QCoreApplication::translate("SprzetWypozyczany", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SprzetWypozyczany", "ID Pracownika:", nullptr));
        label_2->setText(QCoreApplication::translate("SprzetWypozyczany", "ID Przedmiotu:", nullptr));
        label_3->setText(QCoreApplication::translate("SprzetWypozyczany", "Okres:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("SprzetWypozyczany", "1 Tydzien", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("SprzetWypozyczany", "2 Tygodnie", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("SprzetWypozyczany", "3 Tygodnie", nullptr));

        pushButton->setText(QCoreApplication::translate("SprzetWypozyczany", "Wypozycz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SprzetWypozyczany: public Ui_SprzetWypozyczany {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRZETWYPOZYCZANY_H
