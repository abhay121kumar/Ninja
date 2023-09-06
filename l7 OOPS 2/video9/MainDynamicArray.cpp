#include<iostream>
using namespace std;
#include "classDynamicArray.cpp"

int main()
{
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.print();

    DynamicArray d2(d1); // copy constructor internally they do shallow copy
    DynamicArray d3;
    d3 = d1; // copy assignment operator internally they do shallow copy
    d1.add(0,100);
    cout<<"d2"<<endl;
    d2.print();
    cout<<"d3"<<endl;
    d3.print();
    cout<<"d1"<<endl;
    d1.print();
    return 0;
}