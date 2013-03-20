#include "sentence.h"
#include "dictionnary.h"
#include <QDebug>
#include "nominalgroup.h"
#include "verbalgroup.h"

Sentence::Sentence(const QString &n_string)
{
    QStringList t_strings=n_string.split(QRegExp("\\W+"),QString::SkipEmptyParts);
    foreach(QString t_string,t_strings)
    {
        Word* t_word=Dictionnary::getWords(t_string).first(); //TODO mots polysémique
        m_words.append(t_word);
    }
    QList<NominalGroup*> t_nominal_groups=NominalGroup::createNominalGroups(m_words);
    QList<VerbalGroup*> t_verbal_groups=VerbalGroup::createVerbalGroups(m_words);
}
