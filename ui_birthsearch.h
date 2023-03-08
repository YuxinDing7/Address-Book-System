/********************************************************************************
** Form generated from reading UI file 'birthsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIRTHSEARCH_H
#define UI_BIRTHSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BirthSearch
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *quitButton;

    void setupUi(QWidget *BirthSearch)
    {
        if (BirthSearch->objectName().isEmpty())
            BirthSearch->setObjectName(QString::fromUtf8("BirthSearch"));
        BirthSearch->resize(670, 420);
        label = new QLabel(BirthSearch);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 291, 16));
        tableWidget = new QTableWidget(BirthSearch);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(50, 60, 560, 280));
        quitButton = new QPushButton(BirthSearch);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(290, 360, 91, 31));

        retranslateUi(BirthSearch);

        QMetaObject::connectSlotsByName(BirthSearch);
    } // setupUi

    void retranslateUi(QWidget *BirthSearch)
    {
        BirthSearch->setWindowTitle(QCoreApplication::translate("BirthSearch", "\347\224\237\346\227\245\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("BirthSearch", "\344\270\272\346\202\250\346\237\245\350\257\242\345\210\260\347\232\204\350\277\221\346\234\237\347\224\237\346\227\245\344\272\272\347\276\244\357\274\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BirthSearch", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BirthSearch", "\347\224\265\350\257\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("BirthSearch", "\347\224\237\346\227\245", nullptr));
        quitButton->setText(QCoreApplication::translate("BirthSearch", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BirthSearch: public Ui_BirthSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIRTHSEARCH_H
