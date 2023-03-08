#include "aisearch.h"
#include "ui_aisearch.h"
#include "mainwindow.h"
#include "classmatemodify.h"
#include "colleaguemodify.h"
#include "friendmodify.h"
#include "relativemodify.h"
#include "elsemodify.h"
#include "familiarmodify.h"
//智能搜索实现
AiSearch::AiSearch(QString username, QString infoToSearch, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AiSearch)
{
    ui->setupUi(this);
    this->username = username;
    this->infoToSearch = infoToSearch;
    if(infoToSearch != "_Null_")
    {
        ui->searchLineEdit->setText(infoToSearch);
        on_searchButton_clicked();
    }
}

AiSearch::~AiSearch()
{
    delete ui;
}

void AiSearch::on_searchButton_clicked()
{
    related_contacts.clear();
    infoToSearch = ui->searchLineEdit->text();
    QDir file = QDir(QDir::currentPath());
    file.cdUp();
    QString filePath = file.path();
    QString user_file_path = file.path() + "/userFiles/" + username + "File.txt";
    QFile user_file(user_file_path);
    user_file.open(QIODevice::ReadOnly);

    QString contactName = "";
    QString contact_line ="";
    QVector<int> relativity;
    QVector<QString> related_info;

    //检索出文件中与查询信息有关的所有联系人
    while(!user_file.atEnd())
    {
        QByteArray line = user_file.readLine();
        contact_line = QString(line);
        QVector<QString> contact_vector;
        QStringList contact_sections = contact_line.split(QRegExp("[,]"));
        int length = contact_sections.size();
        contact_sections[length-1] = contact_sections[length-1].remove('\n');
        //qDebug()<<contact_sections;
        bool haveGot = false;
        for(int i = 5; i < contact_sections.size(); i++)
        {
            //qDebug()<<i<<"i和section长度"<<contact_sections.size();
            //qDebug()<<contact_sections[i];
            QString section = contact_sections[i];
            int lOfSearch = infoToSearch.size();
            int lOfSection = section.size();
            //qDebug()<<"infoToSearch:"<<infoToSearch;
            for(int j = 0; j <= lOfSection - lOfSearch; j++)
            {
                QString temp = section.mid(j, lOfSearch);
                //qDebug()<<"temp"<<temp;
                if(temp == infoToSearch)
                {
                    related_contacts.append(line);
                    relativity.append(j);
                    related_info.append(section);
                    haveGot = true;
                    //qDebug()<<line<<j<<section;
                    break;
                }
            }
            if(haveGot == true)
            {
                break;
            }
        }
    }

    user_file.close();

    //通过冒泡排序将相关性更高的检索项放到vector前面
    int row = relativity.size();
    for(int i = 0; i < row - 1; i++)
    {
        for(int j = row - 2; j >= i;j--)
        {
            if(relativity[j] > relativity[j+1])
            {
                int temp1 = relativity[j];
                relativity[j] = relativity[j+1];
                relativity[j+1] = temp1;
                QString temp2 = related_contacts[j];
                related_contacts[j] = related_contacts[j+1];
                related_contacts[j+1] = temp2;
                QString temp3 = related_info[j];
                related_info[j] = related_info[j+1];
                related_info[j+1] = temp3;
            }
            else if(relativity[j] == relativity[j+1] && related_info[j].size() > related_info[j+1].size())
            {
                QString temp2 = related_contacts[j];
                related_contacts[j] = related_contacts[j+1];
                related_contacts[j+1] = temp2;
                QString temp3 = related_info[j];
                related_info[j] = related_info[j+1];
                related_info[j+1] = temp3;
            }
        }
    }

    for(int i = 0; i < row; i++)
    {
        qDebug()<<relativity[i]<<"\n"<<related_contacts[i];
    }

    ui->tableWidget->setRowCount(row);
    ui->tableWidget->setColumnWidth(0, 100);
    ui->tableWidget->setColumnWidth(1, 200);
    ui->tableWidget->setColumnWidth(2, 200);

    for(int i = 0; i < row; i++)
    {
        contactName = related_contacts[i].section(',', 1, 1);
        QString contactPhone = related_contacts[i].section(',', 2, 2);
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(contactName));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(contactPhone));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(related_info[i]));
    }
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    connect(ui->tableWidget, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(slotcellDoubleClicked(int,int)));

}

void AiSearch::slotcellDoubleClicked(int row,int column)
{
    if(column == 0)
    {
        QString name = related_contacts[row].section(',', 1, 1);
        QString class_type = related_contacts[row].section(',', 0, 0);
        if(class_type == "Classmate")
        {
            ClassmateModify *CMW = new ClassmateModify(username, name, "AiSearch", infoToSearch);
            CMW->show();
            delete this;
        }
        else if(class_type == "Colleague")
        {
            ColleagueModify *COMW = new ColleagueModify(username, name, "AiSearch", infoToSearch);
            COMW->show();
            delete this;
        }
        else if(class_type == "Friend")
        {
            FriendModify *FMW = new FriendModify(username, name, "AiSearch", infoToSearch);
            FMW->show();
            delete this;
         }
        else if(class_type == "Relative")
        {
            RelativeModify *RMW = new RelativeModify(username, name, "AiSearch", infoToSearch);
            RMW->show();
            delete this;
         }
        else if(class_type == "Familiar")
        {
            FamiliarModify *FMW = new FamiliarModify(username, name, "AiSearch", infoToSearch);
            FMW->show();
            delete this;
         }
        else if(class_type == "Else")
        {
            ElseModify *EMW = new ElseModify(username, name, "AiSearch", infoToSearch);
            EMW->show();
            delete this;
        }
    }
}

void AiSearch::on_pushButton_clicked()
{
    MainWindow* MW = new MainWindow(username);
    MW->show();
    delete this;
}
