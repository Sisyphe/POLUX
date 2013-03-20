#ifndef DICTIONNARY_H
#define DICTIONNARY_H

#include <QMap>
#include "word.h"

class Dictionnary
{
    public:
        static void addWord(Word* n_word);
        static QList<Word*> getWords(const QString& n_string);

    protected:
        static QMap<QString,Word*> s_words;
};

#endif // DICTIONNARY_H
