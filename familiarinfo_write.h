#ifndef FAMILIARINFO_WRITE_H
#define FAMILIARINFO_WRITE_H

#include <QWidget>

namespace Ui {
class FamiliarInfo_write;
}

class FamiliarInfo_write : public QWidget
{
    Q_OBJECT

public:
    explicit FamiliarInfo_write(QString username, QWidget *parent = nullptr);
    ~FamiliarInfo_write();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::FamiliarInfo_write *ui;
    QString username;
};

#endif // FAMILIARINFO_WRITE_H
