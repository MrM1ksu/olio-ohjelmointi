#include "animal.h"
#include "dog.h"
#include <iostream>
using namespace std;

int main()
{
    Animal *objAnimal = new Animal;
    objAnimal->callOut();
    delete objAnimal;
    objAnimal=nullptr;

    Dog *objDog = new Dog;
    objDog->callOut();
    delete objDog;
    objDog=nullptr;

    return 0;
}
