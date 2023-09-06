#include<iostream>
using namespace std;


/*
class Vehicle
{
    public:
    string color;

    Vehicle()
    {
        cout<<"Vehicle Class Constructor"<<endl;
    }
    // virtual void print() // <------------- Normal  Virtual Function
    // {
    //     cout<<"Vertual print from Vehicle class"<<endl;
    // }

    virtual void print() = 0; // <----------- Pure Virtual Function 
};


class Car : public Vehicle
{
    public:
    int numGears;

};

int main()
{
    // Vehicle v; //error: cannot declare variable ‘v’ to be of abstract type ‘Vehicle’

    Car c; //error: cannot declare variable ‘c’ to be of abstract type ‘Car’
             //because the following virtual functions are pure within ‘Car’:
    return 0;
}

*/








class Vehicle
{
    public:
    string color;

    Vehicle()
    {
        cout<<"Vehicle Class Constructor"<<endl;
    }
    // virtual void print() // <------------- Normal  Virtual Function
    // {
    //     cout<<"Vertual print from Vehicle class"<<endl;
    // }

    virtual void print() = 0; // <----------- Pure Virtual Function 
};


class Car : public Vehicle
{
    public:
    int numGears;

    void print()
    {
        cout<<"Car class Print function"<<endl;
    }
};

int main()
{
    // Vehicle v; //error: cannot declare variable ‘v’ to be of abstract type ‘Vehicle’

    Car c;  //Vehicle Class Constructor
    return 0;
}