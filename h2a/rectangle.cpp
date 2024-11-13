#include "rectangle.h"

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getHeight() const
{
    return height;
}

int Rectangle::getArea() const
{
    return width * height;
}

int Rectangle::getCircum() const
{
    return 2 * (width + height);
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

Rectangle::Rectangle()
{

}
