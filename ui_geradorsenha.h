/********************************************************************************
** Form generated from reading UI file 'geradorsenha.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERADORSENHA_H
#define UI_GERADORSENHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeradorSenha
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GeradorSenha)
    {
        if (GeradorSenha->objectName().isEmpty())
            GeradorSenha->setObjectName("GeradorSenha");
        GeradorSenha->resize(358, 480);
        centralwidget = new QWidget(GeradorSenha);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 2, 311, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");

        verticalLayout->addWidget(spinBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        checkBox_6 = new QCheckBox(widget);
        checkBox_6->setObjectName("checkBox_6");

        gridLayout->addWidget(checkBox_6, 1, 1, 1, 1);

        checkBox_5 = new QCheckBox(widget);
        checkBox_5->setObjectName("checkBox_5");

        gridLayout->addWidget(checkBox_5, 2, 0, 1, 1);

        checkBox_4 = new QCheckBox(widget);
        checkBox_4->setObjectName("checkBox_4");

        gridLayout->addWidget(checkBox_4, 1, 0, 1, 1);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout->addWidget(checkBox_2, 0, 1, 1, 1);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 170, 311, 271));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);

        plainTextEdit = new QPlainTextEdit(widget1);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout_2->addWidget(plainTextEdit);

        GeradorSenha->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GeradorSenha);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 358, 21));
        GeradorSenha->setMenuBar(menubar);
        statusbar = new QStatusBar(GeradorSenha);
        statusbar->setObjectName("statusbar");
        GeradorSenha->setStatusBar(statusbar);

        retranslateUi(GeradorSenha);

        QMetaObject::connectSlotsByName(GeradorSenha);
    } // setupUi

    void retranslateUi(QMainWindow *GeradorSenha)
    {
        GeradorSenha->setWindowTitle(QCoreApplication::translate("GeradorSenha", "GeradorSenha", nullptr));
        pushButton->setText(QCoreApplication::translate("GeradorSenha", "Gen", nullptr));
        checkBox_6->setText(QCoreApplication::translate("GeradorSenha", "ABC", nullptr));
        checkBox_5->setText(QCoreApplication::translate("GeradorSenha", "Custom ", nullptr));
        checkBox_4->setText(QCoreApplication::translate("GeradorSenha", "%$#", nullptr));
        checkBox_2->setText(QCoreApplication::translate("GeradorSenha", "abc", nullptr));
        checkBox->setText(QCoreApplication::translate("GeradorSenha", "123", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeradorSenha: public Ui_GeradorSenha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERADORSENHA_H
