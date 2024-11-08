#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;


class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();
    Rectangle(double w, double h);
    ~Rectangle();
    void setWidth(double w);
    void setHeight(double h);
    double getArea() const;
    double getCircum() const;

};

#endif // RECTANGLE_H
