#include "verb.h"

Verb::Verb(const QString& n_string, bool n_is_plural, bool n_is_active, Time n_time)
    :Word(n_string)
{
    m_type="Verbe";
    m_is_plural=n_is_plural;
    m_is_active=n_is_active;
    m_time=n_time;
}

bool Verb::isPlural() const
{
    return m_is_plural;
}

bool Verb::isActive() const
{
    return m_is_active;
}

Time Verb::time() const
{
    return m_time;
}
