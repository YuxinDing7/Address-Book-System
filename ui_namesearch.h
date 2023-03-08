/********************************************************************************
** Form generated from reading UI file 'namesearch.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMESEARCH_H
#define UI_NAMESEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NameSearch
{
public:
    QLabel *label;
    QPushButton *backButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *namelineEdit;
    QPushButton *searchButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *NameSearch)
    {
        if (NameSearch->objectName().isEmpty())
            NameSearch->setObjectName(QString::fromUtf8("NameSearch"));
        NameSearch->resize(500, 480);
        label = new QLabel(NameSearch);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 271, 31));
        backButton = new QPushButton(NameSearch);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(220, 430, 80, 31));
        widget = new QWidget(NameSearch);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 70, 381, 341));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        namelineEdit = new QLineEdit(widget);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        horizontalLayout->addWidget(namelineEdit);

        searchButton = new QPushButton(widget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        horizontalLayout->addWidget(searchButton);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(NameSearch);

        QMetaObject::connectSlotsByName(NameSearch);
    } // setupUi

    void retranslateUi(QWidget *NameSearch)
    {
        NameSearch->setWindowTitle(QCoreApplication::translate("NameSearch", "\345\247\223\345\220\215\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("NameSearch", "\350\257\267\350\276\223\345\205\245\346\202\250\350\246\201\346\237\245\350\257\242\347\232\204\345\247\223\345\220\215:", nullptr));
        backButton->setText(QCoreApplication::translate("NameSearch", "\350\277\224\345\233\236", nullptr));
        searchButton->setText(QCoreApplication::translate("NameSearch", "\346\237\245\350\257\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("NameSearch", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("NameSearch", "\347\224\265\350\257\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NameSearch: public Ui_NameSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMESEARCH_H
