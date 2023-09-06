#include<iostream>
using namespace std;
#include "VehicleClass.cpp"


class Truck : public Vehicle1
{
    public:
    // int numGear;

    Truck() // implicitly calling default constructor of vehicle
    {
        cout<<"Truck Class Default Constructor"<<endl;
    }

    // Truck(int x,int y): Vehicle(x) // implicitly calling default constructor of vehicle
    // {
    //     numGear = y;
    //     cout<<"Truck Class Parametrized Constructor"<<endl;
    // }

    ~Truck()
    {
        cout<<"Truck Class Default Destructor"<<endl;
    }
    // void print()
    // {
    //     cout<<"NumTyres"<<numTyre<<endl;
    //     cout<<"color"<<color<<endl;
    //     cout<<"NumGear"<<numGear<<endl;
    // }
};
