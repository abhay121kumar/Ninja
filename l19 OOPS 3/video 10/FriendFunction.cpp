#include<iostream>
using namespace std;


// class Bus
// {
//     public:
//     void print();
// };

// void test();
// class Truck
// {
//     private:
//     int x;
//     protected:
//     int y;
//     public:
//     int z;

//     // friend void Bus :: print();

//     // friend void test();

// };

// void Bus :: print()
// {
//     Truck t;
//     t.x=10;
//     t.y = 20;
//     cout<<t.x<<" "<<t.y<<endl;
// }
// void test()
// {
//     Truck t;
//     t.x=30;
//     t.y = 40;
//     cout<<t.x<<" "<<t.y<<endl;
// }

// int main()
// {
//     Bus b;
//     b.print(); // 10 20
//     test(); // 30 40
// }


class Bus
{
    public:
    void print();
    void print1();
    void print2();
    void print3();
};

void test();
class Truck
{
    private:
    int x;
    protected:
    int y;
    public:
    int z;

    // friend void Bus :: print();

    // friend void test();

    // Shortcut is ;)
    // creating friend class
     friend class Bus;  // if we create multiple function then insted of writing all time freind just wrtie like that
};

void Bus :: print()
{
    Truck t;
    t.x=10;
    t.y = 20;
    cout<<t.x<<" "<<t.y<<endl;
}
void Bus :: print1()
{
    Truck t;
    t.x=10;
    t.y = 20;
    cout<<t.x<<" "<<t.y<<endl;
}
void Bus :: print2()
{
    Truck t;
    t.x=10;
    t.y = 20;
    cout<<t.x<<" "<<t.y<<endl;
}
void Bus :: print3()
{
    Truck t;
    t.x=10;
    t.y = 20;
    cout<<t.x<<" "<<t.y<<endl;
}
// void test()
// {
//     Truck t;
//     t.x=30;
//     t.y = 40;
//     cout<<t.x<<" "<<t.y<<endl;
// }

int main()
{
    Bus b;
    // b.print(); // 10 20
    // test(); // 30 40

     b.print();
     b.print1();
     b.print2();
     b.print3();
}

