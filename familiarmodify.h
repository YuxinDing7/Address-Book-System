#ifndef FAMILIARMODIFY_H
#define FAMILIARMODIFY_H

#include <QWidget>
#include <QDate>
namespace Ui {
class FamiliarModify;
}

class FamiliarModify : public QWidget
{
    Q_OBJECT

public:
    explicit FamiliarModify(QString, QString, QString, QString line_text = "_Null_", QWidget *parent = nullptr);
    ~FamiliarModify();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::FamiliarModify *ui;
    QString username;
    QString modifyName;
    QString returnWin;
    QString line_text;
    QDate birth;
    QString sendBirth;
};

#endif // FAMILIARMODIFY_H
