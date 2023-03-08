#ifndef CLASSMATEMODIFY_H
#define CLASSMATEMODIFY_H

#include <QWidget>
#include <QDate>
namespace Ui {
class ClassmateModify;
}

class ClassmateModify : public QWidget
{
    Q_OBJECT

public:
    explicit ClassmateModify(QString, QString, QString, QString line_text = "_Null_", QWidget *parent = nullptr);
    ~ClassmateModify();

private slots:
    void on_okButton_2_clicked();
    void on_cancelButton_2_clicked();

private:
    Ui::ClassmateModify *ui;
    QString username;
    QString modifyName;
    QString returnWin;
    QString line_text;
    QDate birth;
    QString sendBirth;
};

#endif // CLASSMATEMODIFY_H
