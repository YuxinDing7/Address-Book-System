#ifndef RELATIVEMODIFY_H
#define RELATIVEMODIFY_H

#include <QWidget>
#include <QDate>
namespace Ui {
class RelativeModify;
}

class RelativeModify : public QWidget
{
    Q_OBJECT

public:
    explicit RelativeModify(QString, QString, QString, QString line_text = "_Null_", QWidget *parent = nullptr);
    ~RelativeModify();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::RelativeModify *ui;
    QString username;
    QString modifyName;
    QString returnWin;
    QString line_text;
    QDate birth;
    QString sendBirth;
};

#endif // RELATIVEMODIFY_H
