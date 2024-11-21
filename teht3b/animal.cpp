#include "animal.h"

Animal::Animal() {}

Animal::~Animal()
{
    cout <<"Olio tuhottiin" << endl;
}

void Animal::callOut()
{
    cout << "Eläin ääntelee" << endl;

}
