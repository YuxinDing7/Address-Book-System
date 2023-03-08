#include "classmateinfo_write.h"
#include "ui_classmateinfo_write.h"
#include "Classmate.h"
#include "mainwindow.h"
#include "smtp.h"
#include "account.h"
Classmate::Classmate(QString name, QString phone, QString mail, QString birthday, QString sendBirth,
                     QString school, QString grade, QString major):Contact(name, phone, mail, birthday, sendBirth)
{
    this->school = school;
    this->grade = grade;
    this->major = major;
}

void Classmate::saveInfo(QString username)
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
    QString temp = "Classmate," + Contact::getname() + "," + Contact::getphone() + "," + Contact::getmail() + "," + Contact::getbirth() + "," + Contact::getsendBirth()+ "," + school + "," + grade + "," + major + "\n";
    //qDebug()<<"info_write中的temp"<<temp;
    in<<temp;
    user_file.close();

}

QString Classmate::getschool()
{
    return school;
}

QString Classmate::getmajor()
{
    return major;
}

QString Classmate::getgrade()
{
    return grade;
}

ClassmateInfo_write::ClassmateInfo_write(QString username, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClassmateInfo_write)
{
    this->username = username;
    ui->setupUi(this);
}

ClassmateInfo_write::~ClassmateInfo_write()
{
    delete ui;
}

void ClassmateInfo_write::on_cancelButton_clicked()
{
    MainWindow* NM = new MainWindow(username);
    NM->show();
    delete this;
}


void ClassmateInfo_write::on_okButton_clicked()
{
    //获取用户填写信息
    QString name = ui->name_lineEdit->text();
    QString phone = ui->phone_lineEdit->text();
    QString mail = ui->mail_lineEdit->text();
    QString birthday = ui->calendarWidget->selectedDate().toString("yyyy-MM-dd");
    QString grade = ui->grade_lineEdit->text();
    QString major = ui->major_lineEdit->text();
    QString school = ui->school_lineEdit->text();
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

    //若姓名为空，发送警告
    if(name == "")
    {
        QMessageBox::critical(this, "警告！","请输入联系人的姓名。");
    }

    //若姓名与通讯录先前所存联系人姓名重复，发送警告
    else if(repeat)
    {
        QMessageBox::critical(this, "警告！","请输入不同于已有联系人的姓名。");
    }

    //无特殊情况保存信息
    else
    {
        Classmate c = Classmate(name, phone, mail, birthday, sendBirth, school, grade, major);
        createinfo(username, c);
        QDate current_date = QDate::currentDate();
        QDate tomorrow = current_date.addDays(1);
        int Y = tomorrow.year();
        int M = birthday.section('-', 1, 1).toInt();
        int D = birthday.section('-', 2, 2).toInt();
        QDate birthdate = QDate(Y, M, D);

        //检查新建联系人生日是否为明天，若是，则发送生日祝福
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
