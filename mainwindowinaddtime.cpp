#include "mainwindowinaddtime.h"
#include "ui_mainwindowinaddtime.h"
#include "newwindow.h"
#include "account.h"
#include "classmatemodify.h"
#include "colleaguemodify.h"
#include "friendmodify.h"
#include "relativemodify.h"
#include "elsemodify.h"
#include "namesearch.h"
#include "birthsearch.h"
#include "aisearch.h"
#include "mainwindowinalphabet.h"
#include <QTableWidget>
#include "familiarmodify.h"
MainWindowInAddTime::MainWindowInAddTime(QString username, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowInAddTime)
{
    ui->setupUi(this);
    this->username = username;
    ui->tableWidget->setRowCount(350);
    ui->tableWidget->setColumnWidth(0, 125);
    ui->tableWidget->setColumnWidth(1, 325);

    //获取文件地址
    QDir file = QDir(QDir::currentPath());
    file.cdUp();
    QString filePath = file.path();
    filePath.append("/userFiles/" + username + "File.txt");

    QStringList lines;
    QFile user_file(filePath);
    user_file.open(QIODevice::ReadOnly);
    int i = 0;
    while(!user_file.atEnd())
    {
        QByteArray line = user_file.readLine();
        QString user_line(line);
        QString type = user_line.section(',', 0, 0);
        QString name = user_line.section(',', 1, 1);
        QString phone_number = user_line.section(',', 2, 2);
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(name));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(phone_number));
        i++;
    }
    user_file.close();

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    connect(ui->newAction, &QAction::triggered, this, &MainWindowInAddTime::newActionSlot);
    connect(ui->deleteAction, &QAction::triggered, this, &MainWindowInAddTime::deleteActionSlot);
    connect(ui->nameSAction, &QAction::triggered, this, &MainWindowInAddTime::nameSActionSlot);
    connect(ui->birthSAction, &QAction::triggered, this, &MainWindowInAddTime::birthSActionSlot);
    connect(ui->alphabetRAction, &QAction::triggered, this, &MainWindowInAddTime::alphabetRActionSlot);
    connect(ui->aiSAction, &QAction::triggered, this, &MainWindowInAddTime::aiSActionSlot);
    connect(ui->RbyTypeAction, &QAction::triggered, this, &MainWindowInAddTime::rbyTypeActionSlot);
    connect(ui->tableWidget, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(slotcellDoubleClicked(int,int)));
}

MainWindowInAddTime::~MainWindowInAddTime()
{
    delete ui;
}

//新建操作槽函数
void MainWindowInAddTime::newActionSlot()
{
    Newwindow *nw = new Newwindow(username, "MainWindowInAddTime");
    nw->show();
    delete this;
}

//删除操作槽函数
void MainWindowInAddTime::deleteActionSlot()
{
    //QTreeWidget* tree = ui->treeWidget;
    //QList<QTreeWidgetItem*> selectedItem = tree->selectedItems();
    QTableWidget* table = ui->tableWidget;
    QList<QTableWidgetItem*> selectedItem = table->selectedItems();
    Account account(username);
    QString deleteName = selectedItem[0]->text();
    //qDebug()<<deleteName;
    account.deleteContact(deleteName);
    MainWindowInAddTime* MWIAT = new MainWindowInAddTime(username);
    MWIAT->show();
    delete this;
}

//姓名查询槽函数
void MainWindowInAddTime::nameSActionSlot()
{
    NameSearch* NSW = new NameSearch(username);
    NSW->show();
    delete this;
}

//生日查询槽函数
void MainWindowInAddTime::birthSActionSlot()
{
    BirthSearch* BSW = new BirthSearch(username);
    BSW->show();
    delete this;
}

//智能查询槽函数
void MainWindowInAddTime::aiSActionSlot()
{
    AiSearch* ASW = new AiSearch(username);
    ASW->show();
    delete this;
}

//按首字母排序槽函数
void MainWindowInAddTime::alphabetRActionSlot()
{
    MainWindowInAlphabet* MWIA = new MainWindowInAlphabet(username);
    MWIA->show();
    delete this;
}

//按分类排序槽函数
void MainWindowInAddTime::rbyTypeActionSlot()
{
    MainWindow* MW = new MainWindow(username);
    MW->show();
    delete this;
}

void MainWindowInAddTime::slotcellDoubleClicked(int row,int column)
{
    if(column == 0)
    {
        QString name = ui->tableWidget->item(row, column)->text();

        QDir file = QDir(QDir::currentPath());
        file.cdUp();
        QString filePath = file.path();
        QString user_file_path = file.path() + "/userFiles/" + username + "File.txt";
        QFile user_file(user_file_path);
        user_file.open(QIODevice::ReadOnly);

        QString contactName = "";
        QString contact_line ="";
        while(!user_file.atEnd())
        {
            QByteArray line = user_file.readLine();
            contact_line = QString(line);
            contactName = contact_line.section(',', 1, 1);
            if(contactName == name)
            {
                break;
            }
        }
        QString class_type = contact_line.section(',', 0, 0);

        if(class_type == "Classmate")
        {
            ClassmateModify *CMW = new ClassmateModify(username, name, "MainWindowInAddTime");
            CMW->show();
            delete this;
        }
        else if(class_type == "Colleague")
        {
            ColleagueModify *COMW = new ColleagueModify(username, name, "MainWindowInAddTime");
            COMW->show();
            delete this;
        }
        else if(class_type == "Friend")
        {
            FriendModify *FMW = new FriendModify(username, name, "MainWindowInAddTime");
            FMW->show();
            delete this;
         }
        else if(class_type == "Relative")
        {
            RelativeModify *RMW = new RelativeModify(username, name, "MainWindowInAddTime");
            RMW->show();
            delete this;
         }
        else if(class_type == "Familiar")
        {
            FamiliarModify *FMW = new FamiliarModify(username, name, "MainWindowInAddTime");
            FMW->show();
            delete this;
         }
        else if(class_type == "Else")
        {
            ElseModify *EMW = new ElseModify(username, name, "MainWindowInAddTime");
            EMW->show();
            delete this;
        }
    }
}
