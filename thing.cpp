#include "thing.h"

#include "thingsindex.h"

Thing::Thing()
    :m_id(0)
{
    m_id=ThingsIndex::add(this);
}

uint Thing::id() const
{
    return m_id;
}

QString Thing::type() const
{
    return QString("None");
}
