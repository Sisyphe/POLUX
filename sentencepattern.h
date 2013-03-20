#ifndef SENTENCEPATTERN_H
#define SENTENCEPATTERN_H

#include "sentence.h"
#include <QPair>
#include "word.h"

class SentencePatterns
{
    public:
        static void add(QList<Word> n_words,const Sentence& n_sentence);
        static Sentence get(QList<Word> n_words);

    protected:
        static QList<QPair<QStringList,Sentence> > m_patterns;
};

#endif // SENTENCEPATTERN_H
