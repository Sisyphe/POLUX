#ifndef SENTENCE_H
#define SENTENCE_H

#include "thingsindex.h"
#include "word.h"
#include "wordgroup.h"

class Sentence: public WordGroup
{
    public:
        Sentence(const QString& n_string);
};

#endif // SENTENCE_H
