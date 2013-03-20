#include "noun.h"

Noun::Noun(const QString& n_string,bool n_is_plural,bool n_is_common,Gender n_gender)
    :Word(n_string)
{
    m_type="Nom";
    m_is_plural=n_is_plural;
    m_is_common=n_is_common;
    m_gender=n_gender;
}

bool Noun::isPlural() const
{
    return m_is_plural;
}

bool Noun::isCommon() const
{
    return m_is_common;
}

Gender Noun::gender() const
{
    return m_gender;
}
