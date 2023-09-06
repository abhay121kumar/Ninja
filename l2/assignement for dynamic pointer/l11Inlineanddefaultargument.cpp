#include<iostream>
using namespace std;

// method -3 without using inline
// int Max(int a, int b)
// {
//     return (a > b) ? a : b ;
// }

// method -4 using inline 
inline int Max(int a, int b)
{
    return (a > b) ? a : b ; // ab ya pura body copy past ho jaye ga jaha ve hm max function usr kare ge
}

int main()
{
    int a,b;
    cin>>a>>b;
    //find max of a,b
    //Method -1
    /*
    int c;
    if(a>b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    */

   // method -2
   // int c = (a>b)?a:b;

   // Method -3 

   int c = max(a,b);

   int x,y;
   cin>>x>>y;
   int z = max(x,y);
}