/*
@csalgo

Chapter Assignment
Problem Statement: Sum of digits (recursive)
Problem Level: EASY
Problem Description:
Write a recursive function that returns the sum of the digits of a given integer.
Input format :
Integer N

Output format :
Sum of digits of N

Constraints :
0 <= N <= 10^9

Sample Input 1 :
12345

Sample Output 1 :
15

Sample Input 2 :
9

Sample Output 2 :
9



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
#include<string>
using namespace std;

// int SumOfDigit(int a[],int size,int i,int j)
// {
//     if(size==0)
//     {
//         return 0;
//     }
//     if(i<size)
//     {
//         j = j + a[i];
//         i++;
//     }
//     else
//     {
//         return j;
//     }
//      return SumOfDigit(a,size,i,j);
//     // int smallSum =  SumOfDigit(a,size,i,j);
//     // return j;
    
// }
// int main()
// {
//     int size;
//     cin>>size;
//     int a[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<SumOfDigit(a,size,0,0)<<endl;


//     return 0;
// }







int SumOfDigit(int a)
{
    if(a>0)
    {
        return a%10 + SumOfDigit(a/10);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int size;
    cin>>size;
    
    cout<<SumOfDigit(size)<<endl;
    return 0;
}