#include "Contact.h"

class Else :public Contact
{
private:
    QString remark;
public:
    Else(QString, QString, QString, QString, QString, QString);
    void saveInfo(QString) override;
    QString getremark();

};
