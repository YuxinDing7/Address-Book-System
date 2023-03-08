#ifndef FAMILIAR_H
#define FAMILIAR_H
#include "Colleague.h"
#include "Classmate.h"

class Familiar: public Classmate
{
public:
    Familiar(QString, QString, QString, QString, QString, QString, QString, QString, QString);
    void saveInfo(QString) override;
private:
    QString job;
};

#endif // FAMILIAR_H
