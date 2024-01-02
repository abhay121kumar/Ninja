/*
@csalgo

Chapter Assignment
Problem Statement: Remove X
Problem Level: MEDIUM
Problem Description:
Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S

Output format :
Modified String

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S.

Sample Input 1 :
xaxb

Sample Output 1:
ab

Sample Input 2 :
abc

Sample Output 2:
abc

Sample Input 3 :
xx

Sample Output 3:



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
#include<cstring>
using namespace std;


string f(string s,int i,int n)
{
    string str="";
    if(i==n)
    {
        return str;
    }
    else
    {
        if(s[i]=='x')
        {
            return f(s,i+1,n);
        }
        else
        {
            return s[i]+f(s,i+1,n);
        }
    }
}

int main()
{
    // char c[] = {'a','b','c'};
    // char c[] = {'x','x'};
    char c[] = {'x','a','x','b'};
    int n = strlen(c);

    cout<<f(c,0,n)<<endl;
}

