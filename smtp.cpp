#include "smtp.h"

Smtp::Smtp(QByteArray mailname, QByteArray activatecode)
{
    if(mailname.contains("@163") || mailname.contains("@qq"))
    {
        Mailname= mailname;
        Activatecode = activatecode;
    }

    else
    {
        qDebug()<<"Sorry, we can only provide two mail sending channels: 163 mailbox and QQ mailbox";
    }

}
void Smtp::SendData(QByteArray SendIP, QByteArray s_Title, QByteArray s_Content)
{
    MailSocket=new QTcpSocket();
    if(Mailname.contains("@163"))
    {
        MailSocket->connectToHost("smtp.163.com",25,QTcpSocket::ReadWrite);  //连接163邮箱
    }
    if(Mailname.contains("@qq"))
    {
        MailSocket->connectToHost("smtp.qq.com",25,QTcpSocket::ReadWrite);  //连接163邮箱
    }
    MailSocket->waitForConnected(1500);
    WaitAndReadData();
    MailSocket->write("helo localhost\r\n");   //标识发送电子邮件的系统,localhost即本地主机
    WaitAndReadData();
    MailSocket->write("auth login\r\n");    //smtp的auth login验证方式
    WaitAndReadData();
    MailSocket->write(Mailname.toBase64()+"\r\n");  //写入用户名
    WaitAndReadData();
    MailSocket->write(Activatecode.toBase64()+"\r\n");  //写入密码
    WaitAndReadData();
    MailSocket->write("mail from: <"+Mailname+">\r\n"); //发送的邮箱
    WaitAndReadData();
    MailSocket->write("rcpt to: <"+SendIP+">\r\n"); //接收的邮箱
    WaitAndReadData();
    MailSocket->write("data\r\n");  //开始写入
    WaitAndReadData();
    MailSocket->write("from:<"+Mailname+">\r\n");  //发送邮件的邮箱名
    WaitAndReadData();
    MailSocket->write("to:<"+SendIP+">");  //接收邮件的邮箱名
    WaitAndReadData();
    MailSocket->write("data\r\n");
    WaitAndReadData();
    MailSocket->write("Subject:"+s_Title+"\r\n");  //发送标题
    MailSocket->write("\r\n");
    MailSocket->write(s_Content.append("\r\n")); //发送内容
    MailSocket->write(".\r\n");
    WaitAndReadData();
    MailSocket->write("quit\r\n");
    MailSocket->disconnect();

}

QString Smtp::WaitAndReadData()
{
    MailSocket->waitForReadyRead(2500); //利用waitForReadyRead()函数阻塞进程，等待数据，超时返回false
    ReceivedData = MailSocket->readAll();
    return ReceivedData;
}
Smtp::~Smtp()
{
    delete MailSocket;
}

void Smtp::celebrate(QByteArray my_email,QByteArray his_mail,QByteArray activate_code, QString username)
{
    Smtp mail(my_email,activate_code);
    QString content = username.append("通过回想通讯录，为您送上生日祝福！");
    mail.SendData(his_mail, "庆生", content.toUtf8());
}

