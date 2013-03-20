#ifndef SENTENCE_H
#define SENTENCE_H

#include "thingsindex.h"
#include "word.h"

class Sentence
{
    public:
        Sentence(const QString& n_string);

    protected:
        QList<Word*> m_words;
};

#endif // SENTENCE_H
