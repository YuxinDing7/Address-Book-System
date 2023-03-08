#ifndef MAINWINDOWINALPHABET_H
#define MAINWINDOWINALPHABET_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class MainWindowInAlphabet;
}

class MainWindowInAlphabet : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowInAlphabet(QString username, QWidget *parent = nullptr);
    ~MainWindowInAlphabet();

private:
    Ui::MainWindowInAlphabet *ui;
    QString username;
    QMap<QString, QString> nameType;

private slots:
    void newActionSlot();
    void deleteActionSlot();
    void slotDoubleClicked(QTreeWidgetItem*,int);
    void nameSActionSlot();
    void birthSActionSlot();
    void rbyTypeActionSlot();
    void aiSActionSlot();
    void addTimeRActionSlot();
};

#endif // MAINWINDOWINALPHABET_H
