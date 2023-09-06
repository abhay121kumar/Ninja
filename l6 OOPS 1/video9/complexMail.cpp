#include<iostream>
using namespace std;
#include "complexClass.cpp"

//method-1
/*
int main()
{
    int real1,imaginary1,real2,imaginary2;
    cin>>real1>>imaginary1;
    cin>>real2>>imaginary2;

    Complex c1(real1,imaginary1);
    Complex c2(real2,imaginary2);

    int choise;
    cin>>choise;
    if(choise==1)
    {
        c1.add(c1,c2);
        c1.print1();
    }
    else if(choise==2)
    {
        c1.Multiply(c1,c2);
        c1.print2();
    }
    else
    {
        return 0;
    }
    // return 0;
}
*/


int main()
{
    int real1,imaginary1,real2,imaginary2;
    cin>>real1>>imaginary1;
    cin>>real2>>imaginary2;

    Complex c1(real1,imaginary1);
    Complex c2(real2,imaginary2);

    int choise;
    cin>>choise;
    if(choise==1)
    {
        c1.add(c2);
        c1.print1();
    }
    else if(choise==2)
    {
        c1.Multiply(c2);
        c1.print2();
    }
    else
    {
        return 0;
    }
    // return 0;
}