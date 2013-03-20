#ifndef NOUN_H
#define NOUN_H

#include "word.h"

class Noun: public Word
{
    public:
        Noun(){}
        Noun(const QString& n_string,bool n_is_plural,bool n_is_common,Gender n_gender);
        bool isPlural() const;
        bool isCommon() const;
        Gender gender() const;

    protected:
        bool m_is_plural;
        bool m_is_common;
        Gender m_gender;
};

#endif // NOUN_H
