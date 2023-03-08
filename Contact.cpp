#include "Contact.h"

Contact::Contact(QString name, QString phone, QString email, QString birthday, QString sendBirth)
{
    this->name = name;
    this->phone_number = phone;
    this->email_address = email;
    this->birthday = birthday;
    this->sendBirth = sendBirth;
}

QString Contact::getname()
{
    return name;
}

QString Contact::getphone()
{
    return phone_number;
}

QString Contact::getmail()
{
    return email_address;
}

QString Contact::getbirth()
{
    return birthday;
}

QString Contact::getsendBirth()
{
    return sendBirth;
}
void createinfo(QString username,Contact&ct)
{
    ct.saveInfo(username);
}


