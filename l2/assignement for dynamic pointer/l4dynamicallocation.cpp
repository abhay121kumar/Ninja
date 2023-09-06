#include<iostream>
using namespace std;
int main()
{
    int *p = new int;// new keyword is used to use a memory in heap
    *p = 10;
    cout<<*p<<endl;

    double *dp = new double;
    char *cp = new char;

    int *ap = new int[50];
    int n;
    cout<<"Enter No of element of an array"<<endl;
    cin>>n;
    int *ap2 = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>ap2[i];
    }
   int max = -1;
    for(int i=0; i<n;i++)
    {
        if(max<ap2[i])
        {       
        max = ap2[i];
        }
    }
    cout<<max<<endl;
    return 0;
}