#ifndef THINGSINDEX_H
#define THINGSINDEX_H

#include "thing.h"
#include <QMap>

class ThingsIndex
{
    public:
        static uint add(Thing* n_thing);

    protected:

        static uint generateNewUniqID();

        static uint s_id_counter;
        static QMap<QString,QMap<uint,Thing*> > s_things;
};

#endif // THINGSINDEX_H
