#ifndef ENTERWIDGET_H
#define ENTERWIDGET_H

#include <QWidget>
#include <QProcess>
#include <QDir>
#include <QDebug>
#include <QApplication>
#include <iostream>
#include <fstream>
#include <vector>
#include <QMessageBox>
#include <mainwindow.h>
QT_BEGIN_NAMESPACE
namespace Ui { class enterWidget; }
QT_END_NAMESPACE

class enterWidget : public QWidget
{
    Q_OBJECT

public:
    enterWidget(QWidget *parent = nullptr);
    ~enterWidget();

private slots:
    void on_signButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::enterWidget *ui;
};
#endif // ENTERWIDGET_H
