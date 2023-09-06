#include<iostream>
using namespace std;

/*
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


    void print()
    {
        cout<<"Vehicle Class print"<<endl;
    }
    ~Vehicle1()
    {
        cout<<"Vehicel Default Destructor"<<endl;
    }
};


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
        cout<<"Print Fun in Car Class"<<endl;
        cout<<"NumTyres"<<numTyre<<endl;
        cout<<"color"<<color<<endl;
        cout<<"NumGear"<<numGear<<endl;
    }
};




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

    // void print()
    // {
    //     cout<<"Print function in Bus class"<<endl;
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



// int main()
// {
//     Bus b;
//     return 0;
// }

/*
Vehicel Default Constructor
Car Class Default Constructor
Vehicel Default Constructor
Truck Class Default Constructor
Bus Class Default Constructor
Bus Class Default Destructor
Truck Class Default Destructor
Vehicel Default Destructor
Car Class Default Destructor
Vehicel Default Destructor
*/



// int main()
// {
//     Bus b;
//     b.print(); // error: request for member ‘print’ is ambiguous
//     /*
//     Now M-1 to avoid this ambiguity write print function in Bus class because we makw object of bus class then compiler first search for 
//     print function in base class then after if he did not find the print functipn in base class then it go for search for print fun in parent
//     class.
//     */
//     return 0;
// }

/*
Vehicel Default Constructor
Car Class Default Constructor
Vehicel Default Constructor
Truck Class Default Constructor
Bus Class Default Constructor
Print function in Bus class   <-------
Bus Class Default Destructor
Truck Class Default Destructor
Vehicel Default Destructor
Car Class Default Destructor
Vehicel Default Destructor
*/

/**/
// int main()
// {
//     Bus b;
//     // b.print(); // error: request for member ‘print’ is ambiguous
//     /*
//     Now M-1 to avoid this ambiguity write print function in Bus class because we makw object of bus class then compiler first search for 
//     print function in base class then after if he did not find the print functipn in base class then it go for search for print fun in parent
//     class.
//     */
//    /*
//    Now M-2 using Scope Resolution
//    First comment out print fun present in Bus class then Run the program
//    */
//     b.Car :: print();    
//     return 0;
// }

/*
Vehicel Default Constructor
Car Class Default Constructor
Vehicel Default Constructor
Truck Class Default Constructor
Bus Class Default Constructor
Print Fun in Car Class  <--------------------
NumTyres0
color
NumGear0
Bus Class Default Destructor
Truck Class Default Destructor
Vehicel Default Destructor
Car Class Default Destructor
Vehicel Default Destructor
*/

// */






// Using Virtual Keyword


/*
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


    void print()
    {
        cout<<"Vehicle Class print"<<endl;
    }
    ~Vehicle1()
    {
        cout<<"Vehicel Default Destructor"<<endl;
    }
};


class Car : virtual public Vehicle1
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
        cout<<"Print Fun in Car Class"<<endl;
        cout<<"NumTyres"<<numTyre<<endl;
        cout<<"color"<<color<<endl;
        cout<<"NumGear"<<numGear<<endl;
    }
};




class Truck : virtual public Vehicle1
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





class Bus : public Car,public Truck
{
    public:


    Bus() 
    {
        cout<<"Bus Class Default Constructor"<<endl;
    }

  



    ~Bus()
    {
        cout<<"Bus Class Default Destructor"<<endl;
    }
  
};



int main()
{
    Bus b;
    return 0;
}
/*
Vehicel Default Constructor
Car Class Default Constructor
Truck Class Default Constructor
Bus Class Default Constructor
Bus Class Default Destructor
Truck Class Default Destructor
Car Class Default Destructor
Vehicel Default Destructor
*/


// */


// Default Constructor Comment kar diye fir




class Vehicle1
{
    private:
    int maxSpeed;
    protected:
    int numTyre;
    public:
    string color;

    // Vehicle1()
    // {
    //     cout<<"Vehicel Default Constructor"<<endl;
    // }
    Vehicle1(int z)
    {
        maxSpeed = z;
        cout<<"Vehicel Parametrized Constructor"<<endl;
    }


    void print()
    {
        cout<<"Vehicle Class print"<<endl;
    }
    ~Vehicle1()
    {
        cout<<"Vehicel Default Destructor"<<endl;
    }
};


class Car : virtual public Vehicle1
{
    public:
    int numGear;

    Car() : Vehicle1(3)
    {
        cout<<"Car Class Default Constructor"<<endl;
    }
    ~Car()
    {
        cout<<"Car Class Default Destructor"<<endl;
    }
    void print()
    {
        cout<<"Print Fun in Car Class"<<endl;
        cout<<"NumTyres"<<numTyre<<endl;
        cout<<"color"<<color<<endl;
        cout<<"NumGear"<<numGear<<endl;
    }
};




class Truck : virtual public Vehicle1
{
    public:


    Truck() : Vehicle1(4)
    {
        cout<<"Truck Class Default Constructor"<<endl;
    }


    ~Truck()
    {
        cout<<"Truck Class Default Destructor"<<endl;
    }

};





class Bus : public Car,public Truck
{
    public:

    Bus() : Vehicle1(5)
    {
        cout<<"Bus Class Default Constructor"<<endl;
    }


    ~Bus()
    {
        cout<<"Bus Class Default Destructor"<<endl;
    }
};



int main()
{
    Bus b;
    return 0;
}
/*
Vehicel Parametrized Constructor
Car Class Default Constructor
Truck Class Default Constructor
Bus Class Default Constructor
Bus Class Default Destructor
Truck Class Default Destructor
Car Class Default Destructor
Vehicel Default Destructor
*/
