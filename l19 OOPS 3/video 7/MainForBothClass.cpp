#include<iostream>
using namespace std;
#include "ClassVehicle.cpp"
#include "ClassCar.cpp"

int main()
{
    Vehicle v;
    // Vehicle Class Constructor
    Car c;
    // Vehicle Class Constructor
    // Car constructor class

    v.print(); //Vehicle class
    c.print(); //Car class


    Vehicle *v1 = new Vehicle;
    Vehicle *v2;

    v2 = &c;


    // At compile time function is calling
    v1 ->print(); //Vehicle class
    v2 ->print(); //Vehicle class
    return 0;
}