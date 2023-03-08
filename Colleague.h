#include "Contact.h"

class Colleague :public Contact
{
private:
    QString company;
public:
    Colleague(QString, QString, QString, QString, QString, QString);
    void saveInfo(QString) override;
    QString getcompany();

};
