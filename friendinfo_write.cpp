#include "friendinfo_write.h"
#include "ui_friendinfo_write.h"
#include "Friend.h"
#include "mainwindow.h"
#include "smtp.h"
#include "account.h"
Friend::Friend(QString name, QString phone, QString mail, QString birthday, QString sendBirth,
                     QString know_time, QString know_way):Contact(name, phone, mail, birthday, sendBirth)
{
    this->know_time = know_time;
    this->know_way = know_way;

}

void Friend::saveInfo (QString username)
{
    //获取文件地址
    QDir file = QDir(QDir::currentPath());
    file.cdUp();
    QString filePath = file.path();
    filePath.append("/userFiles/" + username + "File.txt");

    //打开个人文件，存储联系人信息
    QFile user_file(filePath);
    user_file.open(QIODevice::Append);
    QTextStream in(&user_file);
    QString temp = "Friend," + Contact::getname() + "," + Contact::getphone() + "," + Contact::getmail() + "," + Contact::getbirth()+ "," + Contact::getsendBirth() + "," + know_time + "," + know_way  + "\n";
    qDebug()<<"saveInfo中写入的"<<temp;
    in<<temp;
    user_file.close();
}

QString Friend::gettime()
{
    return know_time;
}

QString Friend::getway()
{
    return know_way;
}



friendinfo_write::friendinfo_write(QString username,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::friendinfo_write)
{
    this->username = username;
    ui->setupUi(this);
}

friendinfo_write::~friendinfo_write()
{
    delete ui;
}

void friendinfo_write::on_okButton_clicked()
{
    QString name = ui->name_lineEdit->text();
    QString phone = ui->phone_lineEdit->text();
    QString mail = ui->mail_lineEdit->text();
    QString birthday = ui->calendarWidget->selectedDate().toString("yyyy-MM-dd");
    QString sendBirth = "";
    if(ui->yesButton->isChecked())
    {
        sendBirth = "1";
    }
    else
    {
        sendBirth = "0";
    }
    QString know_time = ui->calendarWidget_2->selectedDate().toString("yyyy-MM-dd");
    QString know_way = ui->way_lineEdit->text();

    Account check(username);
    bool repeat = check.checkName(name);

    Friend f = Friend(name, phone, mail, birthday, sendBirth, know_time,know_way);

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
        QDate current_date = QDate::currentDate();
        QDate tomorrow = current_date.addDays(1);
        int Y = tomorrow.year();
        int M = birthday.section('-', 1, 1).toInt();
        int D = birthday.section('-', 2, 2).toInt();
        QDate birthdate = QDate(Y, M, D);

        if(birthdate == tomorrow && sendBirth == "1")
        {
            Smtp s;
            QString content = "亲爱的" + name + "女士/先生，" +username + "通过回想通讯录，预祝您生日快乐！(σ′▽‵)′▽‵)σ";
            s.SendData(mail.toUtf8(), "庆生", content.toUtf8());
        }
        MainWindow* NM = new MainWindow(username);
        NM->show();
        delete this;
    }
}

void friendinfo_write::on_cancelButton_clicked()
{
    MainWindow* NM = new MainWindow(username);
    NM->show();
    delete this;
}
