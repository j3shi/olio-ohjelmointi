#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(const string& n);
    ~ItalianChef();
    string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
