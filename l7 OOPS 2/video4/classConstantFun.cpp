#include<iostream>
using namespace std;

class Fraction
{
    private:
    int numerator;
    int denominator;

    public:

    Fraction()
    {

    }

    Fraction(int numerator,int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    int getNumerator () const
    {
        return numerator;
    }
    int getDenominator () const
    {
        return denominator;
    }

    int setNumerator(int n)
    {
        numerator = n;
    }

    int setDenominator(int m)
    {
        denominator = m;
    }

    void print() const
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
    void add(Fraction f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        numerator = num;
        denominator = lcm;
        simplify();
    }
};