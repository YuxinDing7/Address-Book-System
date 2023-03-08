/********************************************************************************
** Form generated from reading UI file 'enterwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERWIDGET_H
#define UI_ENTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_enterWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameEdit;
    QHBoxLayout *horizontalLayout_2;
    QOpenGLWidget *openGLWidget;
    QLabel *passwordLabel;
    QLineEdit *passwordEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *signButton;
    QPushButton *loginButton;
    QFrame *frame;

    void setupUi(QWidget *enterWidget)
    {
        if (enterWidget->objectName().isEmpty())
            enterWidget->setObjectName(QString::fromUtf8("enterWidget"));
        enterWidget->resize(438, 340);
        enterWidget->setMinimumSize(QSize(438, 340));
        enterWidget->setMaximumSize(QSize(438, 340));
        enterWidget->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(enterWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 180, 221, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        usernameLabel = new QLabel(layoutWidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        horizontalLayout->addWidget(usernameLabel);

        usernameEdit = new QLineEdit(layoutWidget);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setAutoFillBackground(false);

        horizontalLayout->addWidget(usernameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        openGLWidget = new QOpenGLWidget(layoutWidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));

        horizontalLayout_2->addWidget(openGLWidget);

        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        horizontalLayout_2->addWidget(passwordLabel);

        passwordEdit = new QLineEdit(layoutWidget);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setMaxLength(32765);

        horizontalLayout_2->addWidget(passwordEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        signButton = new QPushButton(layoutWidget);
        signButton->setObjectName(QString::fromUtf8("signButton"));

        horizontalLayout_3->addWidget(signButton);

        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        horizontalLayout_3->addWidget(loginButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        frame = new QFrame(enterWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, -20, 438, 441));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/background_image.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        layoutWidget->raise();

        retranslateUi(enterWidget);

        loginButton->setDefault(true);


        QMetaObject::connectSlotsByName(enterWidget);
    } // setupUi

    void retranslateUi(QWidget *enterWidget)
    {
        enterWidget->setWindowTitle(QCoreApplication::translate("enterWidget", "\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
#if QT_CONFIG(whatsthis)
        enterWidget->setWhatsThis(QCoreApplication::translate("enterWidget", "<html><head/><body><p>\347\231\273\345\275\225\347\252\227\345\217\243</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        usernameLabel->setText(QCoreApplication::translate("enterWidget", "<html><head/><body><p align=\"right\"><span style=\" color:#ffffff;\">\347\224\250\346\210\267\345\220\215</span></p></body></html>", nullptr));
        passwordLabel->setText(QCoreApplication::translate("enterWidget", "<html><head/><body><p align=\"right\"><span style=\" color:#ffffff;\">\345\257\206 \347\240\201</span></p></body></html>", nullptr));
        signButton->setText(QCoreApplication::translate("enterWidget", "\346\263\250\345\206\214", nullptr));
        loginButton->setText(QCoreApplication::translate("enterWidget", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class enterWidget: public Ui_enterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERWIDGET_H
