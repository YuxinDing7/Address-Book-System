/********************************************************************************
** Form generated from reading UI file 'alphabetrange.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALPHABETRANGE_H
#define UI_ALPHABETRANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlphabetRange
{
public:
    QTreeWidget *treeWidget;

    void setupUi(QWidget *AlphabetRange)
    {
        if (AlphabetRange->objectName().isEmpty())
            AlphabetRange->setObjectName(QString::fromUtf8("AlphabetRange"));
        AlphabetRange->resize(450, 730);
        AlphabetRange->setStyleSheet(QString::fromUtf8("background-image: url(:/tree_background.png);"));
        treeWidget = new QTreeWidget(AlphabetRange);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 451, 731));

        retranslateUi(AlphabetRange);

        QMetaObject::connectSlotsByName(AlphabetRange);
    } // setupUi

    void retranslateUi(QWidget *AlphabetRange)
    {
        AlphabetRange->setWindowTitle(QCoreApplication::translate("AlphabetRange", "\346\214\211\351\246\226\345\255\227\346\257\215\346\216\222\345\272\217", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("AlphabetRange", "\347\224\265\350\257\235", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("AlphabetRange", "\345\247\223\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlphabetRange: public Ui_AlphabetRange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALPHABETRANGE_H
