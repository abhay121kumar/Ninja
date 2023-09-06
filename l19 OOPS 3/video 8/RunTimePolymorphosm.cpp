#include<iostream>
using namespace std;

class Vehicle
{
    public:
    string color;

    Vehicle()
    {
        cout<<"Vehicle Class Constructor"<<endl;
    }
    virtual void print() // <-----------------------------------------Changes here // Now it Became Virtual Function
    {
        cout<<"Vertual print from Vehicle class"<<endl;
    }
};


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


int main()
{
    Vehicle v;
    // Vehicle Class Constructor
    Car c;
    // Vehicle Class Constructor
    // Car constructor class

    v.print(); //Vertual print from Vehicle class
    c.print(); //Car class


    Vehicle *v1 = new Vehicle;
    Vehicle *v2; //vehicle Class Constructor

    v2 = &c;
     //
     //now at runtime Function is calling
    v1 ->print(); //Vehicle class
    v2 ->print(); //car class <---------------------------------------------------Change are here-----------------------------
    return 0;
}