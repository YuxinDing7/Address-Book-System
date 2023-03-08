#ifndef AISEARCH_H
#define AISEARCH_H

#include <QWidget>

namespace Ui {
class AiSearch;
}

class AiSearch : public QWidget
{
    Q_OBJECT

public:
    explicit AiSearch(QString username, QString infoToSearch = "_Null_", QWidget *parent = nullptr);
    ~AiSearch();

private slots:
    void on_searchButton_clicked();
    void slotcellDoubleClicked(int,int);
    void on_pushButton_clicked();

private:
    Ui::AiSearch *ui;
    QString username;
    QVector<QString> related_contacts;
    QString infoToSearch;
};

#endif // AISEARCH_H
