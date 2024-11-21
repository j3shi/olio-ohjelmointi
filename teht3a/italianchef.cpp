#include "italianchef.h"

ItalianChef::ItalianChef(const string &n) : Chef(n)
{
    cout << "ItalianChef " << n << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << getName() << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return Chef::name;
}

void ItalianChef::makePasta()
{
    cout << "Italian Chef " << getName() << " makes pasta" << endl;
}
