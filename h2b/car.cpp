#include "car.h"

Car::Car()
{

}

Car::Car(string b, string m, int y)
{
    brand=b;
    model=m;
    yearModel=y;
}

void Car::printData()
{
    cout<<"brand="<<brand<<", model="<<model<<" and yearmodel="<<yearModel<<endl;
}
