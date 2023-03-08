#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newwindow.h"
#include "account.h"
#include "classmatemodify.h"
#include "colleaguemodify.h"
#include "friendmodify.h"
#include "relativemodify.h"
#include "elsemodify.h"
#include "namesearch.h"
#include "birthsearch.h"
#include "mainwindowinalphabet.h"
#include "aisearch.h"
#include "smtp.h"
#include "mainwindowinaddtime.h"
#include "familiarinfo_write.h"
#include "familiarmodify.h"
MainWindow::MainWindow(QString username, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->username = username;
    ui->setupUi(this);

    ui->treeWidget->setHeaderLabels(QStringList()<<"联系人" << "电话");

    //添加各种联系人类别作为根节点
    QTreeWidgetItem *classmatesItem = new QTreeWidgetItem(QStringList() << "同学");
    QTreeWidgetItem *colleagueItem = new QTreeWidgetItem(QStringList() << "同事");
    QTreeWidgetItem *friendItem = new QTreeWidgetItem(QStringList() << "朋友");
    QTreeWidgetItem *relativeItem = new QTreeWidgetItem(QStringList() << "亲戚");
    QTreeWidgetItem *familiarItem = new QTreeWidgetItem(QStringList() << "熟人");
    QTreeWidgetItem *elseItem = new QTreeWidgetItem(QStringList() << "其他");

    ui->treeWidget->addTopLevelItem(classmatesItem);
    ui->treeWidget->addTopLevelItem(colleagueItem);
    ui->treeWidget->addTopLevelItem(friendItem);
    ui->treeWidget->addTopLevelItem(relativeItem);
    ui->treeWidget->addTopLevelItem(familiarItem);
    ui->treeWidget->addTopLevelItem(elseItem);

    //获取文件地址
    QDir file = QDir(QDir::currentPath());
    file.cdUp();
    QString filePath = file.path();
    filePath.append("/userFiles/" + username + "File.txt");

    QString todayfilePath = file.path();
    todayfilePath = todayfilePath.append("/userFiles/today.txt");
    QFile todayfile(todayfilePath);
    todayfile.open(QIODevice::ReadOnly);
    QByteArray todayline = todayfile.readLine();
    todayfile.close();
    QString today(todayline);
    int Y = today.section('-', 0, 0).toInt();
    int M = today.section('-', 1, 1).toInt();
    int D = today.section('-', 2, 2).toInt();
    QDate fileDate = QDate(Y, M, D);
    //qDebug()<<fileDate;
    QDate current_date = QDate::currentDate();

    bool havesent = false;
    //qDebug()<<fileDate<<current_date;
    if(fileDate == current_date)
    {
        havesent = true;
    }

    QFile user_file(filePath);
    user_file.open(QIODevice::ReadOnly);

    while(!user_file.atEnd())
    {
        QByteArray line = user_file.readLine();
        QString user_line(line);
        QString type = user_line.section(',', 0, 0);
        QString name = user_line.section(',', 1, 1);
        QString phone_number = user_line.section(',', 2, 2);
        QString his_mail = user_line.section(',', 3, 3);
        QString birthday = user_line.section(',', 4, 4);
        QString sendBirth = user_line.section(',', 5, 5);

        QDate tomorrow = current_date.addDays(1);
        int Y = tomorrow.year();
        int M = birthday.section('-', 1, 1).toInt();
        int D = birthday.section('-', 2, 2).toInt();
        QDate birthdate = QDate(Y, M, D);

        if(birthdate == tomorrow && havesent == false && sendBirth == "1")
        {
            Smtp mail;
            QString content = "亲爱的" + name + "女士/先生，" +username + "通过回想通讯录，预祝您生日快乐！";
            mail.SendData(his_mail.toUtf8(), "庆生", content.toUtf8());
            havesent = true;
        }
        if(type == "Classmate")
        {
            classmatesItem->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "Colleague")
        {
            colleagueItem->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "Friend")
        {
            friendItem->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "Relative")
        {
            relativeItem->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "Familiar")
        {
            familiarItem->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else
        {
            elseItem->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }

    }

    todayfile.open(QIODevice::WriteOnly);
    QTextStream in(&todayfile);
    QString temp = current_date.toString("yyyy-MM-dd");
    //qDebug()<<temp;
    in<<temp;
    todayfile.close();

    user_file.close();

    classmatesItem->setExpanded(true);
    colleagueItem->setExpanded(true);
    friendItem->setExpanded(true);
    relativeItem->setExpanded(true);
    familiarItem->setExpanded(true);
    elseItem->setExpanded(true);

    connect(ui->newAction, &QAction::triggered, this, &MainWindow::newActionSlot);
    connect(ui->deleteAction, &QAction::triggered, this, &MainWindow::deleteActionSlot);
    connect(ui->nameSAction, &QAction::triggered, this, &MainWindow::nameSActionSlot);
    connect(ui->treeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), this, SLOT(slotDoubleClicked(QTreeWidgetItem*,int)));
    connect(ui->birthSAction, &QAction::triggered, this, &MainWindow::birthSActionSlot);
    connect(ui->alphabetRAction, &QAction::triggered, this, &MainWindow::alphabetRActionSlot);
    connect(ui->aiSAction, &QAction::triggered, this, &MainWindow::aiSActionSlot);
    connect(ui->addTimeRAction, &QAction::triggered, this, &MainWindow::addTimeRActionSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//新建操作槽函数
void MainWindow::newActionSlot()
{
    Newwindow *nw = new Newwindow(username, "MainWindow");
    nw->show();
    delete this;
}

//删除操作槽函数
void MainWindow::deleteActionSlot()
{
    QTreeWidget* tree = ui->treeWidget;
    QList<QTreeWidgetItem*> selectedItem = tree->selectedItems();
    Account account(username);
    QString deleteName = selectedItem[0]->text(0);
    //qDebug()<<deleteName;
    account.deleteContact(deleteName);
    delete selectedItem[0];
}


void MainWindow::slotDoubleClicked(QTreeWidgetItem*,int)
{
    QTreeWidget* tree = ui->treeWidget;
    QList<QTreeWidgetItem*> selectedItem = tree->selectedItems();
    QString modifyname = selectedItem[0] -> text(0);
    QTreeWidgetItem * parent_item = selectedItem[0]->parent();
    QString class_type = parent_item->text(0);
    //qDebug()<<class_type;
    if(class_type == "同学")
    {
        ClassmateModify *CMW = new ClassmateModify(username, modifyname, "MainWindow");
        CMW->show();
        delete this;
    }
    else if(class_type == "同事")
    {
        ColleagueModify *COMW = new ColleagueModify(username, modifyname, "MainWindow");
        COMW->show();
        delete this;
    }
    else if(class_type == "朋友")
    {
        FriendModify *FMW = new FriendModify(username, modifyname, "MainWindow");
        FMW->show();
        delete this;
     }
    else if(class_type == "亲戚")
    {
        RelativeModify *RMW = new RelativeModify(username, modifyname, "MainWindow");
        RMW->show();
        delete this;
     }
    else if(class_type == "熟人")
    {
        FamiliarModify *FMW = new FamiliarModify(username, modifyname, "MainWindow");
        FMW->show();
        delete this;
     }
    else if(class_type == "其他")
    {
        ElseModify *EMW = new ElseModify(username, modifyname, "MainWindow");
        EMW->show();
        delete this;
     }
}

//姓名查询槽函数
void MainWindow::nameSActionSlot()
{
    NameSearch* NSW = new NameSearch(username);
    NSW->show();
    delete this;
}

//生日查询槽函数
void MainWindow::birthSActionSlot()
{
    BirthSearch* BSW = new BirthSearch(username);
    BSW->show();
    delete this;
}

//智能查询槽函数
void MainWindow::aiSActionSlot()
{
    AiSearch* ASW = new AiSearch(username);
    ASW->show();
    delete this;
}

//按首字母排序槽函数
void MainWindow::alphabetRActionSlot()
{
    MainWindowInAlphabet* MWIA = new MainWindowInAlphabet(username);
    MWIA->show();
    delete this;
}

//按新建顺序排序
void MainWindow::addTimeRActionSlot()
{
    MainWindowInAddTime* MWIAT = new MainWindowInAddTime(username);
    MWIAT->show();
    delete this;
}

