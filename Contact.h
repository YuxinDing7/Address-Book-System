#pragma once
#include <iostream>
#include <QString>
class Contact
{
private:
    QString name;
    QString phone_number;
    QString email_address;
    QString birthday;
    QString sendBirth;

public:
    Contact(QString, QString, QString, QString, QString);
    //virtual QString getInfo() = 0;
    virtual void saveInfo(QString) = 0;
    QString getname();
    QString getphone();
    QString getmail();
    QString getbirth();
    QString getsendBirth();
};

void createinfo(QString,Contact& ct);  //涉及多态的实现
