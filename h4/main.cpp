#include "car.h"
#include <iostream>

using namespace std;

int main()
{
    Car Car("Corolla", "Toyota");
    Car.setEngine();
    Car.setWheels();
    Car.printDetails();
    return 0;
}
