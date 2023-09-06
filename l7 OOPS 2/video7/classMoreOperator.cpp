#include<iostream>
using namespace std;

class Fraction
{
    private:
    int numerator;
    int denominator;

    public:

    Fraction(int numerator,int denominator)
    {
        this->numerator=numerator;
        this->denominator=denominator;
    }
    void print()
    {
        cout<<numerator<<"/"<<denominator<<endl;
    }
    void simplify()
    {
        int gcd=1;
        int j = min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++)
        {
            if(this -> numerator % i == 0 && this -> denominator % i == 0){
            gcd = i;
            }
        }
        this->numerator = numerator/gcd;
        this->denominator = denominator/gcd;
    }
    
    // void operator++()
    // {
    //     numerator = numerator + denominator;
    //     simplify();
    // }

    // Fraction operator++()
    // {
    //     numerator = numerator + denominator;
    //     simplify();
    //     return *this;
    // }

    Fraction& operator++()
    {
        numerator = numerator + denominator;
        simplify();
        return *this;
    }
};