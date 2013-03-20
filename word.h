#ifndef WORD_H
#define WORD_H

#include <QString>

enum Time
{
    PAST,
    PRESENT,
    FUTURE,
    INFINITIVE,
    PARTICIPE
};

enum Gender
{
    MASCULINE=0x01,
    FEMININE=0x10
};

class Word
{
    public:
        Word(){}
        Word(const QString& n_string);
        QString string() const;
        QString type() const;

    protected:
        QString m_string;
        QString m_type;
};

#endif // WORD_H
