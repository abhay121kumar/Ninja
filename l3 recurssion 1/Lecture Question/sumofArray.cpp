/*
@csalgo

Coding Problem
Problem Statement: Sum of array (recursive)
Problem Level: EASY
Problem Description:
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces

Output Format :
Sum

Constraints :
1 <= N <= 10^3

Sample Input 1 :
3
9 8 9

Sample Output 1 :
26

Sample Input 2 :
3
4 2 1

Sample Output 2 :
7

@csalgo
*/

#include<iostream>
using namespace std;

int Sum = 0;
int sumArray(int a[], int size)
{
    if(size==0)
    {
        return -1;
    }

    Sum = Sum + a[0];
    int smallSum = sumArray(a+1, size-1);
    return Sum;

}

int main()
{
    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    int a[size];
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }

    cout<<"Sum of array of an element"<<endl;
    cout<<sumArray(a,size)<<" "<<endl;
}