/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QAction *newAction;
    QAction *deleteAction;
    QAction *modifyAction;
    QAction *nameSAction;
    QAction *birthSAction;
    QAction *aiSAction;
    QAction *alphabetRAction;
    QAction *addTimeRAction;
    QWidget *centralwidget;
    QTreeWidget *treeWidget;
    QMenuBar *menubar;
    QMenu *menu_E;
    QMenu *menu_S;
    QMenu *menu_R;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(450, 730);
        MainWindow->setWindowTitle(QString::fromUtf8("\345\233\236\346\203\263\351\200\232\350\256\257\345\275\225\360\237\216\265"));
        newAction = new QAction(MainWindow);
        newAction->setObjectName(QString::fromUtf8("newAction"));
        deleteAction = new QAction(MainWindow);
        deleteAction->setObjectName(QString::fromUtf8("deleteAction"));
        modifyAction = new QAction(MainWindow);
        modifyAction->setObjectName(QString::fromUtf8("modifyAction"));
        nameSAction = new QAction(MainWindow);
        nameSAction->setObjectName(QString::fromUtf8("nameSAction"));
        birthSAction = new QAction(MainWindow);
        birthSAction->setObjectName(QString::fromUtf8("birthSAction"));
        aiSAction = new QAction(MainWindow);
        aiSAction->setObjectName(QString::fromUtf8("aiSAction"));
        alphabetRAction = new QAction(MainWindow);
        alphabetRAction->setObjectName(QString::fromUtf8("alphabetRAction"));
        addTimeRAction = new QAction(MainWindow);
        addTimeRAction->setObjectName(QString::fromUtf8("addTimeRAction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 450, 681));
        treeWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/tree_background1.png);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 21));
        menu_E = new QMenu(menubar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu_S = new QMenu(menubar);
        menu_S->setObjectName(QString::fromUtf8("menu_S"));
        menu_R = new QMenu(menubar);
        menu_R->setObjectName(QString::fromUtf8("menu_R"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_S->menuAction());
        menubar->addAction(menu_R->menuAction());
        menu_E->addAction(newAction);
        menu_E->addAction(deleteAction);
        menu_S->addAction(nameSAction);
        menu_S->addAction(birthSAction);
        menu_S->addAction(aiSAction);
        menu_R->addAction(alphabetRAction);
        menu_R->addAction(addTimeRAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        newAction->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
        deleteAction->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244(&D)", nullptr));
        modifyAction->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271(&M)", nullptr));
        nameSAction->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215\346\237\245\350\257\242", nullptr));
        birthSAction->setText(QCoreApplication::translate("MainWindow", "\347\224\237\346\227\245\346\237\245\350\257\242", nullptr));
        aiSAction->setText(QCoreApplication::translate("MainWindow", "\347\273\274\345\220\210\346\237\245\350\257\242", nullptr));
        alphabetRAction->setText(QCoreApplication::translate("MainWindow", "\346\214\211\351\246\226\345\255\227\346\257\215\346\216\222\345\272\217", nullptr));
        addTimeRAction->setText(QCoreApplication::translate("MainWindow", "\346\214\211\346\226\260\345\273\272\346\227\266\351\227\264\346\216\222\345\272\217", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\357\274\210&E\357\274\211", nullptr));
        menu_S->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242(&S)", nullptr));
        menu_R->setTitle(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217\357\274\210&R\357\274\211", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
