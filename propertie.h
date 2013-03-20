#ifndef PROPERTIE_H
#define PROPERTIE_H

#include "thing.h"

class Propertie: public Thing
{
    public:
        Propertie();
        virtual QString type() const;

    protected:
        //State m_state;
};

#endif // PROPERTIE_H
