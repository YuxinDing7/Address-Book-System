#include "Contact.h"

class Relative :public Contact
{
private:
    QString relation;
public:
    Relative(QString, QString, QString, QString, QString, QString);
    void saveInfo(QString) override;
    QString getrelation();
};
