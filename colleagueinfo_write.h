#ifndef COLLEAGUEINFO_WRITE_H
#define COLLEAGUEINFO_WRITE_H

#include <QWidget>

namespace Ui {
class Colleagueinfo_write;
}

class Colleagueinfo_write : public QWidget
{
    Q_OBJECT

public:
    explicit Colleagueinfo_write(QString username, QWidget *parent = nullptr);
    ~Colleagueinfo_write();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::Colleagueinfo_write *ui;
    QString username;

};

#endif // COLLEAGUEINFO_WRITE_H
