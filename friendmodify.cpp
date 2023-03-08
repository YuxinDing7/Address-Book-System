#include "friendmodify.h"
#include "ui_friendmodify.h"
#include "mainwindow.h"
#include "Friend.h"
#include "account.h"
#include "mainwindowinaddtime.h"
#include "mainwindowinalphabet.h"
#include "aisearch.h"
#include "birthsearch.h"
#include "smtp.h"
#include "namesearch.h"
#include "account.h"
FriendModify::FriendModify(QString username, QString modifyName, QString returnWin, QString line_text,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendModify)
{
    ui->setupUi(this);
    this->username = username;
    this->modifyName = modifyName;
    this->returnWin = returnWin;
    this->line_text = line_text;
    ui->name_lineEdit->setText(modifyName);

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
        contact_line.remove("\n");
        contactName = contact_line.section(',', 1, 1);
        if(contactName == modifyName)
        {
            break;
        }
    }
    contact_line.remove("\n");
    QString phone = contact_line.section(',', 2, 2);
    ui->phone_lineEdit->setText(phone);

    QString email = contact_line.section(',', 3, 3);
    ui->mail_lineEdit->setText(email);

    QString birthday = contact_line.section(',', 4, 4);
    int Y = birthday.section('-', 0, 0).toInt();
    int M = birthday.section('-', 1, 1).toInt();
    int D = birthday.section('-', 2, 2).toInt();

    birth = QDate(Y, M, D);

    ui->calendarWidget->setSelectedDate(birth);
    sendBirth = contact_line.section(',', 5, 5);
    if(sendBirth == "1")
    {
        ui->yesButton->setChecked(true);
    }
    else if(sendBirth == "0")
    {
        ui->noButton->setChecked(true);
    }

    QString knowDay = contact_line.section(',', 6, 6);
    int Y1 = knowDay.section('-', 0, 0).toInt();
    int M1 = knowDay.section('-', 1, 1).toInt();
    int D1 = knowDay.section('-', 2, 2).toInt();


    QDate knowDate = QDate(Y1, M1, D1);
    ui->calendarWidget_2->setSelectedDate(knowDate);

    QString knowWay = contact_line.section(',', 7, 7);
    ui->way_lineEdit->setText(knowWay);

    user_file.close();
}

FriendModify::~FriendModify()
{
    delete ui;
}

void FriendModify::on_okButton_clicked()
{
    Account account(username);
    QString deleteName = modifyName;
    account.deleteContact(deleteName);

    QString name = ui->name_lineEdit->text();
    QString phone = ui->phone_lineEdit->text();
    QString mail = ui->mail_lineEdit->text();
    QString birthday = ui->calendarWidget->selectedDate().toString("yyyy-MM-dd");
    QString know_time = ui->calendarWidget_2->selectedDate().toString("yyyy-MM-dd");
    QString know_way = ui->way_lineEdit->text();
    QString sendBirth2;
    if(ui->yesButton->isChecked())
    {
        sendBirth2 = "1";
    }
    else if(ui->noButton->isChecked())
    {
        sendBirth2 = "0";
    }

    Account check(username);
    bool repeat = check.checkName(name);
    know_way.remove("\n");
    Friend f = Friend(name, phone, mail, birthday, sendBirth2, know_time,know_way);

    qDebug()<<"know_way"<<know_way;
    if(name == "")
    {
        QMessageBox::critical(this, "警告！","请输入联系人的姓名。");
    }

    //若姓名与通讯录先前所存联系人姓名重复，发送警告
    else if(repeat)
    {
        QMessageBox::critical(this, "警告！","请输入不同于已有联系人的姓名。");
    }

    else
    {
        createinfo(username, f);
        qDebug()<<"最后";
        QDate current_date = QDate::currentDate();
        QDate tomorrow = current_date.addDays(1);
        int Y = tomorrow.year();
        int M = birthday.section('-', 1, 1).toInt();
        int D = birthday.section('-', 2, 2).toInt();
        QDate birthdate = QDate(Y, M, D);
        bool birthchange = false;
        if(M != birth.month() || D != birth.day())
        {
            birthchange = true;
        }

        if(birthchange && birthdate == tomorrow && sendBirth2 == "1")
        {
            Smtp s;
            QString content = "亲爱的" + name + "女士/先生，" +username + "通过回想通讯录，预祝您生日快乐！(σ′▽‵)′▽‵)σ";
            s.SendData(mail.toUtf8(), "庆生", content.toUtf8());
        }
        else if(birthdate == tomorrow && sendBirth == "0" && sendBirth2 == "1")
        {
            Smtp s;
            QString content = "亲爱的" + name + "女士/先生，" +username + "通过回想通讯录，预祝您生日快乐！(σ′▽‵)′▽‵)σ";
            s.SendData(mail.toUtf8(), "庆生", content.toUtf8());
        }
        if(returnWin == "MainWindow")
        {
            MainWindow* NM = new MainWindow(username);
            NM->show();
            delete this;
        }
        else if(returnWin == "MainWindowInAddTime")
        {
            MainWindowInAddTime* MWIAT = new MainWindowInAddTime(username);
            MWIAT->show();
            delete this;
        }
        else if(returnWin == "MainWindowInAlphabet")
        {
            MainWindowInAlphabet* MWIA = new MainWindowInAlphabet(username);
            MWIA->show();
            delete this;
        }
        else if(returnWin == "AiSearch")
        {
            AiSearch* ASW = new AiSearch(username, line_text);
            ASW->show();
            delete this;
        }
        else if(returnWin == "BirthSearch")
        {
            BirthSearch* BSW = new BirthSearch(username);
            BSW->show();
            delete this;
        }
        else if(returnWin == "NameSearch")
        {
            NameSearch* NSW = new NameSearch(username, line_text);
            NSW->show();
            delete this;
        }
    }

}


void FriendModify::on_cancelButton_clicked()
{
    if(returnWin == "MainWindow")
    {
        MainWindow* NM = new MainWindow(username);
        NM->show();
        delete this;
    }
    else if(returnWin == "MainWindowInAddTime")
    {
        MainWindowInAddTime* MWIAT = new MainWindowInAddTime(username);
        MWIAT->show();
        delete this;
    }
    else if(returnWin == "MainWindowInAlphabet")
    {
        MainWindowInAlphabet* MWIA = new MainWindowInAlphabet(username);
        MWIA->show();
        delete this;
    }
    else if(returnWin == "AiSearch")
    {
        AiSearch* ASW = new AiSearch(username, line_text);
        ASW->show();
        delete this;
    }
    else if(returnWin == "BirthSearch")
    {
        BirthSearch* BSW = new BirthSearch(username);
        BSW->show();
        delete this;
    }
    else if(returnWin == "NameSearch")
    {
        NameSearch* NSW = new NameSearch(username, line_text);
        NSW->show();
        delete this;
    }
}
