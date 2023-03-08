#ifndef CLASSMATEINFO_WRITE_H
#define CLASSMATEINFO_WRITE_H

#include <QWidget>
#include <QGroupBox>

namespace Ui {
class ClassmateInfo_write;
}

class ClassmateInfo_write : public QWidget
{
    Q_OBJECT

public:
    explicit ClassmateInfo_write(QString username, QWidget *parent = nullptr);
    ~ClassmateInfo_write();

private slots:
    void on_cancelButton_clicked();

    void on_okButton_clicked();

private:
    Ui::ClassmateInfo_write *ui;
    QString username;
};

#endif // CLASSMATEINFO_WRITE_H
