#include "aggregationa.h"
#include "assosiationa.h"
#include "classb.h"
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    int &ref1 = a;
    int &ref2 = b;
    cout<<"a:n arvo on: "<<ref1<<" ja osoite on: "<<&ref1<<endl;
    cout<<"b:n arvo on: " <<ref2<<" ja osoite on: "<<&ref2<<endl<<endl;

    int *myPointer = &a;
    cout<<"Pointterin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<*myPointer<<endl<<endl;

    myPointer = &b;
    cout<<"Pointterin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<*myPointer<<endl<<endl;

    int &refA = a;
    cout<<"RefA osoittaa osoitteeseen: "<<&refA<<endl;
    cout<<"RefA:n osoittaman muistipaikan arvo on: "<<refA<<endl<<endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl<<endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
