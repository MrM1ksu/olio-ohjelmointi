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
    int getArea() const;
    int getCircum() const;
    void setWidth(double);
    void setHeight(double);
    double getWidth() const;
    double getHeight() const;
};

#endif // RECTANGLE_H
