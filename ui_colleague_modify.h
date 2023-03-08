/********************************************************************************
** Form generated from reading UI file 'colleague_modify.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLEAGUE_MODIFY_H
#define UI_COLLEAGUE_MODIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Colleague_modify
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *name_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *phone_lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *mail_lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QCalendarWidget *calendarWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *company_lineEdit;
    QHBoxLayout *horizontalLayout_7;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *pushButton;
    QPushButton *okButton_2;
    QPushButton *cancelButton_2;

    void setupUi(QWidget *Colleague_modify)
    {
        if (Colleague_modify->objectName().isEmpty())
            Colleague_modify->setObjectName(QString::fromUtf8("Colleague_modify"));
        Colleague_modify->resize(450, 664);
        layoutWidget = new QWidget(Colleague_modify);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 50, 351, 521));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        name_lineEdit = new QLineEdit(layoutWidget);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));

        horizontalLayout->addWidget(name_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        phone_lineEdit = new QLineEdit(layoutWidget);
        phone_lineEdit->setObjectName(QString::fromUtf8("phone_lineEdit"));

        horizontalLayout_2->addWidget(phone_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        mail_lineEdit = new QLineEdit(layoutWidget);
        mail_lineEdit->setObjectName(QString::fromUtf8("mail_lineEdit"));

        horizontalLayout_3->addWidget(mail_lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        calendarWidget = new QCalendarWidget(layoutWidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        horizontalLayout_4->addWidget(calendarWidget);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        company_lineEdit = new QLineEdit(layoutWidget);
        company_lineEdit->setObjectName(QString::fromUtf8("company_lineEdit"));

        horizontalLayout_5->addWidget(company_lineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));

        verticalLayout->addLayout(horizontalLayout_7);

        layoutWidget_2 = new QWidget(Colleague_modify);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(130, 580, 168, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(layoutWidget_2);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setCheckable(false);

        horizontalLayout_8->addWidget(okButton);

        cancelButton = new QPushButton(layoutWidget_2);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setCheckable(false);

        horizontalLayout_8->addWidget(cancelButton);

        pushButton = new QPushButton(Colleague_modify);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 630, 80, 20));
        okButton_2 = new QPushButton(Colleague_modify);
        okButton_2->setObjectName(QString::fromUtf8("okButton_2"));
        okButton_2->setGeometry(QRect(60, 620, 80, 20));
        cancelButton_2 = new QPushButton(Colleague_modify);
        cancelButton_2->setObjectName(QString::fromUtf8("cancelButton_2"));
        cancelButton_2->setGeometry(QRect(320, 610, 80, 20));

        retranslateUi(Colleague_modify);

        QMetaObject::connectSlotsByName(Colleague_modify);
    } // setupUi

    void retranslateUi(QWidget *Colleague_modify)
    {
        Colleague_modify->setWindowTitle(QCoreApplication::translate("Colleague_modify", "\345\220\214\344\272\213\344\277\241\346\201\257\344\277\256\346\224\271", nullptr));
        label->setText(QCoreApplication::translate("Colleague_modify", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Colleague_modify", "\347\224\265\350\257\235", nullptr));
        label_3->setText(QCoreApplication::translate("Colleague_modify", "\351\202\256\347\256\261", nullptr));
        label_4->setText(QCoreApplication::translate("Colleague_modify", "\347\224\237\346\227\245", nullptr));
        label_5->setText(QCoreApplication::translate("Colleague_modify", "\345\205\254\345\217\270", nullptr));
        okButton->setText(QCoreApplication::translate("Colleague_modify", "\347\241\256\350\256\244", nullptr));
        cancelButton->setText(QCoreApplication::translate("Colleague_modify", "\345\217\226\346\266\210", nullptr));
        pushButton->setText(QCoreApplication::translate("Colleague_modify", "\347\241\256\350\256\244", nullptr));
        okButton_2->setText(QCoreApplication::translate("Colleague_modify", "\347\241\256\350\256\244", nullptr));
        cancelButton_2->setText(QCoreApplication::translate("Colleague_modify", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Colleague_modify: public Ui_Colleague_modify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLEAGUE_MODIFY_H
