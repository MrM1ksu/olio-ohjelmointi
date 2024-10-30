#include <iostream>
#include <iomanip>
#include "functions.h"

using namespace std;

int main()
{
    int a, b;

    cout << "Enter an integer: " << endl;
    cin >> a;
    cout << "Enter a second integer: " << endl;
    cin >> b;
    calcSum(a, b);
    calcDiv(a, b);
    cout << "The returned value for the sum calculation = " << retSum(a, b) << endl;
    cout << "The returned value for the division calculation = " << fixed << setprecision(2) << retDiv(a, b) << endl;
    return 0;
}
