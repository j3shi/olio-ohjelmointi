#include <iostream>
#include <vector>
#include "car.h"
using namespace std;

int main()
{
    vector<Car> carList;

    Car objCar1("Toyota","Prius",2009);
    Car objCar2("Honda","Civic",2011);
    Car objCar3("Audi","A4",2012);

    carList.push_back(objCar1);
    carList.push_back(objCar2);
    carList.push_back(objCar3);

    for(int x = 0; x <=2; x++){
        carList[x].printData();
    }

    return 0;
}
