#include "elseinfo_write.h"
#include "ui_elseinfo_write.h"
#include "elseinfo_write.h"
#include "Else.h"
#include "mainwindow.h"
#include "smtp.h"
#include "account.h"
Else::Else(QString name, QString phone, QString mail, QString birthday, QString sendBirth,
                     QString remark):Contact(name, phone, mail, birthday, sendBirth)
{
    this->remark = remark;

}

void Else::saveInfo(QString username)
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
    QString temp = "Else," + Contact::getname() + "," + Contact::getphone() + "," + Contact::getmail() + "," + Contact::getbirth() + "," + Contact::getsendBirth() + "," + remark +  "\n";
    in<<temp;
    user_file.close();
}

QString Else::getremark()
{
    return remark;
}




elseinfo_write::elseinfo_write(QString username,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::elseinfo_write)
{
    this->username = username;
    ui->setupUi(this);
}

elseinfo_write::~elseinfo_write()
{
    delete ui;
}

void elseinfo_write::on_okButton_clicked()
{
    QString name = ui->name_lineEdit->text();
    QString phone = ui->phone_lineEdit->text();
    QString mail = ui->mail_lineEdit->text();
    QString birthday = ui->calendarWidget->selectedDate().toString("yyyy-MM-dd");
    QString remark = ui->remarkEdit->text();
    QString sendBirth = "";
    if(ui->yesButton->isChecked())
    {
        sendBirth = "1";
    }
    else
    {
        sendBirth = "0";
    }

    Account check(username);
    bool repeat = check.checkName(name);

    Else e = Else(name, phone, mail, birthday, sendBirth, remark);
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
        createinfo(username, e);

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

void elseinfo_write::on_cancelButton_clicked()
{
    MainWindow* NM = new MainWindow(username);
    NM->show();
    delete this;
}
