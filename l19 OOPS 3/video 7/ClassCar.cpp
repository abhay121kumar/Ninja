#include<iostream>
using namespace std;
// #include "ClassVehicle.cpp"

class Car : public Vehicle
{
    public:
    int numGears;

    Car()
    {
        cout<<"Car constructor class"<<endl;
    }
    void print()
    {
        cout<<"Car class"<<endl;
    }
};
