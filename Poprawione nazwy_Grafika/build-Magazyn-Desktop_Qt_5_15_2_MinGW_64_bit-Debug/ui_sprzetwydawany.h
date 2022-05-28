/********************************************************************************
** Form generated from reading UI file 'sprzetwydawany.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRZETWYDAWANY_H
#define UI_SPRZETWYDAWANY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SprzetWydawany
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *SprzetWydawany)
    {
        if (SprzetWydawany->objectName().isEmpty())
            SprzetWydawany->setObjectName(QString::fromUtf8("SprzetWydawany"));
        SprzetWydawany->resize(400, 300);
        formLayoutWidget = new QWidget(SprzetWydawany);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 110, 341, 91));
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


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(SprzetWydawany);

        QMetaObject::connectSlotsByName(SprzetWydawany);
    } // setupUi

    void retranslateUi(QDialog *SprzetWydawany)
    {
        SprzetWydawany->setWindowTitle(QCoreApplication::translate("SprzetWydawany", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SprzetWydawany", "ID Pracownika:", nullptr));
        label_2->setText(QCoreApplication::translate("SprzetWydawany", "ID: Przedmiotu:", nullptr));
        pushButton->setText(QCoreApplication::translate("SprzetWydawany", "Wydaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SprzetWydawany: public Ui_SprzetWydawany {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRZETWYDAWANY_H
