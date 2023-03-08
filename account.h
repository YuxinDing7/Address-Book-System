#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <fstream>
#include <vector>
#include <QApplication>

class Account
{
public:
    Account(QString, QString password = "0");
    bool signAccount();
    bool loginCheck();
    void deleteContact(QString name);
    bool checkName(QString nameToCheck);
private:
    QString username;
    QString password;
};

#endif // ACCOUNT_H
