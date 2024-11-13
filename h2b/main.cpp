#include "car.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<Car> carList;

    Car objCar0("Toyota", "Corolla", 2015);
    Car objCar1("BMW", "X5", 2020);
    Car objCar2("Fiat", "500", 2011);

    carList.push_back(objCar0);
    carList.push_back(objCar1);
    carList.push_back(objCar2);

    cout<<"Information of the second car in the list:"<<endl;
    carList[1].printData();

    cout<<endl<<"Information of all the cars in the list:"<<endl;
    for (int i=0; i<=2; i++) {
        carList[i].printData();
    }

    return 0;
}
