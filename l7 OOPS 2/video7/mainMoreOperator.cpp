#include<iostream>
using namespace std;
#include "classMoreOperator.cpp"

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    // f1.print();//10/2
    // ++f1;
    // f1.print();//6/1


    // f1.print(); //10/2
    // Fraction f3 = ++f1;
    // f1.print();// 6/1
    // f3.print();// 6/1
    
    // f1.print(); //10/2
    // Fraction f3 = ++(++f1);
    // f1.print();// 6/1
    // f3.print();// 7/1



    f1.print(); //10/2
    Fraction f3 = ++(++f1);
    f1.print();// 7/1
    f3.print();// 7/1
    return 0;
}