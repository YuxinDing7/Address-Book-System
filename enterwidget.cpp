#include "enterwidget.h"
#include "ui_enterwidget.h"
#include "account.h"
#include "mainwindow.h"

//登录窗口函数
enterWidget::enterWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::enterWidget)
{
    ui->setupUi(this);

}

enterWidget::~enterWidget()
{
    delete ui;
}

//注册按钮槽函数
void enterWidget::on_signButton_clicked()
{
    //获取lineedit数据
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();

    //调用Account类的构造函数
    Account temp(username, password);
    if(temp.signAccount())
    {
        QMessageBox::information(this, "(σ′▽‵)′▽‵)σ 干杯！", "注册成功！念念不忘，必有‘回想’。欢迎使用‘回想’通讯录。(*˘︶˘*).｡.:*♡");
        //qDebug()<<"成功注册";
    }
    else
    {
        QMessageBox::warning(this, "警告", "该用户名已被使用/您未输入用户名和密码，请重新注册！(≥﹏≤)");

        //qDebug()<<"注册失败";
    }
}

//登录按钮槽函数
void enterWidget::on_loginButton_clicked()
{
    //获取lineedit数据
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();

    //调用Account类的构造函数
    Account temp = Account(username, password);
    if(temp.loginCheck())
    {
        //qDebug()<<"成功登录";

        //关闭本窗口，调用主界面窗口
        this->hide();
        MainWindow *mainW = new MainWindow(username); //堆空间创建
        mainW->show();
    }
    else
    {
        QMessageBox::warning(this, "警告", "用户名或密码错误，请重新输入！(≥﹏≤)");
        //qDebug()<<"登录失败";
    }
}


