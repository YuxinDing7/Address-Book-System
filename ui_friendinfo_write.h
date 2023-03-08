/********************************************************************************
** Form generated from reading UI file 'friendinfo_write.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDINFO_WRITE_H
#define UI_FRIENDINFO_WRITE_H

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

class Ui_friendinfo_write
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
    QCalendarWidget *calendarWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QRadioButton *yesButton;
    QRadioButton *noButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *way_lineEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *friendinfo_write)
    {
        if (friendinfo_write->objectName().isEmpty())
            friendinfo_write->setObjectName(QString::fromUtf8("friendinfo_write"));
        friendinfo_write->resize(461, 798);
        friendinfo_write->setCursor(QCursor(Qt::ArrowCursor));
        layoutWidget = new QWidget(friendinfo_write);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 401, 691));
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

        calendarWidget_2 = new QCalendarWidget(layoutWidget);
        calendarWidget_2->setObjectName(QString::fromUtf8("calendarWidget_2"));
        calendarWidget_2->setMinimumSize(QSize(0, 0));

        horizontalLayout_5->addWidget(calendarWidget_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        yesButton = new QRadioButton(layoutWidget);
        buttonGroup = new QButtonGroup(friendinfo_write);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(yesButton);
        yesButton->setObjectName(QString::fromUtf8("yesButton"));

        horizontalLayout_8->addWidget(yesButton);

        noButton = new QRadioButton(layoutWidget);
        buttonGroup->addButton(noButton);
        noButton->setObjectName(QString::fromUtf8("noButton"));

        horizontalLayout_8->addWidget(noButton);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        way_lineEdit = new QLineEdit(layoutWidget);
        way_lineEdit->setObjectName(QString::fromUtf8("way_lineEdit"));

        horizontalLayout_6->addWidget(way_lineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));

        verticalLayout->addLayout(horizontalLayout_7);

        okButton = new QPushButton(friendinfo_write);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(140, 750, 80, 31));
        cancelButton = new QPushButton(friendinfo_write);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(270, 750, 80, 31));

        retranslateUi(friendinfo_write);

        QMetaObject::connectSlotsByName(friendinfo_write);
    } // setupUi

    void retranslateUi(QWidget *friendinfo_write)
    {
        friendinfo_write->setWindowTitle(QCoreApplication::translate("friendinfo_write", "\346\234\213\345\217\213\344\277\241\346\201\257\345\241\253\345\206\231", nullptr));
        label->setText(QCoreApplication::translate("friendinfo_write", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("friendinfo_write", "\347\224\265\350\257\235", nullptr));
        label_3->setText(QCoreApplication::translate("friendinfo_write", "\351\202\256\347\256\261", nullptr));
        label_4->setText(QCoreApplication::translate("friendinfo_write", "\347\224\237\346\227\245", nullptr));
        label_5->setText(QCoreApplication::translate("friendinfo_write", "\347\233\270\350\257\206\n"
"\346\227\266\351\227\264", nullptr));
        label_7->setText(QCoreApplication::translate("friendinfo_write", "\346\230\257\345\220\246\345\217\221\351\200\201\347\224\237\346\227\245\347\245\235\347\246\217", nullptr));
        yesButton->setText(QCoreApplication::translate("friendinfo_write", "\346\230\257", nullptr));
        noButton->setText(QCoreApplication::translate("friendinfo_write", "\345\220\246", nullptr));
        label_6->setText(QCoreApplication::translate("friendinfo_write", "\347\233\270\350\257\206\346\226\271\345\274\217", nullptr));
        okButton->setText(QCoreApplication::translate("friendinfo_write", "\347\241\256\350\256\244", nullptr));
        cancelButton->setText(QCoreApplication::translate("friendinfo_write", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class friendinfo_write: public Ui_friendinfo_write {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDINFO_WRITE_H
