#ifndef FRIENDINFO_WRITE_H
#define FRIENDINFO_WRITE_H

#include <QWidget>

namespace Ui {
class friendinfo_write;
}

class friendinfo_write : public QWidget
{
    Q_OBJECT

public:
    explicit friendinfo_write(QString username,QWidget *parent = nullptr);
    ~friendinfo_write();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::friendinfo_write *ui;
    QString username;
};

#endif // FRIENDINFO_WRITE_H
