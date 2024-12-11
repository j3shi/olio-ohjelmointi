#include <iostream>
#include "myclass.h"

using namespace std;

int main()
{
    MyClass *objMC = new MyClass;
    objMC->raiseMySignal();
    return 0;
}
