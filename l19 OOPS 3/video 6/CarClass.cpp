#include<iostream>
using namespace std;
#include "VehicleClass.cpp"


class Car : public Vehicle1
{
    public:
    int numGear;

    Car() // implicitly calling default constructor of vehicle
    {
        cout<<"Car Class Default Constructor"<<endl;
    }
    // Car(int x,int y): Vehicle1(x) // implicitly calling default constructor of vehicle
    // {
    //     numGear = y;
    //     cout<<"Car Class Parametrized Constructor"<<endl;
    // }
    ~Car()
    {
        cout<<"Car Class Default Destructor"<<endl;
    }
    void print()
    {
        cout<<"NumTyres"<<numTyre<<endl;
        cout<<"color"<<color<<endl;
        cout<<"NumGear"<<numGear<<endl;
    }
};
