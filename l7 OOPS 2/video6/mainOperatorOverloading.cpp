#include<iostream>
using namespace std;
#include "classOperatorOverloading.cpp"

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    Fraction f3=f1.add(f2); 
    f1.print();
    f2.print();
    f3.print();
    Fraction f4 = f1 + f2;
    f4.print();
    // Fraction 
    Fraction f5 = f1 * f2;
    f5.print();
    // Fraction f6 = f1 ==f2;
    if(f1==f2)
    {
        cout<<"equal"<<endl;
    }
    else
    {
        cout<<"not equal"<<endl;
    }
    return 0;
}