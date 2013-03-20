#include "object.h"

Object::Object()
{
}

void Object::addPropertie(const Propertie& n_propertie)
{
    m_properties.insert(n_propertie.id(),n_propertie);
}

QString Object::type() const
{
    return QString("Object");
}
