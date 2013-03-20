#include <QCoreApplication>
#include "polux.h"


int main(int argc, char** argv)
{
    QCoreApplication app(argc, argv);
    polux foo;
    return app.exec();
}
