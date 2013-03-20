#ifndef ADJECTIVE_H
#define ADJECTIVE_H

#include "word.h"

class Adjective: public Word
{
    public:
        Adjective(const QString& n_string,bool n_is_plural,Gender n_gender);
        bool isPlural() const;
        Gender gender() const;

    private:
        bool m_is_plural;
        Gender m_gender;
};

#endif // ADJECTIVE_H
