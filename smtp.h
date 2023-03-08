#ifndef SMTP_H
#define SMTP_H

#include<QByteArray>
#include<QString>
#include<QTcpSocket>
#include<QDebug>
#include <QDate>
#include <QString>

class Smtp
{
public:
    Smtp(QByteArray mailname = "2549338753@qq.com", QByteArray activatecode = "vjgzmqxpyfmseaab");
    ~Smtp();
    void SendData(QByteArray sendIp,QByteArray s_Title,QByteArray s_Content);
    QString WaitAndReadData();
    void celebrate(QByteArray my_email,QByteArray his_mail,QByteArray activate_code, QString username);
private:
    QByteArray Mailname="";
    QByteArray Activatecode="";
    QTcpSocket * MailSocket=nullptr;  //用于建立TCP连接并传输数据流
    QString ReceivedData="";

};
#endif // SMTP_H
