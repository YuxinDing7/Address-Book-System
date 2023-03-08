/********************************************************************************
** Form generated from reading UI file 'aisearch.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AISEARCH_H
#define UI_AISEARCH_H

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

class Ui_AiSearch
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *AiSearch)
    {
        if (AiSearch->objectName().isEmpty())
            AiSearch->setObjectName(QString::fromUtf8("AiSearch"));
        AiSearch->resize(600, 532);
        tableWidget = new QTableWidget(AiSearch);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(50, 140, 501, 311));
        layoutWidget = new QWidget(AiSearch);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 100, 391, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        searchLineEdit = new QLineEdit(layoutWidget);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));

        horizontalLayout->addWidget(searchLineEdit);

        searchButton = new QPushButton(layoutWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        horizontalLayout->addWidget(searchButton);

        layoutWidget1 = new QWidget(AiSearch);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 20, 451, 71));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        pushButton = new QPushButton(AiSearch);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 470, 80, 31));

        retranslateUi(AiSearch);

        QMetaObject::connectSlotsByName(AiSearch);
    } // setupUi

    void retranslateUi(QWidget *AiSearch)
    {
        AiSearch->setWindowTitle(QCoreApplication::translate("AiSearch", "\347\273\274\345\220\210\346\237\245\350\257\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AiSearch", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AiSearch", "\347\224\265\350\257\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AiSearch", "\345\214\271\351\205\215\344\277\241\346\201\257", nullptr));
        searchButton->setText(QCoreApplication::translate("AiSearch", "\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("AiSearch", "\350\257\267\350\276\223\345\205\245\346\203\263\350\246\201\346\237\245\350\257\242\347\232\204\344\277\241\346\201\257\357\274\214\345\246\202\345\205\254\345\217\270\357\274\214\344\270\223\344\270\232\357\274\214\345\271\264\347\272\247\357\274\214\345\267\245\344\275\234", nullptr));
        label_2->setText(QCoreApplication::translate("AiSearch", "\350\256\244\350\257\206\346\226\271\345\274\217\357\274\214\344\272\262\346\210\232\345\205\263\347\263\273\357\274\214\345\244\207\346\263\250\347\255\211\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("AiSearch", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AiSearch: public Ui_AiSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AISEARCH_H
