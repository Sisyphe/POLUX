#ifndef VERB_H
#define VERB_H

#include "word.h"

class Verb: public Word
{
    public:
        Verb(const QString& n_string,bool n_is_plural,bool n_is_active,Time n_time);
        bool isPlural() const;
        bool isActive() const;
        Time time() const;

    private:
        bool m_is_plural;
        bool m_is_active;
        Time m_time;
};

#endif // VERB_H
