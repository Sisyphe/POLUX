#include "nominalgroup.h"

NominalGroup::NominalGroup(QList<Word*> n_words,Noun* n_kernel)
{
    m_kernel=n_kernel;
    m_words=n_words;
}

Noun* NominalGroup::kernel()
{
    return m_kernel;
}

QList<NominalGroup*> NominalGroup::createNominalGroups(QList<Word*> n_words)
{
    QStringList t_nominal_group_component;
    t_nominal_group_component<<"Nom"<<"Adjectif"<<"Préposition"<<"Article"<<"Pronom";
    QList<NominalGroup*> t_groups;
    int i=0;
    while(i<n_words.size())
    {
        int t_kernel_index=-1;
        QList<Word*> t_word_group;
        Gender group_gender=NONE;
        int j=i;
        if(n_words[i]->type()!="Préposition") // Une groupe nominal ne commence pas par une préposition
        {
            while(j<n_words.size() && t_nominal_group_component.contains(n_words[j]->type()))
            {
                if(n_words[j]->gender()!=BOTH)
                    group_gender=(Gender)(group_gender|n_words[j]->gender());

                if(
                   t_kernel_index<0
                   && (n_words[j]->type()=="Nom" ||  n_words[j]->type()=="Pronom")
                   && (n_words[j]->gender()&group_gender)
                )
                {
                    t_kernel_index=j;
                }
                t_word_group.append(n_words[j]);
                ++j;
            }
        }
        if(i!=j && t_kernel_index>=0)
        {
            NominalGroup* t_group=new NominalGroup(t_word_group,static_cast<Noun*>(n_words[t_kernel_index]));
            t_groups.append(t_group);
        }
        i=j+1;
    }

    return t_groups;
}
