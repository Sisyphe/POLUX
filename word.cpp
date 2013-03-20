#include "word.h"

Word::Word(const QString& n_string)
{
    m_string=n_string;
    m_type="Mot";

}

QString Word::string() const
{
    return m_string;
}

QString Word::type() const
{
    return m_type;
}
