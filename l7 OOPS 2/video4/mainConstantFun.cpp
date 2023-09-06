#include<iostream>
using namespace std;
#include "classConstantFun.cpp"
int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);

    Fraction const f3; // you can call only constant function
    cout<<f3.getNumerator()<<" "<<f3.getDenominator()<<endl;
    // Fraction f3(10);
    return 0;
}