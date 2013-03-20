#ifndef polux_H
#define polux_H

#include <QtCore/QObject>

class polux : public QObject
{
Q_OBJECT
public:
    polux();
    virtual ~polux();
private slots:
    void output();
};

#endif // polux_H
