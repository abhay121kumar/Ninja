#include<iostream>
using namespace std;

int test(int a,int b)
{
    cout<<"Function with two argumnet"<<endl;
}
int test(int a)
{

    cout<<"Function with one argumnet"<<endl;
}
int test()
{
    cout<<"Function with no argumnet"<<endl;
    
}
int main()
{
    test(1,2);
    test(1);
    test();
    return 0;
}

/*
Function with two argumnet
Function with one argumnet
Function with no argumnet
*/