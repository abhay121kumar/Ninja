#include<iostream>
using namespace std;

int main()
{
    // int a;
    // cout<<&a<<endl;

//     int a;
//     int *p=&a;
//     cout<<"integer"<<&a<<endl;
//     cout<<"integer"<<p<<endl;
//     cout<<"address of pointer"<<" "<<*p;
// cout<<endl;
//     float f = 23.23;
//     float *pf = &f;
// cout<<endl;
//     double d = 23.1234;
//     double *df = &d;

//     cout<<"float"<<" "<<&f<<endl;
//     cout<<"float"<<" "<<pf<<endl;
// cout<<endl;
//     cout<<"double"<<" "<<&d<<endl;
//     cout<<"double"<<" "<<df<<endl;


// int i=10;
// int *p=&i;
// cout<<sizeof(i)<<endl;//4
// cout<<sizeof(p)<<endl;//8
// cout<<i<<endl;
// cout<<*p<<endl;
// i++;
// cout<<endl;
// cout<<i<<endl;
// cout<<*p<<endl;

// // int a=i;
// // a++;
// cout<<endl;

// int a=*p;
// a++;
// cout<<a<<endl;//12
// cout<<*p<<endl;//11

// cout<<endl;
// cout<<endl;

// int j=12;
// cout<<j<<endl;//12
// cout<<*p<<endl;//11

// *p=23;
// cout<<j<<endl;//12
// cout<<*p<<endl;//23
// cout<<endl;
// (*p)++;
// cout<<i<<endl;//24
// cout<<*p<<endl;//24



int i;
cout<<i<<endl;

int *p;
cout<<p<<endl;//0
cout<<*p<<endl;//0
(*p)++;//Segmentation fault (core dumped)
//cout<<i<<endl;
//cout<<*p<<endl;

    return 0;
}