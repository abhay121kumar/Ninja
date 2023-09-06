#include<iostream>
using namespace std;
#include "inheritanceClass.cpp"

/*
int main()
{
    Vehicle v1;
    // v1.maxSpeed; // give error because declare as private accessible only in vehicle class
    // v1.numTyre; // give error because declare as protected accessible only inside child class not outside the class
    v1.color;

    v1.printVehivle();


    Car c1;
    // c1.numTyre; // give error because declare as protected accessible only inside child class not outside the class
    c1.color;
    c1.numGear;
    c1.printCar();

    HondCity h1;
    // h1.numTyre; // give error because declare as protected accessible only inside child class not outside the class
    h1.color;
    h1.numGear;
    h1.honda;
    h1.printHonda();
}

*/

/*
// output
in vehical class
maxSpeed: 0
numTyre: 0
color: 0
in car class
numTyre: 0
color: 0
numGear: 0
in HondCity class
color: 0
numGear: 0
honda: 0
*/


/*

// using protected access_specifier between inheritance

int main()
{
    Vehicle v1;
    // v1.maxSpeed; // give error because declare as private accessible only in vehicle class
    // v1.numTyre; // give error because declare as protected accessible only inside child class not outside the class
    v1.color;

    v1.printVehivle();


    Car c1;
    // c1.numTyre; // give error because declare as protected accessible only inside child class not outside the class
    // c1.color; // give error because declare as protected class(vehical) while inheriting accessible only inside child class not outside the class
    c1.numGear;
    c1.printCar();

    HondCity h1;
    // h1.numTyre; // give error because declare as protected accessible only inside child class not outside the class
    // h1.color;  //error: ‘int Vehicle::color’ is inaccessible within this context
    // h1.numGear; //error: ‘int Car::numGear’ is inaccessible within this context
    h1.honda;
    h1.printHonda();
}

*/

/*

in vehical class
maxSpeed: 0
numTyre: 0
color: 0

in car class
numTyre: 0
color: 0
numGear: 0

in HondCity class
numTyre: 0
color: 0
numGear: 0
honda: 0

*/




// using private access_specifier between inheritance

int main()
{
    Vehicle v1;
    // v1.maxSpeed; // give error because declare as private accessible only in vehicle class
    // v1.numTyre; // give error because declare as protected accessible only inside child class not outside the class
    v1.color;

    v1.printVehivle();


    Car c1;
    // c1.numTyre; // give error because declare as protected accessible only inside child class not outside the class
    // c1.color; // give error because declare as protected class(vehical) while inheriting accessible only inside child class not outside the class
    c1.numGear;
    c1.printCar();

    HondCity h1;
    // h1.numTyre; // give error because declare as private accessible only inside child class not outside the class
    // h1.color;  //error: ‘int Vehicle::color’ is inaccessible within this context
    // h1.numGear; //error: ‘int Car::numGear’ is inaccessible within this context
    h1.honda;
    h1.printHonda();
}

/*
in vehical class
maxSpeed: 0
numTyre: 0
color: 0

in car class
numTyre: 0
color: 0
numGear: 0

in HondCity class
numGear: 0
honda: 0
*/