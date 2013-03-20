#ifndef THING_H
#define THING_H

#include <QStringList>

class Thing
{
    public:
        Thing();
        uint id() const;
        virtual QString type() const;

    protected:
        uint m_id;
        QStringList m_name_list;
};

#endif // THING_H
