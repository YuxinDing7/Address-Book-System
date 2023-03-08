/********************************************************************************
** Form generated from reading UI file 'mainwindowinaddtime.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWINADDTIME_H
#define UI_MAINWINDOWINADDTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowInAddTime
{
public:
    QAction *newAction;
    QAction *deleteAction;
    QAction *nameSAction;
    QAction *birthSAction;
    QAction *aiSAction;
    QAction *alphabetRAction;
    QAction *RbyTypeAction;
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menu_E;
    QMenu *menu_N;
    QMenu *menu_R;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowInAddTime)
    {
        if (MainWindowInAddTime->objectName().isEmpty())
            MainWindowInAddTime->setObjectName(QString::fromUtf8("MainWindowInAddTime"));
        MainWindowInAddTime->resize(450, 730);
        newAction = new QAction(MainWindowInAddTime);
        newAction->setObjectName(QString::fromUtf8("newAction"));
        deleteAction = new QAction(MainWindowInAddTime);
        deleteAction->setObjectName(QString::fromUtf8("deleteAction"));
        nameSAction = new QAction(MainWindowInAddTime);
        nameSAction->setObjectName(QString::fromUtf8("nameSAction"));
        birthSAction = new QAction(MainWindowInAddTime);
        birthSAction->setObjectName(QString::fromUtf8("birthSAction"));
        aiSAction = new QAction(MainWindowInAddTime);
        aiSAction->setObjectName(QString::fromUtf8("aiSAction"));
        alphabetRAction = new QAction(MainWindowInAddTime);
        alphabetRAction->setObjectName(QString::fromUtf8("alphabetRAction"));
        RbyTypeAction = new QAction(MainWindowInAddTime);
        RbyTypeAction->setObjectName(QString::fromUtf8("RbyTypeAction"));
        centralwidget = new QWidget(MainWindowInAddTime);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 451, 691));
        tableWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/tree_background1.png);"));
        MainWindowInAddTime->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowInAddTime);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 21));
        menu_E = new QMenu(menubar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu_N = new QMenu(menubar);
        menu_N->setObjectName(QString::fromUtf8("menu_N"));
        menu_R = new QMenu(menubar);
        menu_R->setObjectName(QString::fromUtf8("menu_R"));
        MainWindowInAddTime->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowInAddTime);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowInAddTime->setStatusBar(statusbar);

        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_N->menuAction());
        menubar->addAction(menu_R->menuAction());
        menu_E->addAction(newAction);
        menu_E->addAction(deleteAction);
        menu_N->addAction(nameSAction);
        menu_N->addAction(birthSAction);
        menu_N->addAction(aiSAction);
        menu_R->addAction(alphabetRAction);
        menu_R->addAction(RbyTypeAction);

        retranslateUi(MainWindowInAddTime);

        QMetaObject::connectSlotsByName(MainWindowInAddTime);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowInAddTime)
    {
        MainWindowInAddTime->setWindowTitle(QCoreApplication::translate("MainWindowInAddTime", "\346\214\211\346\226\260\345\273\272\346\227\266\351\227\264\346\216\222\345\272\217", nullptr));
        newAction->setText(QCoreApplication::translate("MainWindowInAddTime", "\346\226\260\345\273\272(&N)", nullptr));
        deleteAction->setText(QCoreApplication::translate("MainWindowInAddTime", "\345\210\240\351\231\244(&D)", nullptr));
        nameSAction->setText(QCoreApplication::translate("MainWindowInAddTime", "\345\247\223\345\220\215\346\237\245\350\257\242", nullptr));
        birthSAction->setText(QCoreApplication::translate("MainWindowInAddTime", "\347\224\237\346\227\245\346\237\245\350\257\242", nullptr));
        aiSAction->setText(QCoreApplication::translate("MainWindowInAddTime", "\347\273\274\345\220\210\346\237\245\350\257\242", nullptr));
        alphabetRAction->setText(QCoreApplication::translate("MainWindowInAddTime", "\346\214\211\351\246\226\345\255\227\346\257\215\346\216\222\345\272\217", nullptr));
        RbyTypeAction->setText(QCoreApplication::translate("MainWindowInAddTime", "\346\214\211\345\210\206\347\261\273\346\216\222\345\272\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindowInAddTime", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindowInAddTime", "\347\224\265\350\257\235", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindowInAddTime", "\347\274\226\350\276\221(&E)", nullptr));
        menu_N->setTitle(QCoreApplication::translate("MainWindowInAddTime", "\346\237\245\350\257\242(&S)", nullptr));
        menu_R->setTitle(QCoreApplication::translate("MainWindowInAddTime", "\346\216\222\345\272\217(&R)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowInAddTime: public Ui_MainWindowInAddTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWINADDTIME_H
