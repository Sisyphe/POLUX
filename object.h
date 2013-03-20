#ifndef OBJECT_H
#define OBJECT_H

#include <QStringList>
#include <QMap>
#include "propertie.h"
#include "thing.h"

class Object: public Thing
{
    public:
        Object();
        void addPropertie(const Propertie& n_propertie);
        virtual QString type() const;

    protected:
        QMap<uint,Propertie> m_properties;
};

#endif // OBJECT_H
