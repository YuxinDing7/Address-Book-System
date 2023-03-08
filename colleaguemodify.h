#ifndef COLLEAGUEMODIFY_H
#define COLLEAGUEMODIFY_H

#include <QWidget>
#include <QDate>

namespace Ui {
class ColleagueModify;
}

class ColleagueModify : public QWidget
{
    Q_OBJECT

public:
    explicit ColleagueModify(QString, QString, QString, QString line_text = "_Null_", QWidget *parent = nullptr);
    ~ColleagueModify();

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::ColleagueModify *ui;
    QString username;
    QString modifyName;
    QString returnWin;
    QString line_text;
    QDate birth;
    QString sendBirth;
};

#endif // COLLEAGUEMODIFY_H
