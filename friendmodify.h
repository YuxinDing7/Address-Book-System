#ifndef FRIENDMODIFY_H
#define FRIENDMODIFY_H

#include <QWidget>
#include <QDate>

namespace Ui {
class FriendModify;
}

class FriendModify : public QWidget
{
    Q_OBJECT

public:
    explicit FriendModify(QString, QString, QString, QString line_text = "_Null_", QWidget *parent = nullptr);
    ~FriendModify();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::FriendModify *ui;
    QString username;
    QString modifyName;
    QString returnWin;
    QString line_text;
    QDate birth;
    QString sendBirth;
};

#endif // FRIENDMODIFY_H
