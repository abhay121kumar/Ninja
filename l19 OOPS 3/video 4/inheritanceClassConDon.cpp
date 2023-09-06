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
    string color;

    Vehicle()
    {
        cout<<"Vehicel Default Constructor"<<endl;
    }

    ~Vehicle()
    {
        cout<<"Vehicel Default Destructor"<<endl;
    }
};

class Car : public Vehicle
{
    public:
    int numGear;

    Car() // implicitly calling default constructor of vehicle
    {
        cout<<"Car Class Default Constructor"<<endl;
    }
    ~Car()
    {
        cout<<"Car Class Default Destructor"<<endl;
    }
};

*/


/*

class Vehicle
{
    private:
    int maxSpeed;
    protected:
    int numTyre;
    public:
    string color;

    Vehicle()
    {
        cout<<"Vehicel Default Constructor"<<endl;
    }

    Vehicle(int z)
    {
        maxSpeed = z;
        cout<<"Vehicel Parametrized Constructor"<<endl;
    }

    ~Vehicle()
    {
        cout<<"Vehicel Default Destructor"<<endl;
    }
};

class Car : public Vehicle
{
    public:
    int numGear;

    Car() : Vehicle(5)  // explicitly calling parametrized constructor of Vehicle
    {
        cout<<"Car Class Default Constructor"<<endl;
    }
    ~Car()
    {
        cout<<"Car Class Default Destructor"<<endl;
    }
};

*/


/*
class Vehicle
{
    private:
    int maxSpeed;
    protected:
    int numTyre;
    public:
    string color;

    // Vehicle()
    // {
    //     cout<<"Vehicel Default Constructor"<<endl;
    // }

    Vehicle(int z)
    {
        maxSpeed = z;
        cout<<"Vehicel Parametrized Constructor"<<endl;
    }

    ~Vehicle()
    {
        cout<<"Vehicel Default Destructor"<<endl;
    }
};

class Car : public Vehicle
{
    public:
    int numGear;

    Car(int x) : Vehicle(x)  // now it is neccessary to call explicitly  parametrized constructor of Vehicle because there is no default constructor of vehicle
    {
        cout<<"Car Class Default Constructor"<<endl;
    }
    ~Car()
    {
        cout<<"Car Class Default Destructor"<<endl;
    }
};

*/




/*
class Vehicle
{
    private:
    int maxSpeed;
    protected:
    int numTyre;
    public:
    string color;

    // Vehicle()
    // {
    //     cout<<"Vehicel Default Constructor"<<endl;
    // }

    Vehicle(int z)
    {
        maxSpeed = z;
        cout<<"Vehicel Parametrized Constructor"<<endl;
    }

    ~Vehicle()
    {
        cout<<"Vehicel Default Destructor"<<endl;
    }
};

class Car : public Vehicle
{
    public:
    int numGear;

    Car(int x) : Vehicle(x)  // now it is neccessary to call explicitly  parametrized constructor of Vehicle because there is no default constructor of vehicle
    {
        cout<<"Car Class Parametized Constructor"<<endl;
    }
    ~Car()
    {
        cout<<"Car Class Default Destructor"<<endl;
    }
};
class HondaCity : public Car
{
    public:
    int numGear;

    HondaCity() : Car(5)  // now it is neccessary to call explicitly  parametrized constructor of Car because there is no default constructor of vehicle
    {
        cout<<"HondaCity Class Default Constructor"<<endl;
    }
    ~HondaCity()
    {
        cout<<"HondaCity Class Default Destructor"<<endl;
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
    string color;

    // Vehicle()
    // {
    //     cout<<"Vehicel Default Constructor"<<endl;
    // }

    Vehicle(int z)
    {
        maxSpeed = z;
        cout<<"Vehicel Parametrized Constructor"<<endl;
    }

    ~Vehicle()
    {
        cout<<"Vehicel Default Destructor"<<endl;
    }
};

class Car : public Vehicle
{
    public:
    int numGear;

    Car(int x,int y) : Vehicle(x)  // now it is neccessary to call explicitly  parametrized constructor of Vehicle because there is no default constructor of vehicle
    {
        numGear = y;
        cout<<"Car Class Parametized Constructor"<<endl;
    }
    ~Car()
    {
        cout<<"Car Class Default Destructor"<<endl;
    }
};
class HondaCity : public Car 
{
    public:
    int numGear;

    HondaCity(int x,int y) : Car(x,y)  // now it is neccessary to call explicitly  parametrized constructor of Car because there is no default constructor of vehicle
    {
        cout<<"HondaCity Class Parametrized Constructor"<<endl;
    }
    ~HondaCity()
    {
        cout<<"HondaCity Class Default Destructor"<<endl;
    }
};




























