#include<iostream>
using namespace std;

void increment1(int **p)
{
    p = p + 1;
}

void increment2(int **p)
{
    *p = *p + 1;
}

void increment3(int **p)
{
    **p = **p + 1;
}

int main()
{
    int i = 10;
    int *p = &i;
    int **dp = &p;

    cout<<&p<<endl;
    cout<<dp<<endl;

    cout<<endl;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*dp<<endl;

    cout<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**dp<<endl;

    cout<<endl;

    increment1(*p);
    increment2(*p);
    increment3(*p);
    return 0;
}