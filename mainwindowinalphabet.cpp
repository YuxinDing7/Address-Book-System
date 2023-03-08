#include "mainwindowinalphabet.h"
#include "ui_mainwindowinalphabet.h"
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
#include "mainwindowinaddtime.h"
#include "familiarmodify.h"
MainWindowInAlphabet::MainWindowInAlphabet(QString username, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowInAlphabet)
{
    ui->setupUi(this);
    this->username = username;

    QTreeWidgetItem *ItemA = new QTreeWidgetItem(QStringList() << "A");
    QTreeWidgetItem *ItemB = new QTreeWidgetItem(QStringList() << "B");
    QTreeWidgetItem *ItemC = new QTreeWidgetItem(QStringList() << "C");
    QTreeWidgetItem *ItemD = new QTreeWidgetItem(QStringList() << "D");
    QTreeWidgetItem *ItemE = new QTreeWidgetItem(QStringList() << "E");
    QTreeWidgetItem *ItemF = new QTreeWidgetItem(QStringList() << "F");
    QTreeWidgetItem *ItemG = new QTreeWidgetItem(QStringList() << "G");
    QTreeWidgetItem *ItemH = new QTreeWidgetItem(QStringList() << "H");
    QTreeWidgetItem *ItemI = new QTreeWidgetItem(QStringList() << "I");
    QTreeWidgetItem *ItemJ = new QTreeWidgetItem(QStringList() << "J");
    QTreeWidgetItem *ItemK = new QTreeWidgetItem(QStringList() << "K");
    QTreeWidgetItem *ItemL = new QTreeWidgetItem(QStringList() << "L");
    QTreeWidgetItem *ItemM = new QTreeWidgetItem(QStringList() << "M");
    QTreeWidgetItem *ItemN = new QTreeWidgetItem(QStringList() << "N");
    QTreeWidgetItem *ItemO = new QTreeWidgetItem(QStringList() << "O");
    QTreeWidgetItem *ItemP = new QTreeWidgetItem(QStringList() << "P");
    QTreeWidgetItem *ItemQ = new QTreeWidgetItem(QStringList() << "Q");
    QTreeWidgetItem *ItemR = new QTreeWidgetItem(QStringList() << "R");
    QTreeWidgetItem *ItemS = new QTreeWidgetItem(QStringList() << "S");
    QTreeWidgetItem *ItemT = new QTreeWidgetItem(QStringList() << "T");
    QTreeWidgetItem *ItemU = new QTreeWidgetItem(QStringList() << "U");
    QTreeWidgetItem *ItemV = new QTreeWidgetItem(QStringList() << "V");
    QTreeWidgetItem *ItemW = new QTreeWidgetItem(QStringList() << "W");
    QTreeWidgetItem *ItemX = new QTreeWidgetItem(QStringList() << "X");
    QTreeWidgetItem *ItemY = new QTreeWidgetItem(QStringList() << "Y");
    QTreeWidgetItem *ItemZ = new QTreeWidgetItem(QStringList() << "Z");
    ui->treeWidget->addTopLevelItem(ItemA);
    ui->treeWidget->addTopLevelItem(ItemB);
    ui->treeWidget->addTopLevelItem(ItemC);
    ui->treeWidget->addTopLevelItem(ItemD);
    ui->treeWidget->addTopLevelItem(ItemE);
    ui->treeWidget->addTopLevelItem(ItemF);
    ui->treeWidget->addTopLevelItem(ItemG);
    ui->treeWidget->addTopLevelItem(ItemH);
    ui->treeWidget->addTopLevelItem(ItemI);
    ui->treeWidget->addTopLevelItem(ItemJ);
    ui->treeWidget->addTopLevelItem(ItemK);
    ui->treeWidget->addTopLevelItem(ItemL);
    ui->treeWidget->addTopLevelItem(ItemM);
    ui->treeWidget->addTopLevelItem(ItemN);
    ui->treeWidget->addTopLevelItem(ItemO);
    ui->treeWidget->addTopLevelItem(ItemP);
    ui->treeWidget->addTopLevelItem(ItemQ);
    ui->treeWidget->addTopLevelItem(ItemR);
    ui->treeWidget->addTopLevelItem(ItemS);
    ui->treeWidget->addTopLevelItem(ItemT);
    ui->treeWidget->addTopLevelItem(ItemU);
    ui->treeWidget->addTopLevelItem(ItemV);
    ui->treeWidget->addTopLevelItem(ItemW);
    ui->treeWidget->addTopLevelItem(ItemX);
    ui->treeWidget->addTopLevelItem(ItemY);
    ui->treeWidget->addTopLevelItem(ItemZ);

    //获取文件地址
    QDir file = QDir(QDir::currentPath());
    file.cdUp();
    QString filePath = file.path();
    filePath.append("/userFiles/alphabet.txt");

    QFile alphabet_file(filePath);
    alphabet_file.open(QIODevice::ReadOnly);

    QMap<QString, QString> dict;
    while(!alphabet_file.atEnd())
    {
        QByteArray line = alphabet_file.readLine();
        QString letter_line = QString(line);
        QString letter = letter_line.section(',', 0, 0);
        for(int i = 0; i < (letter_line.size()+1)/2 - 1; i++ )
        {
            QString character = letter_line.section(',', i, i);
            character.remove('\r');
            character.remove("\n");
            dict[character] = letter;
            //qDebug()<<character<<dict[character]<<"字典";
        }
    }

    alphabet_file.close();

    //获取文件地址
    file = QDir(QDir::currentPath());
    file.cdUp();
    filePath = file.path();
    filePath.append("/userFiles/" + username + "File.txt");

    QStringList lines;
    QFile user_file(filePath);
    user_file.open(QIODevice::ReadOnly);

    while(!user_file.atEnd())
    {
        QByteArray line = user_file.readLine();
        QString user_line(line);
        QString name = user_line.section(',', 1, 1);
        QString class_type = user_line.section(',', 0, 0);
        nameType[name] = class_type;
        QString character = name.mid(0, 1);
        QString phone_number = user_line.section(',', 2, 2);
        QString type = dict[character];
        //qDebug()<<type;
        if(type == "A")
        {
            ItemA->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "B")
        {
            ItemB->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "C")
        {
        ItemC->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "D")
        {
        ItemD->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "E")
        {
        ItemE->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "F")
        {
        ItemF->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "G")
        {
        ItemG->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "H")
        {
        ItemH->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "I")
        {
        ItemI->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "J")
        {
        ItemJ->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "K")
        {
        ItemK->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "L")
        {
        ItemL->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "M")
        {
        ItemM->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "N")
        {
        ItemN->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "O")
        {
        ItemO->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "P")
        {
        ItemP->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "Q")
        {
        ItemQ->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "R")
        {
        ItemR->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "S")
        {
        ItemS->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "T")
        {
        ItemT->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "U")
        {
        ItemU->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "V")
        {
        ItemV->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "W")
        {
        ItemW->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "X")
        {
        ItemX->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "Y")
        {
        ItemY->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
        else if(type == "Z")
        {
        ItemZ->addChild(new QTreeWidgetItem(QStringList() << name << phone_number));
        }
    }
    ItemA->setExpanded(true);
    ItemB->setExpanded(true);
    ItemC->setExpanded(true);
    ItemD->setExpanded(true);
    ItemE->setExpanded(true);
    ItemF->setExpanded(true);
    ItemG->setExpanded(true);
    ItemH->setExpanded(true);
    ItemI->setExpanded(true);
    ItemJ->setExpanded(true);
    ItemK->setExpanded(true);
    ItemL->setExpanded(true);
    ItemM->setExpanded(true);
    ItemN->setExpanded(true);
    ItemO->setExpanded(true);
    ItemP->setExpanded(true);
    ItemQ->setExpanded(true);
    ItemR->setExpanded(true);
    ItemS->setExpanded(true);
    ItemT->setExpanded(true);
    ItemU->setExpanded(true);
    ItemV->setExpanded(true);
    ItemW->setExpanded(true);
    ItemX->setExpanded(true);
    ItemY->setExpanded(true);
    ItemZ->setExpanded(true);
    user_file.close();

    connect(ui->newAction, &QAction::triggered, this, &MainWindowInAlphabet::newActionSlot);
    connect(ui->deleteAction, &QAction::triggered, this, &MainWindowInAlphabet::deleteActionSlot);
    connect(ui->nameSAction, &QAction::triggered, this, &MainWindowInAlphabet::nameSActionSlot);
    connect(ui->treeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), this, SLOT(slotDoubleClicked(QTreeWidgetItem*,int)));
    connect(ui->birthSAction, &QAction::triggered, this, &MainWindowInAlphabet::birthSActionSlot);
    connect(ui->RbyTypeAction, &QAction::triggered, this, &MainWindowInAlphabet::rbyTypeActionSlot);
    connect(ui->aiSAction, &QAction::triggered, this, &MainWindowInAlphabet::aiSActionSlot);
    connect(ui->addTimeRAction, &QAction::triggered, this, &MainWindowInAlphabet::addTimeRActionSlot);
}

MainWindowInAlphabet::~MainWindowInAlphabet()
{
    delete ui;
}

//新建操作槽函数
void MainWindowInAlphabet::newActionSlot()
{
    Newwindow *nw = new Newwindow(username, "MainWindowInAlphabet");
    nw->show();
    delete this;
}

//删除操作槽函数
void MainWindowInAlphabet::deleteActionSlot()
{
    QTreeWidget* tree = ui->treeWidget;
    QList<QTreeWidgetItem*> selectedItem = tree->selectedItems();
    Account account(username);
    QString deleteName = selectedItem[0]->text(0);
    //qDebug()<<deleteName;
    account.deleteContact(deleteName);
    delete selectedItem[0];
}

//双击人名槽函数
void MainWindowInAlphabet::slotDoubleClicked(QTreeWidgetItem*,int)
{
    QTreeWidget* tree = ui->treeWidget;
    QList<QTreeWidgetItem*> selectedItem = tree->selectedItems();
    QString name = selectedItem[0] -> text(0);
    QString class_type = nameType[name];

    //qDebug()<<class_type;
    if(class_type == "Classmate")
    {
        ClassmateModify *CMW = new ClassmateModify(username, name, "MainWindowInAlphabet");
        CMW->show();
        delete this;
    }
    else if(class_type == "Colleague")
    {
        ColleagueModify *COMW = new ColleagueModify(username, name, "MainWindowInAlphabet");
        COMW->show();
        delete this;
    }
    else if(class_type == "Friend")
    {
        FriendModify *FMW = new FriendModify(username, name, "MainWindowInAlphabet");
        FMW->show();
        delete this;
     }
    else if(class_type == "Relative")
    {
        RelativeModify *RMW = new RelativeModify(username, name, "MainWindowInAlphabet");
        RMW->show();
        delete this;
     }
    else if(class_type == "Familiar")
    {
        FamiliarModify *FMW = new FamiliarModify(username, name, "MainWindowInAlphabet");
        FMW->show();
        delete this;
     }
    else if(class_type == "Else")
    {
        ElseModify *EMW = new ElseModify(username, name, "MainWindowInAlphabet");
        EMW->show();
        delete this;
    }
}

//姓名查询槽函数
void MainWindowInAlphabet::nameSActionSlot()
{
    NameSearch* NSW = new NameSearch(username);
    NSW->show();
    delete this;
}

//生日查询槽函数
void MainWindowInAlphabet::birthSActionSlot()
{
    BirthSearch* BSW = new BirthSearch(username);
    BSW->show();
    delete this;
}

//智能查询槽函数
void MainWindowInAlphabet::aiSActionSlot()
{
    AiSearch* ASW = new AiSearch(username);
    ASW->show();
    delete this;
}

//按分类排序槽函数
void MainWindowInAlphabet::rbyTypeActionSlot()
{
    MainWindow* MW = new MainWindow(username);
    MW->show();
    delete this;
}

//按新建顺序排序
void MainWindowInAlphabet::addTimeRActionSlot()
{
    MainWindowInAddTime* MWIAT = new MainWindowInAddTime(username);
    MWIAT->show();
    delete this;
}
