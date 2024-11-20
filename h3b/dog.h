#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal
{
public:
    Dog();
    virtual ~Dog();
    virtual void callOut();
};

#endif // DOG_H
