#ifndef MAINWINDOWINADDTIME_H
#define MAINWINDOWINADDTIME_H

#include <QMainWindow>
#include "mainwindow.h"
#include <QTableWidgetItem>
namespace Ui {
class MainWindowInAddTime;
}

class MainWindowInAddTime : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowInAddTime(QString username, QWidget *parent = nullptr);
    ~MainWindowInAddTime();

private:
    Ui::MainWindowInAddTime *ui;
    QString username;

private slots:
    void newActionSlot();
    void deleteActionSlot();
    void nameSActionSlot();
    void birthSActionSlot();
    void alphabetRActionSlot();
    void aiSActionSlot();
    void rbyTypeActionSlot();
    void slotcellDoubleClicked(int,int);
};

#endif // MAINWINDOWINADDTIME_H
