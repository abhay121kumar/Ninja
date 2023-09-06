#include<iostream>
using namespace std;
/*
class Complex
{
    private:
    int real;
    int imaginary;

    public:

    Complex(int real,int imaginary)
    {
        this->real=real;
        this->imaginary = imaginary;
    }
    void print1()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    void print2()
    {
        cout<<real<<"*"<<imaginary<<"i"<<endl;
    }
  
    void add(Complex const &c1,Complex const &c2) // here changes done from previous video
    {
        int x = c1.real + c2.real;
        int y = c1.imaginary + c2.imaginary;
        this->real = x;
        this->imaginary = y;
    }

    void Multiply(Complex const &c1,Complex const &c2)
    {
        int x = c1.real * c2.real;
        int y = c1.imaginary * c2.imaginary;
        this->real = x;
        this->imaginary = y;
    }

};
*/
class Complex
{
    private:
    int real;
    int imaginary;

    public:

    Complex(int real,int imaginary)
    {
        this->real=real;
        this->imaginary = imaginary;
    }
    void print1()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    void print2()
    {
        cout<<real<<"*"<<imaginary<<"i"<<endl;
    }
  
    void add(Complex const &c2) // here changes done from previous video
    {
        // int x = real + c2.real; 
        // int y = imaginary + c2.imaginary;
        // this->real = x;
        // this->imaginary = y;
        //or
        real = real + c2.real;
        imaginary = imaginary + c2.imaginary;
    }

    void Multiply(Complex const &c2)
    {
        // int x = real * c2.real;
        // int y = imaginary * c2.imaginary;
        // this->real = x;
        // this->imaginary = y;
        //or
        real = real * c2.real;
        imaginary = imaginary * c2.imaginary;
    }

};