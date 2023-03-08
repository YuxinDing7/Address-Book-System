#ifndef ELSEINFO_WRITE_H
#define ELSEINFO_WRITE_H

#include <QWidget>

namespace Ui {
class elseinfo_write;
}

class elseinfo_write : public QWidget
{
    Q_OBJECT

public:
    explicit elseinfo_write(QString , QWidget *parent = nullptr);
    ~elseinfo_write();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::elseinfo_write *ui;
    QString username;
};

#endif // ELSEINFO_WRITE_H
