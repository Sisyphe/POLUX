#include "polux.h"

#include <QTimer>
#include <iostream>

polux::polux()
{
    QTimer* timer = new QTimer(this);
    connect( timer, SIGNAL(timeout()), SLOT(output()) );
    timer->start( 1000 );
}

polux::~polux()
{}

void polux::output()
{
    std::cout << "Hello World!" << std::endl;
}

#include "polux.moc"
