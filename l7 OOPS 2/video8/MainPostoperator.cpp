#include<iostream>
using namespace std;
#include "classPostOperator.cpp"

int main()
{
    // Fraction f1(10,2);
    // Fraction f2(15,4);
    // Fraction f3= f1++;
    // f1.print();//6/1
    // f3.print();//5/1


    // int i=5,j=3;
    // i+=j;
    // cout<<i<<" "<<j<<endl;//8 3
    // int k=5,l=3;
    // (k+=l)+=l;
    // cout<<k<<" "<<l<<endl;//11 3

    Fraction f1(10,3);
    Fraction f2(5,2);
    // f1+=f2;
    // f1.print();// 35/6 
    // f2.print();// 5/2


    (f1+=f2)+=f2;
    f1.print();// 25/3 
    f2.print();// 5/2

    return 0;
}