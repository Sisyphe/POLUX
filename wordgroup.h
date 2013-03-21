#ifndef WORDGROUP_H
#define WORDGROUP_H

#include <iostream>
#include <QList>

class Word;

class WordGroup
{

    public:
        friend std::ostream& operator<<(std::ostream& out, const WordGroup& n_group);
        virtual void print(std::ostream& out) const;

    protected:
        QList<Word*> m_words;
};

#endif // WORDGROUP_H
