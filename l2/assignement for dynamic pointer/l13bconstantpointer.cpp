#include<iostream>
using namespace std;

void g(int const &a)
{
    a++;//ncrement of read-only reference ‘a’
}

// void fun(int const *p)
// {
//     (*p)++;// error - increment of read-only location ‘* p’
// }

int main()
{
    int const a = 10;
    //int *p = &a;// we can not able to do like that
    int const *p = &a;

    int j1 = 10;
    int *p3 = &j1;
    //fun(p3);
    g(j1);

    int j = 12;
    int const *p2 = &j;
    cout<<*p2<<endl;
    j++;
    cout<<*p2<<endl;    
}