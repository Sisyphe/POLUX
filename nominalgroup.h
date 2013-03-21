#ifndef NOMINALGROUP_H
#define NOMINALGROUP_H

#include <QStringList>
#include "noun.h"
#include "wordgroup.h"

class NominalGroup: public WordGroup
{
    public:
        NominalGroup(QList<Word*> n_words,Noun* n_kernel);
        Noun* kernel();
        static QList<NominalGroup*> createNominalGroups(QList<Word*> n_words);

    protected:
        Noun* m_kernel;
};

#endif // NOMINALGROUP_H
