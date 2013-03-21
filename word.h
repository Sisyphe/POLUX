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
    NONE=0x0,
    MASCULINE=0x01,
    FEMININE=0x2,
    BOTH=0x3
};

class Word
{
    public:
        Word(){}
        Word(const QString& n_string);
        QString string() const;
        QString type() const;
        Gender gender() const;
        friend std::ostream& operator<<(std::ostream& out, const Word& n_word);
        virtual void print(std::ostream& out) const;

    protected:
        QString m_string;
        QString m_type;
        Gender m_gender;
};

#endif // WORD_H
