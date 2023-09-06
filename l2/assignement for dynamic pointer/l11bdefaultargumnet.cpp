#include<iostream>
using namespace std;

int sum(int a[], int size, int si=0) // si is a default argument
{
    int ans = 0;
    for(int i = si; i<size; i++)
    {
        ans = ans + a[i];
    }
    return ans;
}

int sum2(int a, int b=0, int c=0, int d=0) // b,c,d are default argument
{
    return a+b+c+d;
}

int main()
{
    int a[5];
    for(int i =0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<sum(a,5)<<endl;
    int k=10;
    cout<<sum2(k)<<endl;
}