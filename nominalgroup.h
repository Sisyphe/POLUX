#ifndef NOMINALGROUP_H
#define NOMINALGROUP_H

#include <QStringList>
#include "noun.h"

class NominalGroup
{
    public:
        NominalGroup(QList<Word*> n_words,Noun* n_kernel);
        Noun* kernel();
        static QList<NominalGroup*> createNominalGroups(QList<Word*> n_words);

    protected:
        Noun* m_kernel;
        QList<Word*> m_words;
};

#endif // NOMINALGROUP_H
