#include "Car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Toyota");
    objCar.setModel("Prius");
    objCar.setYearModel(2009);

    objCar.printData();

    Rectangle* rectPtr = new Rectangle;
    rectPtr->setWidth(5.3);
    rectPtr->setHeight(3.4);
    cout << "pinta-ala: " << rectPtr->getArea() << endl;
    cout << "ympärysmitta " << rectPtr->getCircum() << endl;

    delete rectPtr;
    rectPtr = nullptr;

    unique_ptr<Student> stuPtr = make_unique<Student>();
    stuPtr->setName("Jaakko");
    stuPtr->setStudentNumber(12);
    stuPtr->setAverage(8.9);

    cout<<"Oppilaan nimi: " << stuPtr->getName() << endl;
    cout <<"opiskelijanumero: " << stuPtr->getStudentNumber() << endl;
    cout <<"keskiarvo: " << stuPtr->getAverage() << endl;



    return 0;
}
