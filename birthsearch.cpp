#include "birthsearch.h"
#include "ui_birthsearch.h"
#include "classmatemodify.h"
#include "colleaguemodify.h"
#include "friendmodify.h"
#include "relativemodify.h"
#include "elsemodify.h"
#include "mainwindow.h"
#include "familiarmodify.h"
BirthSearch::BirthSearch(QString username, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BirthSearch)
{
    birthContacts.clear();
    ui->setupUi(this);
    this->username = username;
    QDir file = QDir(QDir::currentPath());
    file.cdUp();
    QString filePath = file.path();
    QString user_file_path = file.path() + "/userFiles/" + username + "File.txt";
    QFile user_file(user_file_path);
    user_file.open(QIODevice::ReadOnly);

    QString contact_line ="";
    bool decAndJan = false;
    QDate current_date = QDate::currentDate();
    //QDate current_date = QDate(2022, 12, 04);
    int current_month = current_date.month();
    int current_day = current_date.day();

    if(current_month == 12)
    {
        decAndJan = true;
    }

    //检索出当前月份和下个月份生日的联系人
    while(!user_file.atEnd())
    {
        QByteArray line = user_file.readLine();
        contact_line = QString(line);

        QString birthday = contact_line.section(',', 4, 4);
        int M = birthday.section('-', 1, 1).toInt();
        int D = birthday.section('-', 2, 2).toInt();
        if(M == current_month && D >= current_day)
        {
            birthContacts.append(contact_line);
        }
        else if(M == (current_month+1)%12)
        {
            birthContacts.append(contact_line);
        }
    }

    int l = birthContacts.size();
    if(decAndJan == false)
    {
        for(int i = 0; i < l - 1; i++)
        {
            for(int j = l - 2; j >= i;j--)
            {
                QString birthday1 = birthContacts[j].section(',', 4, 4);
                int M1 = birthday1.section('-', 1, 1).toInt();
                int D1 = birthday1.section('-', 2, 2).toInt();
                QString birthday2 = birthContacts[j+1].section(',', 4, 4);
                int M2 = birthday2.section('-', 1, 1).toInt();
                int D2 = birthday2.section('-', 2, 2).toInt();
                if(M1 > M2)
                {
                    QString temp = birthContacts[j];
                    birthContacts[j] = birthContacts[j+1];
                    birthContacts[j+1] = temp;
                }
                else if(M1 == M2 && D1 > D2)
                {
                    QString temp = birthContacts[j];
                    birthContacts[j] = birthContacts[j+1];
                    birthContacts[j+1] = temp;
                }
            }
        }
    }

    else
    {
        for(int i = 0; i < l - 1; i++)
        {
            for(int j = l - 2; j >= i;j--)
            {
                QString birthday1 = birthContacts[j].section(',', 4, 4);
                int M1 = birthday1.section('-', 1, 1).toInt();
                int D1 = birthday1.section('-', 2, 2).toInt();
                QString birthday2 = birthContacts[j+1].section(',', 4, 4);
                int M2 = birthday2.section('-', 1, 1).toInt();
                int D2 = birthday2.section('-', 2, 2).toInt();
                if(M1 == 1 && M2 == 12)
                {
                    QString temp = birthContacts[j];
                    birthContacts[j] = birthContacts[j+1];
                    birthContacts[j+1] = temp;
                }
                else if(M1 == M2 && D1 > D2)
                {
                    QString temp = birthContacts[j];
                    birthContacts[j] = birthContacts[j+1];
                    birthContacts[j+1] = temp;
                }
            }
        }
    }
    ui->tableWidget->setRowCount(birthContacts.size());
    ui->tableWidget->setColumnWidth(0, 100);
    ui->tableWidget->setColumnWidth(1, 275);
    ui->tableWidget->setColumnWidth(2, 175);
    for(int i = 0; i < birthContacts.size(); i++)
    {
        QString contactName = birthContacts[i].section(',', 1, 1);
        QString contactPhone = birthContacts[i].section(',', 2, 2);
        QString contactBirth = birthContacts[i].section(',', 4, 4);
        contactBirth = contactBirth.section('-', 1, 2);
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(contactName));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(contactPhone));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(contactBirth));
    }
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    connect(ui->tableWidget, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(slotcellDoubleClicked(int,int)));
}
BirthSearch::~BirthSearch()
{
    delete ui;
}

void BirthSearch::slotcellDoubleClicked(int row,int column)
{
    if(column == 0)
    {
        QString name = birthContacts[row].section(',', 1, 1);
        QString class_type = birthContacts[row].section(',', 0, 0);
        if(class_type == "Classmate")
        {
            ClassmateModify *CMW = new ClassmateModify(username, name, "BirthSearch");
            CMW->show();
            delete this;
        }
        else if(class_type == "Colleague")
        {
            ColleagueModify *COMW = new ColleagueModify(username, name, "BirthSearch");
            COMW->show();
            delete this;
        }
        else if(class_type == "Friend")
        {
            FriendModify *FMW = new FriendModify(username, name, "BirthSearch");
            FMW->show();
            delete this;
         }
        else if(class_type == "Relative")
        {
            RelativeModify *RMW = new RelativeModify(username, name, "BirthSearch");
            RMW->show();
            delete this;
         }
        else if(class_type == "Familiar")
        {
            FamiliarModify *FMW = new FamiliarModify(username, name, "BirthSearch");
            FMW->show();
            delete this;
         }
        else if(class_type == "Else")
        {
            ElseModify *EMW = new ElseModify(username, name, "BirthSearch");
            EMW->show();
            delete this;
        }
    }
}

void BirthSearch::on_quitButton_clicked()
{
    MainWindow* MW = new MainWindow(username);
    MW->show();
    delete this;
}
