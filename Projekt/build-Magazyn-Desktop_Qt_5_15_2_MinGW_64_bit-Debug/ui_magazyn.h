/********************************************************************************
** Form generated from reading UI file 'magazyn.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGAZYN_H
#define UI_MAGAZYN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Magazyn
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Magazyn)
    {
        if (Magazyn->objectName().isEmpty())
            Magazyn->setObjectName(QString::fromUtf8("Magazyn"));
        Magazyn->resize(800, 600);
        QPalette palette;
        Magazyn->setPalette(palette);
        centralwidget = new QWidget(Magazyn);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 130, 621, 451));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(-1, 0, 801, 131));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        Magazyn->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Magazyn);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Magazyn->setMenuBar(menubar);
        statusbar = new QStatusBar(Magazyn);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Magazyn->setStatusBar(statusbar);

        retranslateUi(Magazyn);

        QMetaObject::connectSlotsByName(Magazyn);
    } // setupUi

    void retranslateUi(QMainWindow *Magazyn)
    {
        Magazyn->setWindowTitle(QCoreApplication::translate("Magazyn", "Magazyn", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Magazyn", "PRACOWNIK", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Magazyn", "SPRZET", nullptr));
        pushButton->setText(QCoreApplication::translate("Magazyn", "WYPOZYCZALNIA", nullptr));
        label->setText(QCoreApplication::translate("Magazyn", "Magazyn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Magazyn: public Ui_Magazyn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGAZYN_H
