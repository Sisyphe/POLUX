/**
 * \file verbalgroup.h
 * \author Lelong Gérald
 */

#ifndef VERBALGROUP_H
#define VERBALGROUP_H

#include "word.h"
#include "verb.h"
#include <QList>
#include "wordgroup.h"

/**
 * \class VerbalGroup verbalgroup.h
 * \brief Verbal group wrapping a word list
 *
 * Wrap a word list and provide access to verbal group element such as kernel.
 */

class VerbalGroup: public WordGroup
{
    public:
        VerbalGroup(QList<Word*> n_words);
        Verb* kernel();
        /**
         * \param[in] n_words : the word list from wich the verbal groups will
         *      be taken.
         * \return the verbal group list created from the input word list.
         */
        static QList<VerbalGroup*> createVerbalGroups(QList<Word*> n_words);

    protected:
        Verb* m_kernel; /*!< This verb is the main word of the group */
};

#endif // VERBALGROUP_H
