#include "Contact.h"

class Classmate :public Contact
{
private:
    QString school;
    QString grade;
    QString major;
public:
    Classmate(QString, QString, QString, QString, QString, QString, QString, QString);
    void saveInfo(QString) override;
    QString getschool();
    QString getgrade();
    QString getmajor();
};
