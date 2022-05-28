/********************************************************************************
** Form generated from reading UI file 'usunpracownika.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USUNPRACOWNIKA_H
#define UI_USUNPRACOWNIKA_H

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

class Ui_Usunpracownika
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *Usunpracownika)
    {
        if (Usunpracownika->objectName().isEmpty())
            Usunpracownika->setObjectName(QString::fromUtf8("Usunpracownika"));
        Usunpracownika->resize(400, 300);
        formLayoutWidget = new QWidget(Usunpracownika);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 120, 341, 61));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

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


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        label_2 = new QLabel(Usunpracownika);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 30, 211, 43));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_2->setFont(font);

        retranslateUi(Usunpracownika);

        QMetaObject::connectSlotsByName(Usunpracownika);
    } // setupUi

    void retranslateUi(QDialog *Usunpracownika)
    {
        Usunpracownika->setWindowTitle(QCoreApplication::translate("Usunpracownika", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Usunpracownika", "ID:", nullptr));
        pushButton->setText(QCoreApplication::translate("Usunpracownika", "Usun", nullptr));
        label_2->setText(QCoreApplication::translate("Usunpracownika", "Usun Pracownika", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Usunpracownika: public Ui_Usunpracownika {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USUNPRACOWNIKA_H
