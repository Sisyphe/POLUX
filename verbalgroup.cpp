#include "verbalgroup.h"
#include <QStringList>

VerbalGroup::VerbalGroup(QList<Word*> n_words)
{
    m_words=n_words;

    int i=0;
    m_kernel=0;
    while(i<n_words.size() && !m_kernel)
    {
        if(n_words[i]->type()=="Verbe" && static_cast<Verb*>(n_words[i])->time()!=INFINITIVE)
            m_kernel=static_cast<Verb*>(n_words[i]);
        ++i;
    }
}

QList<VerbalGroup*> VerbalGroup::createVerbalGroups(QList<Word*> n_words)
{
    QStringList t_verbal_group_component;
    t_verbal_group_component<<"Verbe"<<"Adverbe"<<"Particule";
    QList<VerbalGroup*> t_groups;
    int i=0;
    while(i<n_words.size())
    {
        int t_verb_index=-1;
        QList<Word*> t_word_group;
        int j=i;
        while(j<n_words.size() && t_verbal_group_component.contains(n_words[j]->type()))
        {
            if(t_verb_index<0 && n_words[j]->type()=="Verbe" && static_cast<Verb*>(n_words[j])->time()!=INFINITIVE)
                t_verb_index=j;
            t_word_group.append(n_words[j]);
            ++j;
        }
        if(i!=j && t_verb_index>=0)
        {
            VerbalGroup* t_group=new VerbalGroup(t_word_group);
            t_groups.append(t_group);
        }
        i=j+1;
    }

    return t_groups;
}
