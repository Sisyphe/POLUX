#ifndef VERBALGROUP_H
#define VERBALGROUP_H

#include "word.h"
#include "verb.h"
#include <QList>

class VerbalGroup
{
    public:
        VerbalGroup(QList<Word*> n_words);
        Verb* kernel();
        static QList<VerbalGroup*> createVerbalGroups(QList<Word*> n_words);

    protected:
        QList<Word*> m_words;
        Verb* m_kernel;
};

#endif // VERBALGROUP_H
