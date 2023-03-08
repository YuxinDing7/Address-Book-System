#include "account.h"
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QtDebug>
Account::Account(QString username, QString password)
{
    this->username = username;
    this->password = password;
}

//注册函数
bool Account::signAccount()
{
    if(username == "" || password == "")
    {
        return false;
    }
    //获取文件地址
    QDir file = QDir(QDir::currentPath());
    file.cdUp();
    QString filePath = file.path();
    filePath.append("/userFiles/user_info.txt");

    //读取已有用户名信息，检查用户名是否已经被使用
    QFile user_info_file(filePath);
    if (!user_info_file.open(QIODevice::ReadWrite))
    {
        return false;
    }
    while(!user_info_file.atEnd())
    {
        QByteArray line = user_info_file.readLine();
        QString user_info_line(line);
        QString username = user_info_line.section(',', 0, 0);
        if(username == this->username)
        {
            return false;
        }
    }
    user_info_file.close();

    //确认用户名未被使用，将新注册账户信息写入账户名文件中
    user_info_file.open(QIODevice::Append);
    QTextStream in(&user_info_file);
    in<<username<<","<<password<<"\n";
    user_info_file.close();

    //创建其用户通讯录csv文件，存储其通讯人信息
    QString user_file_path = file.path() + "/userFiles/" + username + "File.txt";
    QFile user_file(user_file_path);
    user_file.open(QIODevice::WriteOnly);
    user_file.close();
    return true;
}

//检查登录函数
bool Account::loginCheck()
{
    //获取文件地址
    QDir file = QDir(QDir::currentPath());
    file.cdUp();
    QString filePath = file.path();
    filePath.append("/userFiles/user_info.txt");

    //读取已有用户名与密码信息
    QFile user_info_file(filePath);
    if (!user_info_file.open(QIODevice::ReadWrite))
    {
        return false;
    }
    while(!user_info_file.atEnd())
    {
        QByteArray line = user_info_file.readLine();
        QString user_info_line(line);
        QString username = user_info_line.section(',', 0, 0);
        QString password = user_info_line.section(',', 1, 1);
        password.remove('\n');
        if(username == this->username && password == this->password)
        {
            return true;
        }
    }
    user_info_file.close();
    return false;
}

void Account::deleteContact(QString delete_name)
{
    //获取文件地址
    QDir file = QDir(QDir::currentPath());
    file.cdUp();
    QString filePath = file.path();
    filePath.append("/userFiles/" + username + "File.txt");

    QStringList lines;
    //删除联系人所在行
    QFile user_info_file(filePath);
    user_info_file.open(QIODevice::ReadOnly);

    while(!user_info_file.atEnd())
    {
        QByteArray line = user_info_file.readLine();
        QString user_info_line(line);
        //qDebug()<<user_info_line;
        QString name = user_info_line.section(',', 1, 1);
        //qDebug()<<"文件中名字"<<name;
        if(name == delete_name)
        {
            //qDebug()<<delete_name;
            continue;
        }
        else
        {
            lines.append(user_info_line);
            qDebug()<<"删除中添加的userinfo"<<user_info_line;
        }
    }
    user_info_file.close();

    user_info_file.open(QIODevice::WriteOnly);
    for(int i = 0; i < lines.size(); i++)
    {
        //qDebug() << lines[i];
        QString line = lines[i];
        qDebug()<<"删除中写入的line"<<line;
        QTextStream in(&user_info_file);
        in<<line;
    }
    user_info_file.close();
}

bool Account::checkName(QString nameToCheck)
{
    //查看填写姓名是否与之前存储的联系人姓名有重复
    QDir file = QDir(QDir::currentPath());
    file.cdUp();
    QString filePath = file.path();
    QString user_file_path = file.path() + "/userFiles/" + username + "File.txt";
    QFile user_file(user_file_path);
    user_file.open(QIODevice::ReadOnly);

    QString contactName = "";
    QString contact_line ="";
    bool repeat = false;
    while(!user_file.atEnd())
    {
        QByteArray line = user_file.readLine();
        contact_line = QString(line);
        contactName = contact_line.section(',', 1, 1);
        if(contactName == nameToCheck)
        {
            repeat = true;
            break;
        }
    }
    user_file.close();
    return repeat;
}
