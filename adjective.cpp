#include "adjective.h"

Adjective::Adjective(const QString& n_string,bool n_is_plural,Gender n_gender)
    :Word(n_string)
{
    m_type="Adjectif";
    m_is_plural=n_is_plural;
    m_gender=n_gender;
}

bool Adjective::isPlural() const
{
    return m_is_plural;
}

Gender Adjective::gender() const
{
    return m_gender;
}
