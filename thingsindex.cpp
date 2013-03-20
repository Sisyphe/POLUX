#include "thingsindex.h"
#include <QDebug>

uint ThingsIndex::s_id_counter=0;
QMap<QString,QMap<uint,Thing*> > ThingsIndex::s_things;

uint ThingsIndex::add(Thing* n_thing)
{
    uint t_id=n_thing->id();
    if(!t_id)  t_id=generateNewUniqID();
    s_things[n_thing->type()][t_id]=n_thing;
    qDebug()<<n_thing->type();
    return t_id;
}

uint ThingsIndex::generateNewUniqID()
{
    return ++s_id_counter;
}
