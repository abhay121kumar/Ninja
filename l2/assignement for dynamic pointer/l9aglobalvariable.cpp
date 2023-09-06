#include<iostream>
using namespace std;

int a; // global variable

void g()
{
    a++;
    cout<<a<<endl;//12
}

void f()
{
    a++;
    cout<<a<<endl;//11
    g();
}

int main()
{
    a = 10;
    f();
    cout<<a<<endl;//12
}