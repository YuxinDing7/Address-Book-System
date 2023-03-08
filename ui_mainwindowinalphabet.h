/********************************************************************************
** Form generated from reading UI file 'mainwindowinalphabet.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWINALPHABET_H
#define UI_MAINWINDOWINALPHABET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowInAlphabet
{
public:
    QAction *newAction;
    QAction *deleteAction;
    QAction *nameSAction;
    QAction *birthSAction;
    QAction *aiSAction;
    QAction *RbyTypeAction;
    QAction *addTimeRAction;
    QWidget *centralwidget;
    QTreeWidget *treeWidget;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu_E;
    QMenu *menu_N;
    QMenu *menu_R;

    void setupUi(QMainWindow *MainWindowInAlphabet)
    {
        if (MainWindowInAlphabet->objectName().isEmpty())
            MainWindowInAlphabet->setObjectName(QString::fromUtf8("MainWindowInAlphabet"));
        MainWindowInAlphabet->resize(450, 730);
        MainWindowInAlphabet->setStyleSheet(QString::fromUtf8(""));
        newAction = new QAction(MainWindowInAlphabet);
        newAction->setObjectName(QString::fromUtf8("newAction"));
        deleteAction = new QAction(MainWindowInAlphabet);
        deleteAction->setObjectName(QString::fromUtf8("deleteAction"));
        nameSAction = new QAction(MainWindowInAlphabet);
        nameSAction->setObjectName(QString::fromUtf8("nameSAction"));
        birthSAction = new QAction(MainWindowInAlphabet);
        birthSAction->setObjectName(QString::fromUtf8("birthSAction"));
        aiSAction = new QAction(MainWindowInAlphabet);
        aiSAction->setObjectName(QString::fromUtf8("aiSAction"));
        RbyTypeAction = new QAction(MainWindowInAlphabet);
        RbyTypeAction->setObjectName(QString::fromUtf8("RbyTypeAction"));
        addTimeRAction = new QAction(MainWindowInAlphabet);
        addTimeRAction->setObjectName(QString::fromUtf8("addTimeRAction"));
        centralwidget = new QWidget(MainWindowInAlphabet);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        treeWidget = new QTreeWidget(centralwidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 451, 681));
        treeWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/tree_background1.png);"));
        MainWindowInAlphabet->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindowInAlphabet);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowInAlphabet->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindowInAlphabet);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 21));
        menu_E = new QMenu(menubar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu_N = new QMenu(menubar);
        menu_N->setObjectName(QString::fromUtf8("menu_N"));
        menu_R = new QMenu(menubar);
        menu_R->setObjectName(QString::fromUtf8("menu_R"));
        MainWindowInAlphabet->setMenuBar(menubar);

        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_N->menuAction());
        menubar->addAction(menu_R->menuAction());
        menu_E->addAction(newAction);
        menu_E->addAction(deleteAction);
        menu_N->addAction(nameSAction);
        menu_N->addAction(birthSAction);
        menu_N->addAction(aiSAction);
        menu_R->addAction(RbyTypeAction);
        menu_R->addAction(addTimeRAction);

        retranslateUi(MainWindowInAlphabet);

        QMetaObject::connectSlotsByName(MainWindowInAlphabet);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowInAlphabet)
    {
        MainWindowInAlphabet->setWindowTitle(QCoreApplication::translate("MainWindowInAlphabet", "\345\233\236\346\203\263\351\200\232\350\256\257\345\275\225\360\237\216\265", nullptr));
        newAction->setText(QCoreApplication::translate("MainWindowInAlphabet", "\346\226\260\345\273\272(&N)", nullptr));
        deleteAction->setText(QCoreApplication::translate("MainWindowInAlphabet", "\345\210\240\351\231\244(&D)", nullptr));
        nameSAction->setText(QCoreApplication::translate("MainWindowInAlphabet", "\345\247\223\345\220\215\346\237\245\350\257\242", nullptr));
        birthSAction->setText(QCoreApplication::translate("MainWindowInAlphabet", "\347\224\237\346\227\245\346\237\245\350\257\242", nullptr));
        aiSAction->setText(QCoreApplication::translate("MainWindowInAlphabet", "\347\273\274\345\220\210\346\237\245\350\257\242", nullptr));
        RbyTypeAction->setText(QCoreApplication::translate("MainWindowInAlphabet", "\346\214\211\345\210\206\347\261\273\346\237\245\350\257\242", nullptr));
        addTimeRAction->setText(QCoreApplication::translate("MainWindowInAlphabet", "\346\214\211\346\226\260\345\273\272\346\227\266\351\227\264\346\216\222\345\272\217", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindowInAlphabet", "\347\224\265\350\257\235", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindowInAlphabet", "\345\247\223\345\220\215", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindowInAlphabet", "\347\274\226\350\276\221(&E)", nullptr));
        menu_N->setTitle(QCoreApplication::translate("MainWindowInAlphabet", "\346\237\245\350\257\242(&S)", nullptr));
        menu_R->setTitle(QCoreApplication::translate("MainWindowInAlphabet", "\346\216\222\345\272\217(&R)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowInAlphabet: public Ui_MainWindowInAlphabet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWINALPHABET_H
