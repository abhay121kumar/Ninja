#include<iostream>
using namespace std;


class Vehicle1
{
    private:
    int maxSpeed;
    protected:
    int numTyre;
    public:
    string color;

    Vehicle1()
    {
        cout<<"Vehicel Default Constructor"<<endl;
    }
    // Vehicle1(int z)
    // {
    //     maxSpeed = z;
    //     cout<<"Vehicel Parametrized Constructor"<<endl;
    // }

    ~Vehicle1()
    {
        cout<<"Vehicel Default Destructor"<<endl;
    }
};