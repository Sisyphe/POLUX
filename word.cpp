#include "word.h"
#include <iostream>

Word::Word(const QString& n_string)
{
    m_string=n_string;
    m_type="Mot";
    m_gender=NONE;

}

QString Word::string() const
{
    return m_string;
}

QString Word::type() const
{
    return m_type;
}

Gender Word::gender() const
{
    return m_gender;
}


std::ostream& operator<<(std::ostream& out, const Word& n_word)
{
    n_word.print(out);
    return out;
}

void Word::print(std::ostream& out) const
{
    out<<string().toStdString();
}
