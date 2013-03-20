#include "dictionnary.h"
#include <QDebug>

QMap<QString,Word*> Dictionnary::s_words;

void Dictionnary::addWord(Word* n_word)
{
    s_words.insertMulti(n_word->string(),n_word);
}

QList<Word*> Dictionnary::getWords(const QString& n_string)
{
    QList<Word*> t_words;
    foreach(Word* t_word,s_words.values(n_string))
    {
        t_words.append(new Word(*t_word));
    }
    return t_words;
}
