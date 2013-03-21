#include <QCoreApplication>
#include "polux.h"
#include "sentence.h"
#include "word.h"

int main(int argc, char** argv)
{
    QCoreApplication app(argc, argv);
    //polux foo;

    std::cout<<"POLUX"<<std::endl;
    Gender x,a,b;
    x=Gender(a+b);
    Sentence sentence("");
    return app.exec();
}
