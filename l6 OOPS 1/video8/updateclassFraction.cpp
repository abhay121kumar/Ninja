#include<iostream>
using namespace std;
/*
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
    }void simplify()
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
    void add(Fraction const &f2) // here changes done from previous video
    {
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        numerator = num;
        denominator = lcm;
        simplify();
    }

    void Multiply(Fraction const &f3)
    {
        // int x = numerator * f3.numerator;
        // int y = denominator * f3.denominator;
        // numerator =x;
        // denominator = y; 
        // or
        numerator = numerator * f3.numerator;
        denominator = denominator * f3.denominator;
        simplify();
    }


};
  

*/


 class Fraction
 {
    private:
    int numerator;
    int denominator;

    public:

    Fraction(int numerator,int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print()
    {
        cout<<numerator<<"/"<<denominator<<endl;
    }
    
    void simplify()  // ya ptint nhi ho raha hai ;)
    {
        int gcd=1;
        int j = min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++)
        {
            if(this->numerator % i == 0 && this -> denominator % i == 0)
            {
                gcd = i;
            }
        }
        this->numerator = this->numerator/gcd;
        this->denominator = this->denominator/gcd;
        // cout<<numerator<<endl;
        // cout<<denominator<<endl;
    }
 
    void add(Fraction const &f2)
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