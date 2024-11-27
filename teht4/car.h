#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"

#include <memory>
#include <iostream>
using namespace std;

class Car
{
private:
    unique_ptr<Engine> objEngine = make_unique<Engine>();
    unique_ptr<Wheel> objWheel1 = make_unique<Wheel>();
    unique_ptr<Wheel> objWheel2 = make_unique<Wheel>();
    unique_ptr<Wheel> objWheel3 = make_unique<Wheel>();
    unique_ptr<Wheel> objWheel4 = make_unique<Wheel>();
    string model;
    string brand;

public:
    Car();
    Car(string, string);
    void setEngine();
    void setWheels();
    string getModel();
    void setModel(string);
    string getBrand();
    void setBrand(string);
    void printDetails();

};

#endif // CAR_H
