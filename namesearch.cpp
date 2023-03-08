#include "namesearch.h"
#include "ui_namesearch.h"
#include "classmatemodify.h"
#include "colleaguemodify.h"
#include "friendmodify.h"
#include "relativemodify.h"
#include "elsemodify.h"
#include "mainwindow.h"
#include "familiarmodify.h"
NameSearch::NameSearch(QString username,QString nameToSearch, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NameSearch)
{
    ui->setupUi(this);
    this->username = username;
    this->nameToSearch = nameToSearch;

    if(nameToSearch != "_Null_")
    {
        ui->namelineEdit->setText(nameToSearch);
        on_searchButton_clicked();
    }
}

NameSearch::~NameSearch()
{
    delete ui;
}

void NameSearch::on_searchButton_clicked()
{
    related_contacts.clear();
    nameToSearch = ui->namelineEdit->text();
    QDir file = QDir(QDir::currentPath());
    file.cdUp();
    QString filePath = file.path();
    QString user_file_path = file.path() + "/userFiles/" + username + "File.txt";
    QFile user_file(user_file_path);
    user_file.open(QIODevice::ReadOnly);

    QString contactName = "";
    QString contact_line ="";
    QVector<int> relativity;

    //检索出文件中与查询名字有关的所有联系人
    while(!user_file.atEnd())
    {
        QByteArray line = user_file.readLine();
        contact_line = QString(line);
        contactName = contact_line.section(',', 1, 1);
        int lOfNameS = nameToSearch.size();
        int lOfNameC = contactName.size();
        if(lOfNameS<=lOfNameC)
        {
            for(int i = 0; i<= lOfNameC - lOfNameS; i++)
            {
                QString temp = contactName.mid(i, lOfNameS);
                if(temp == nameToSearch)
                {
                    related_contacts.append(line);
                    relativity.append(i);
                    //qDebug()<<line;
                    break;
                }
            }
        }
    }

    //通过冒泡排序将相关性更高的检索项放到vector前面
    int row = relativity.size();
    for(int i = 0; i < row - 1; i++)
    {
        for(int j = row - 2; j >= i;j--)
        {
            if(relativity[j]>relativity[j+1])
            {
                int temp1 = relativity[j];
                relativity[j] = relativity[j+1];
                relativity[j+1] = temp1;
                QString temp2 = related_contacts[j];
                related_contacts[j] = related_contacts[j+1];
                related_contacts[j+1] = temp2;
            }
            else if(relativity[j] == relativity[j+1] && related_contacts[j].size() > related_contacts[j+1].size())
            {
                QString temp2 = related_contacts[j];
                related_contacts[j] = related_contacts[j+1];
                related_contacts[j+1] = temp2;
            }
        }
    }
    /*
    for(int i = 0; i < row; i++)
    {
        qDebug()<<relativity[i]<<"\n"<<related_contacts[i];
    }
    */

    ui->tableWidget->setRowCount(row);
    ui->tableWidget->setColumnWidth(0, 100);
    ui->tableWidget->setColumnWidth(1, 275);
    for(int i = 0; i < row; i++)
    {
        contactName = related_contacts[i].section(',', 1, 1);
        QString contactPhone = related_contacts[i].section(',', 2, 2);
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(contactName));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(contactPhone));
    }
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    connect(ui->tableWidget, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(slotcellDoubleClicked(int,int)));
}

void NameSearch::slotcellDoubleClicked(int row,int column)
{
    if(column == 0)
    {
        QString name = related_contacts[row].section(',', 1, 1);
        QString class_type = related_contacts[row].section(',', 0, 0);
        if(class_type == "Classmate")
        {
            ClassmateModify *CMW = new ClassmateModify(username, name, "NameSearch", nameToSearch);
            CMW->show();
            delete this;
        }
        else if(class_type == "Colleague")
        {
            ColleagueModify *COMW = new ColleagueModify(username, name, "NameSearch", nameToSearch);
            COMW->show();
            delete this;
        }
        else if(class_type == "Friend")
        {
            FriendModify *FMW = new FriendModify(username, name, "NameSearch", nameToSearch);
            FMW->show();
            delete this;
         }
        else if(class_type == "Relative")
        {
            RelativeModify *RMW = new RelativeModify(username, name, "NameSearch", nameToSearch);
            RMW->show();
            delete this;
         }
        else if(class_type == "Familiar")
        {
            FamiliarModify *FMW = new FamiliarModify(username, name, "NameSearch", nameToSearch);
            FMW->show();
            delete this;
         }
        else if(class_type == "Else")
        {
            ElseModify *EMW = new ElseModify(username, name, "NameSearch", nameToSearch);
            EMW->show();
            delete this;
        }
    }
}

void NameSearch::on_backButton_clicked()
{
    MainWindow* MW = new MainWindow(username);
    MW->show();
    delete this;
}
