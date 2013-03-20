#include "sentencepattern.h"
#include "dictionnary.h"

QList<QPair<QStringList,Sentence> > SentencePatterns::m_patterns;

void SentencePatterns::add(QList<Word> n_words,const Sentence& n_sentence)
{
    //if(get(n_words)!=n_sentence);
    QStringList t_types;
    foreach(Word t_word,n_words) t_types.append(t_word.type());
    m_patterns.append(QPair<QStringList,Sentence>(t_types,n_sentence));
}

Sentence SentencePatterns::get(QList<Word> n_words)
{
    /*QStringList t_types;
    QList<Word> t_words;
    QStringList t_strings=n_string.split(QString(" "),QString::SkipEmptyParts);
    foreach(QString t_string,t_strings)
    {
        Word t_word=Dictionnary::getWords(t_string).first(); //TODO mots polysémique
        t_types.append(t_word.type());
        t_words.append(t_word);
    }*/
}
