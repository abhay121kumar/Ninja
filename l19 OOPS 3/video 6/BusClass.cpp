#include<iostream>
using namespace std;
// #include "VehicleClass.cpp"
#include "CarClass.cpp"
#include "TruckClass.cpp"



class Bus : public Car,public Truck
{
    public:
    // int numGear;

    Bus() // implicitly calling default constructor of vehicle
    {
        cout<<"Bus Class Default Constructor"<<endl;
    }

    // Truck(int x,int y): Vehicle(x) // implicitly calling default constructor of vehicle
    // {
    //     numGear = y;
    //     cout<<"Truck Class Parametrized Con  structor"<<endl;
    // }

    ~Bus()
    {
        cout<<"Bus Class Default Destructor"<<endl;
    }
    // void print()
    // {
    //     cout<<"NumTyres"<<numTyre<<endl;
    //     cout<<"color"<<color<<endl;
    //     cout<<"NumGear"<<numGear<<endl;
    // }
};
