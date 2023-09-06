#include<iostream>
using namespace std;

/*
class Vehicle
{
    private:
    int maxSpeed;
    protected:
    int numTyre;
    public:
    int color;



    void printVehivle()
    {
        cout<<"in vehical class"<<endl;
        cout<<"maxSpeed: "<<maxSpeed<<endl;
        cout<<"numTyre: "<<numTyre<<endl;
        cout<<"color: "<<color<<endl;
    }
};

class Car : public Vehicle
{
    public:
    int numGear;

    void printCar()
    {
        cout<<"in car class"<<endl;
        cout<<"numTyre: "<<numTyre<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"numGear: "<<numGear<<endl;
    }
};

class HondCity : public Car
{
    public:
    int honda;

    void printHonda()
    {
        cout<<"in HondCity class"<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"numGear: "<<numGear<<endl;
        cout<<"honda: "<<honda<<endl;
    }
};

*/
  // using protected
/*
class Vehicle
{
    private:
    int maxSpeed;
    protected:
    int numTyre;
    public:
    int color;



    void printVehivle()
    {
        cout<<"in vehical class"<<endl;
        cout<<"maxSpeed: "<<maxSpeed<<endl;
        cout<<"numTyre: "<<numTyre<<endl;
        cout<<"color: "<<color<<endl;
    }
};

class Car : protected Vehicle
{
    public:
    int numGear;

    void printCar()
    {
        cout<<"in car class"<<endl;
        cout<<"numTyre: "<<numTyre<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"numGear: "<<numGear<<endl;
    }
};



class HondCity : protected Car
{
    public:
    int honda;

    void printHonda()
    {
        cout<<"in HondCity class"<<endl;
        cout<<"numTyre: "<<numTyre<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"numGear: "<<numGear<<endl;
        cout<<"honda: "<<honda<<endl;
    }
};


*/



class Vehicle
{
    private:
    int maxSpeed;
    protected:
    int numTyre;
    public:
    int color;



    void printVehivle()
    {
        cout<<"in vehical class"<<endl;
        cout<<"maxSpeed: "<<maxSpeed<<endl;
        cout<<"numTyre: "<<numTyre<<endl;
        cout<<"color: "<<color<<endl;
    }
};

class Car : private Vehicle
{
    public:
    int numGear;

    void printCar()
    {
        cout<<"in car class"<<endl;
        cout<<"numTyre: "<<numTyre<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"numGear: "<<numGear<<endl;
    }
};



class HondCity : private Car
{
    public:
    int honda;

    void printHonda()
    {
        cout<<"in HondCity class"<<endl;
        // cout<<"numTyre: "<<numTyre<<endl; // error: ‘int Vehicle::numTyre’ is private within this context
        // cout<<"color: "<<color<<endl; //error: ‘int Vehicle::color’ is private within this context
        cout<<"numGear: "<<numGear<<endl;
        cout<<"honda: "<<honda<<endl;
    }
};








