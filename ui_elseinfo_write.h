/********************************************************************************
** Form generated from reading UI file 'elseinfo_write.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELSEINFO_WRITE_H
#define UI_ELSEINFO_WRITE_H

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

class Ui_elseinfo_write
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
    QPushButton *cancelButton;
    QPushButton *okButton;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *elseinfo_write)
    {
        if (elseinfo_write->objectName().isEmpty())
            elseinfo_write->setObjectName(QString::fromUtf8("elseinfo_write"));
        elseinfo_write->resize(450, 664);
        layoutWidget = new QWidget(elseinfo_write);
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

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        yesButton = new QRadioButton(layoutWidget);
        buttonGroup = new QButtonGroup(elseinfo_write);
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

        cancelButton = new QPushButton(elseinfo_write);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(250, 600, 80, 31));
        okButton = new QPushButton(elseinfo_write);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(120, 600, 80, 31));

        retranslateUi(elseinfo_write);

        QMetaObject::connectSlotsByName(elseinfo_write);
    } // setupUi

    void retranslateUi(QWidget *elseinfo_write)
    {
        elseinfo_write->setWindowTitle(QCoreApplication::translate("elseinfo_write", "\345\205\266\344\273\226\344\277\241\346\201\257\345\241\253\345\206\231", nullptr));
        label->setText(QCoreApplication::translate("elseinfo_write", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("elseinfo_write", "\347\224\265\350\257\235", nullptr));
        label_3->setText(QCoreApplication::translate("elseinfo_write", "\351\202\256\347\256\261", nullptr));
        label_4->setText(QCoreApplication::translate("elseinfo_write", "\347\224\237\346\227\245", nullptr));
        label_6->setText(QCoreApplication::translate("elseinfo_write", "\346\230\257\345\220\246\345\217\221\351\200\201\347\224\237\346\227\245\347\245\235\347\246\217", nullptr));
        yesButton->setText(QCoreApplication::translate("elseinfo_write", "\346\230\257", nullptr));
        noButton->setText(QCoreApplication::translate("elseinfo_write", "\345\220\246", nullptr));
        label_5->setText(QCoreApplication::translate("elseinfo_write", "\345\244\207\346\263\250", nullptr));
        cancelButton->setText(QCoreApplication::translate("elseinfo_write", "\345\217\226\346\266\210", nullptr));
        okButton->setText(QCoreApplication::translate("elseinfo_write", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class elseinfo_write: public Ui_elseinfo_write {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELSEINFO_WRITE_H
