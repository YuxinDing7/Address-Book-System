#ifndef RELATIVEINFO_WRITE_H
#define RELATIVEINFO_WRITE_H

#include <QWidget>

namespace Ui {
class relativeinfo_write;
}

class relativeinfo_write : public QWidget
{
    Q_OBJECT

public:
    explicit relativeinfo_write(QString username,QWidget *parent = nullptr);
    ~relativeinfo_write();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::relativeinfo_write *ui;
    QString username;
};

#endif // RELATIVEINFO_WRITE_H
