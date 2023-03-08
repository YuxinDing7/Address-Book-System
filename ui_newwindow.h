/********************************************************************************
** Form generated from reading UI file 'newwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWINDOW_H
#define UI_NEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Newwindow
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *classmate_Button;
    QRadioButton *colleague_Button;
    QRadioButton *friend_Button;
    QRadioButton *relative_Button;
    QRadioButton *familiar_Button;
    QRadioButton *other_Button;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Newwindow)
    {
        if (Newwindow->objectName().isEmpty())
            Newwindow->setObjectName(QString::fromUtf8("Newwindow"));
        Newwindow->resize(350, 411);
        groupBox = new QGroupBox(Newwindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 59, 231, 261));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 231, 251));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        classmate_Button = new QRadioButton(layoutWidget);
        classmate_Button->setObjectName(QString::fromUtf8("classmate_Button"));

        verticalLayout->addWidget(classmate_Button);

        colleague_Button = new QRadioButton(layoutWidget);
        colleague_Button->setObjectName(QString::fromUtf8("colleague_Button"));

        verticalLayout->addWidget(colleague_Button);

        friend_Button = new QRadioButton(layoutWidget);
        friend_Button->setObjectName(QString::fromUtf8("friend_Button"));

        verticalLayout->addWidget(friend_Button);

        relative_Button = new QRadioButton(layoutWidget);
        relative_Button->setObjectName(QString::fromUtf8("relative_Button"));

        verticalLayout->addWidget(relative_Button);

        familiar_Button = new QRadioButton(layoutWidget);
        familiar_Button->setObjectName(QString::fromUtf8("familiar_Button"));

        verticalLayout->addWidget(familiar_Button);

        other_Button = new QRadioButton(layoutWidget);
        other_Button->setObjectName(QString::fromUtf8("other_Button"));

        verticalLayout->addWidget(other_Button);

        pushButton = new QPushButton(Newwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(81, 345, 80, 31));
        pushButton_2 = new QPushButton(Newwindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(179, 345, 80, 31));

        retranslateUi(Newwindow);

        QMetaObject::connectSlotsByName(Newwindow);
    } // setupUi

    void retranslateUi(QWidget *Newwindow)
    {
        Newwindow->setWindowTitle(QCoreApplication::translate("Newwindow", "\346\226\260\345\273\272\347\252\227\345\217\243", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Newwindow", "\350\257\267\351\200\211\346\213\251\346\226\260\345\273\272\350\201\224\347\263\273\344\272\272\347\232\204\347\261\273\345\236\213\357\274\232", nullptr));
        classmate_Button->setText(QCoreApplication::translate("Newwindow", "\345\220\214\345\255\246", nullptr));
        colleague_Button->setText(QCoreApplication::translate("Newwindow", "\345\220\214\344\272\213", nullptr));
        friend_Button->setText(QCoreApplication::translate("Newwindow", "\346\234\213\345\217\213", nullptr));
        relative_Button->setText(QCoreApplication::translate("Newwindow", "\344\272\262\346\210\232", nullptr));
        familiar_Button->setText(QCoreApplication::translate("Newwindow", "\347\206\237\344\272\272", nullptr));
        other_Button->setText(QCoreApplication::translate("Newwindow", "\345\205\266\344\273\226", nullptr));
        pushButton->setText(QCoreApplication::translate("Newwindow", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Newwindow", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Newwindow: public Ui_Newwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWINDOW_H
