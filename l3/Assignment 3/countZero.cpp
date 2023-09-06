/*
@csalgo

Chapter Assignment
Problem Statement: Count Zeros
Problem Level: EASY
Problem Description:
Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
Input Format :
Integer N

Output Format :
Number of zeros in N

Constraints :
0 <= N <= 10^9

Sample Input 1 :
10204

Sample Output 1 :
2

Sample Input 2 :
708000

Sample Output 2 :
4



=====Answer=====
Correct Option: 

@csalgo 
*/


#include<iostream>
using namespace std;
int count=0;
int countZero(int x)
{
    if(x == 0)
    return 0;
    int smallcountZero = countZero(x/10);
    if(x%10 == 0)
    {
        count = count +1;
        return count;
    }
    return smallcountZero;

}

// try with this input this make intresting- 001 ;)
int main()
{
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    cout<<countZero(n)<<endl;
    // cout<<001/10<<endl;//0
    // cout<<001%10<<endl;//1
    //  cout<<1%10<<endl;//1
    // cout<<1329/10<<endl;//132
    // cout<<708000/10<<endl;//70800
    // cout<<70800/10<<endl;//7080
    // cout<<7080/10<<endl;//708
    // cout<<708/10<<endl;//70
    // cout<<70/10<<endl;//7
    // cout<<7/10<<endl;//0
    // cout<<endl;
    // cout<<708000%10<<endl;//0
    // cout<<70800%10<<endl;//0
    // cout<<7080%10<<endl;//0
    // cout<<708%10<<endl;//8
    // cout<<70%10<<endl;//0
    // cout<<7%10<<endl;//7
    return 0;
}
