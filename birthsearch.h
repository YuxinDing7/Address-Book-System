#ifndef BIRTHSEARCH_H
#define BIRTHSEARCH_H

#include <QWidget>
#include <QTableWidget>
#include <QDate>

namespace Ui {
class BirthSearch;
}

class BirthSearch : public QWidget
{
    Q_OBJECT

public:
    explicit BirthSearch(QString username, QWidget *parent = nullptr);
    ~BirthSearch();

private slots:
    void slotcellDoubleClicked(int,int);
    void on_quitButton_clicked();

private:
    Ui::BirthSearch *ui;
    QString username;
    QVector<QString> birthContacts;

};

#endif // NAMESEARCH_H
