/*
@csalgo

Chapter Assignment
Problem Statement: Print Subsets of Array
Problem Level: HARD
Problem Description:
Given an integer array (of length n), find and print all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should 
remain same as in the input array.
Note : The order of subsets are not important. Just print the subsets in different lines.
Input format :
Line 1 : Integer n, Size of array
Line 2 : Array elements (separated by space)

Constraints :
1 <= n <= 15

Sample Input:
3
15 20 12

Sample Output:
[] (this just represents an empty array, don't worry about the square brackets)
12 
20 
20 12 
15 
15 12 
15 20 
15 20 12



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
using namespace std;

void PrintSubsetofArray(int input[],int n,int output[][20],int m)
{
    if(n==1)
    {
        cout<<"[]";
    }
    PrintSubsetofArray(input+1,n-1,output,m+1);
    
}

int main()
{
    return 0;
}