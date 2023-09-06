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
    Fraction add(Fraction const &f2) 
    {
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        // numerator = num;
        // denominator = lcm;
        // simplify();
        Fraction fnew(num,lcm);
        fnew.simplify();
        return fnew;
    }
    Fraction operator+(Fraction const &f2) const
    {
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        Fraction fnew(num,lcm);
        fnew.simplify();
        return fnew;
    }
    Fraction operator*(Fraction const &f2) const
    {
        int n=numerator * f2.numerator;
        int d=denominator *f2.denominator;
        Fraction fnew(n,d);
        fnew.simplify();
        return fnew;
    }

    bool operator==(Fraction const &f2) const
    {
        return (numerator==f2.numerator && denominator ==f2.denominator);
    }

};