/********************************************************************************
** Form generated from reading UI file 'elsemodify.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELSEMODIFY_H
#define UI_ELSEMODIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElseModify
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
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QRadioButton *yesButton;
    QRadioButton *noButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *remarkEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *ElseModify)
    {
        if (ElseModify->objectName().isEmpty())
            ElseModify->setObjectName(QString::fromUtf8("ElseModify"));
        ElseModify->resize(450, 664);
        layoutWidget = new QWidget(ElseModify);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 351, 521));
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

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        yesButton = new QRadioButton(layoutWidget);
        buttonGroup = new QButtonGroup(ElseModify);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(yesButton);
        yesButton->setObjectName(QString::fromUtf8("yesButton"));

        horizontalLayout_6->addWidget(yesButton);

        noButton = new QRadioButton(layoutWidget);
        buttonGroup->addButton(noButton);
        noButton->setObjectName(QString::fromUtf8("noButton"));

        horizontalLayout_6->addWidget(noButton);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        remarkEdit = new QLineEdit(layoutWidget);
        remarkEdit->setObjectName(QString::fromUtf8("remarkEdit"));

        horizontalLayout_5->addWidget(remarkEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));

        verticalLayout->addLayout(horizontalLayout_7);

        okButton = new QPushButton(ElseModify);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(120, 590, 80, 31));
        cancelButton = new QPushButton(ElseModify);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(250, 590, 80, 31));

        retranslateUi(ElseModify);

        QMetaObject::connectSlotsByName(ElseModify);
    } // setupUi

    void retranslateUi(QWidget *ElseModify)
    {
        ElseModify->setWindowTitle(QCoreApplication::translate("ElseModify", "\344\277\241\346\201\257\346\237\245\347\234\213", nullptr));
        label->setText(QCoreApplication::translate("ElseModify", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("ElseModify", "\347\224\265\350\257\235", nullptr));
        label_3->setText(QCoreApplication::translate("ElseModify", "\351\202\256\347\256\261", nullptr));
        label_4->setText(QCoreApplication::translate("ElseModify", "\347\224\237\346\227\245", nullptr));
        label_6->setText(QCoreApplication::translate("ElseModify", "\346\230\257\345\220\246\345\217\221\351\200\201\347\224\237\346\227\245\347\245\235\347\246\217", nullptr));
        yesButton->setText(QCoreApplication::translate("ElseModify", "\346\230\257", nullptr));
        noButton->setText(QCoreApplication::translate("ElseModify", "\345\220\246", nullptr));
        label_5->setText(QCoreApplication::translate("ElseModify", "\345\244\207\346\263\250", nullptr));
        okButton->setText(QCoreApplication::translate("ElseModify", "\344\277\256\346\224\271", nullptr));
        cancelButton->setText(QCoreApplication::translate("ElseModify", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ElseModify: public Ui_ElseModify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELSEMODIFY_H
