#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Ford");
    objCar.setModel("Focus");
    objCar.setYearModel(2004);
    objCar.printData();

    Rectangle *objRectangle = new Rectangle;
    objRectangle->setWidth(8);
    objRectangle->setHeight(4);
    cout<<"Rectangle:"<<endl<<"area="<<objRectangle->getArea()<<" and circumference="<<objRectangle->getCircum()<<endl<<endl;
    delete objRectangle;
    objRectangle = nullptr;

    unique_ptr<Student> objStudent = make_unique<Student>();
    objStudent->setName("Kalle");
    objStudent->setStudentNumber(1);
    objStudent->setAverage(4.3);
    cout<<"Student:"<<endl<<"name="<<objStudent->getName()<<", student number="<<objStudent->getStudentNumber()<<" and average="<<objStudent->getAverage()<<endl;
    objStudent->getStudentNumber();
    objStudent->getAverage();
    return 0;
}
