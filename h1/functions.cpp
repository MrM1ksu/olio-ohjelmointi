#include "functions.h"

void calcSum(int a, int b)
{
    cout << "The sum = " << a+b << endl;
}

void calcDiv(int a, int b)
{
    if (b == 0)
    {
        cout << "The quotient = Error: you can't divide by zero." << endl;
    }
    else
    {
        cout << "The quotient = " << fixed << setprecision(2) << static_cast<float>(a) / b << endl;
    }
}

int retSum(int a, int b)
{
    return a+b;
}

float retDiv(int a, int b)
{
    if (b == 0)
    {
        cout << "Error: you can't divide by zero." << endl;
        return 0;
    }
    else
    {
        return static_cast<float>(a) / b;
    }
}
