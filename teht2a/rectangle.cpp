#include "rectangle.h"

Rectangle::Rectangle() {
    cout << "-------------------" << endl;
    cout << "Olio luotiin" << endl;
}

Rectangle::~Rectangle()
{
    cout << "Olio tuhottiin" << endl;
    cout << "----------------" << endl;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setHeight(double h)
{
    height = h;
}

double Rectangle::getArea() const
{
    return width * height;
}

double Rectangle::getCircum() const
{
    return 2 * (width + height);
}





