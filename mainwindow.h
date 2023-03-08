#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidgetItem>
#include <QWidget>
#include <QDialog>
#include <QStringList>
#include <QTreeWidget>
#include <QStringList>
#include <QAction>
#include <QObject>
#include <QDir>
#include <QtDebug>
#include <QFile>
#include <QVector>
#include <QMessageBox>
#include <QDate>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

friend void addNode(MainWindow&, QString type, QString name, QString phone);

public:
    explicit MainWindow(QString username, QWidget *parent = nullptr);
    ~MainWindow();
    void addNode(QString type, QString name, QString phone);
private:
    Ui::MainWindow *ui;
    QString username;

private slots:
    void newActionSlot();
    void deleteActionSlot();
    void slotDoubleClicked(QTreeWidgetItem*,int);
    void nameSActionSlot();
    void birthSActionSlot();
    void alphabetRActionSlot();
    void aiSActionSlot();
    void addTimeRActionSlot();
};
#endif // MAINWINDOW_H
