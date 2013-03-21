#include "wordgroup.h"
#include "word.h"

std::ostream& operator<<(std::ostream& out, const WordGroup& n_group)
{
    n_group.print(out);
    return out;
}

void WordGroup::print(std::ostream& out) const
{
    foreach(Word* word,m_words)
    {
        out<<*word<<" ";
    }
}
