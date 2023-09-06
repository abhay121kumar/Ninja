#include<iostream>
using namespace std;
int main()
{
    // while(true)
    // {
    //     int *p = new int;
    // }

    // while(true)
    // {
    //     int i = 10;
    //}

    int *p = new int;
    delete p;// single element deletion

    int *ap = new int[100];
    delete [] p;// array element deletion
}