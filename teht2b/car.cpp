#include "car.h"

Car::Car(string b,string m, int y)
{
    this->brand = b;
    this->model = m;
    this->yearModel = y;
}

void Car::printData() {
    cout << brand <<" "<< model <<" "<< yearModel << endl;
}
