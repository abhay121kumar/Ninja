/*
@csalgo

Chapter Assignment
Problem Statement: Staircase
Problem Level: EASY
Problem Description:
A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. 
Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.
Input format :
Integer N

Output Format :
Integer W

Constraints :
1 <= N <= 30

Sample Input 1 :
4

Sample Output 1 :
7

Sample Input 2 :
5

Sample Output 2 :
13



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
using namespace std;

int StairCase(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    else
    {
        return StairCase(n-1)+StairCase(n-2)+StairCase(n-3);
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<StairCase(n)<<endl;
}