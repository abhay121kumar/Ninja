#include<iostream>
using namespace std;

int main()
{
    int i=10;
    int *p=&i;
    cout<<"size of integer"<<sizeof(i)<<endl;
    cout<<p<<endl;
    p = p + 1;
    cout<<p<<endl;//4 byte addeded
    p = p + 2;
    cout<<p<<endl;//8 byte addeded
     p = p - 2;
    cout<<p<<endl;//8 byte subtracted
cout<<endl;
    double d= 23.335;
    cout<<"size of doublr"<<sizeof(d)<<endl;
    double *dp = &d;
    cout<<dp<<endl;
    dp++;
    cout<<dp<<endl;// 8 byte added



    return 0;
}