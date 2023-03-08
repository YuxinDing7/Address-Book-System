#include "newwindow.h"
#include "ui_newwindow.h"
#include "classmateinfo_write.h"
#include "colleagueinfo_write.h"
#include "friendinfo_write.h"
#include "relativeinfo_write.h"
#include "elseinfo_write.h"
#include "familiarinfo_write.h"
#include "mainwindow.h"
#include "mainwindowinaddtime.h"
#include "mainwindowinalphabet.h"
Newwindow::Newwindow(QString username, QString returnWin, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Newwindow)
{
    this->username = username;
    this->returnWin = returnWin;
    ui->setupUi(this);
}

Newwindow::~Newwindow()
{
    delete ui;
}

void Newwindow::on_pushButton_clicked()
{
    if(ui->classmate_Button->isChecked())
    {
        ClassmateInfo_write *classmate_write = new ClassmateInfo_write(username);
        classmate_write->show();
        delete this;
    }

    if(ui->colleague_Button->isChecked())
    {
        Colleagueinfo_write *colleague_write = new Colleagueinfo_write(username);
        colleague_write->show();
        delete this;
    }
    if(ui->friend_Button->isChecked())
    {
        friendinfo_write *friend_write = new friendinfo_write(username);
        friend_write->show();
        delete this;
    }
    if(ui->relative_Button->isChecked())
    {
        relativeinfo_write *relative_write = new relativeinfo_write(username);
        relative_write->show();
        delete this;
    }

    if(ui->familiar_Button->isChecked())
    {
        FamiliarInfo_write *familiar_write = new FamiliarInfo_write(username);
        familiar_write->show();
        delete this;
    }

    if(ui->other_Button->isChecked())
    {
        elseinfo_write *else_write = new elseinfo_write(username);
        else_write->show();
        delete this;
    }

}

void Newwindow::on_pushButton_2_clicked()
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
}
