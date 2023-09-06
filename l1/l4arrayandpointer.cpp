#include<iostream>
using namespace std;

int main()
{
    int a[10];
    cout<<a<<endl;
    cout<<&a<<endl;

    a[0] = 5;
    a[1] = 4;
    cout<<*a<<endl;//5
    cout<<*(a+0)<<endl;//5
    cout<<*(a+1)<<endl;//4

    cout<<endl;

    int *p = &a[0];
    cout<<p<<endl;
    cout<<a<<endl;
    cout<<endl;
    cout<<&p<<endl;
    cout<<&a<<endl;
    cout<<endl;
    cout<<sizeof(p)<<endl;//8 pointer ki size
    cout<<sizeof(a)<<endl;//40 array is size

    cout<<p<<endl;
    p = p+1;
    cout<<p<<endl;
    //a = a + 1;//we can not do like that a ko reassign nhi kar shak te hain
    //a++; // ya ve allowed nhi hai
    


    return 0;
}