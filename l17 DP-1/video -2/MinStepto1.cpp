/*
@csalgo

Coding Problem
Problem Statement: Min Steps to one
Problem Level: EASY
Problem Description:
Given a positive integer 'n',  find and return the minimum number of steps that 'n' has to take to get reduced to 1. You can perform any one of the following 3 steps:
1.) Subtract 1 from it. (n = n - ­1) ,
2.) If its divisible by 2, divide by 2.( if n % 2 == 0, then n = n / 2 ) ,
3.) If its divisible by 3, divide by 3. (if n % 3 == 0, then n = n / 3 ).

Write brute-force recursive solution for this.
Input format :
The first and the only line of input contains an integer value, 'n'.

Output format :
Print the minimum number of steps.

Constraints :
1 <= n <= 200

Time Limit: 1 sec

Sample Input  1 :
4

Sample Output  1 :
2

Explanation of Sample Output 1 :
For n = 4
Step 1 :  n = 4 / 2  = 2
Step 2 : n = 2 / 2  =  1

Sample Input  2 :
7

Sample Output  2 :
3

Explanation of Sample Output 2 :
For n = 7
Step 1 :  n = 7 ­- 1 = 6
Step 2 : n = 6  / 3 = 2
Step 3 : n = 2 / 2 = 1

@csalgo
*/

#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int MinStepTo1_1(int n)
{
    int count = 1;

    if (n % 2 == 0)
    {
        while (n / 2 != 1)
        {
            count += 1;
            n = n / 2;
        }
    }
    else if (n % 3 == 0)
    {
        while (n / 3 != 1)
        {
            count += 1;
        }
        n = n / 3;
    }
    else
    {
        count+=1;
        n = n - 1;
        if (n % 2 == 0)
        {
            while (n / 2 != 1)
            {
                count += 1;
                n = n / 2;
            }
        }
        // else if (n % 3 == 0)
        // {
        //     while (n / 3 != 1)
        //     {
        //         count += 1;
        //     }
        //     n = n / 3;
        // }
    }

    return count;
}

int MinStepTo1_1_M_2(int n,int x,int y,int z){

    if(n<=1){
        return 0;
    }
    if(n%2 == 0){
        x=n/2;
    }
    if(n%3 == 0){
        y=n/3;
    }
    if(n%2 != 0 && n%3 != 0){
        z=n-1;
    }
    n = min(x,min(y,z));
    int ans = MinStepTo1_1_M_2(n,x,y,z) + 1;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << MinStepTo1_1(n) << endl;
    cout << MinStepTo1_1_M_2(n,INT_MAX,INT_MAX,INT_MAX) << endl;
    return 0;
}