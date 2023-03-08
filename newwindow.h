#ifndef NEWWINDOW_H
#define NEWWINDOW_H

#include <QWidget>
#include <QDebug>
namespace Ui {
class Newwindow;
}

class Newwindow : public QWidget
{
    Q_OBJECT

public:
    explicit Newwindow(QString username, QString returnWin, QWidget *parent = nullptr);
    ~Newwindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Newwindow *ui;
    QString username;
    QString returnWin;
};

#endif // NEWWINDOW_H
