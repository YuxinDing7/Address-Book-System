#ifndef NAMESEARCH_H
#define NAMESEARCH_H

#include <QWidget>
#include <QTableWidget>

namespace Ui {
class NameSearch;
}

class NameSearch : public QWidget
{
    Q_OBJECT

public:
    explicit NameSearch(QString username, QString nameToSearch = "_Null_", QWidget *parent = nullptr);
    ~NameSearch();

private slots:
    void on_searchButton_clicked();
    void slotcellDoubleClicked(int row,int column);
    void on_backButton_clicked();

private:
    Ui::NameSearch *ui;
    QString username;
    QVector<QString> related_contacts;
    QString nameToSearch;

};

#endif // NAMESEARCH_H
