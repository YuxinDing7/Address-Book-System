#ifndef ELSEMODIFY_H
#define ELSEMODIFY_H

#include <QWidget>
#include <QDate>
namespace Ui {
class ElseModify;
}

class ElseModify : public QWidget
{
    Q_OBJECT

public:
    explicit ElseModify(QString , QString, QString, QString line_text = "_Null_", QWidget *parent = nullptr);
    ~ElseModify();

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::ElseModify *ui;
    QString username;
    QString modifyName;
    QString returnWin;
    QString line_text;
    QDate birth;
    QString sendBirth;
};

#endif // ELSEMODIFY_H
