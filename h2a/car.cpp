#include "car.h"

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    cout<<"Car:"<<endl<<"brand="<<brand<<", model="<<model<<" and yearmodel="<<yearModel<<endl<<endl;
}

Car::Car()
{

}

