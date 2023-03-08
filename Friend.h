#include "Contact.h"

class Friend :public Contact
{
private:
    QString know_time;
    QString know_way;
public:
    Friend(QString, QString, QString, QString, QString, QString, QString);
    void saveInfo(QString) override;
    QString gettime();
    QString getway();
};
