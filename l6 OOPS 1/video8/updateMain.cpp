#include<iostream>
using namespace std;
#include "updateclassFraction.cpp"
/*
int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    Fraction f3(10,2);
    Fraction f4(15,4);

    f1.add(f2);

    f1.print();
    f2.print();

    f3.Multiply(f4);
    f3.print();
    f4.print();
    
    return 0;
}
*/

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();
    return 0;
}

/*
#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imaginary;
    // int real2;
    // int imaginary2;

    public:

    Complex c1(int real1,int imaginary1)
    {
        this->real = real1;
        this->imaginary = imaginary1;
    }
    Complex c2(int real2,int imaginary2)
    {
        this->real=real2;
        this->imaginary = imaginary2;
    }
    void print()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
  
    void add(Complex const &c2) // here changes done from previous video
    {
        int x = real1 + c2.real;
        int y = c1.imaginary + c2.imaginary;
        real = x;
        imaginary = y;
    }

    void Multiply(Complex const &c2)
    {
       
    }

};
*/