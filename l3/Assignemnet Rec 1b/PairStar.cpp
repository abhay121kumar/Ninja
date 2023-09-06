/*
@csalgo

Chapter Assignment
Problem Statement: Pair star
Problem Level: MEDIUM
Problem Description:
Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated 
from each other by a "*".
Input format :
String S

Output format :
Modified string

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
hello

Sample Output 1:
hel*lo

Sample Input 2 :
aaaa

Sample Output 2 :
a*a*a*a



=====Answer=====
Correct Option: 

@csalgo
*/


#include<iostream>
#include<cstring>
using namespace std;

string PairStar(string s,int i,int size)
{
    string str = "";
    if(i==size)
    {
        return str;
    }
    else
    {
        if(s[i]==s[i+1])
        {
           str = str + s[i];
            if(s[i+1]!='\0')
            {
               str = str + "*";
           }
            str = str + PairStar(s,i+1,size);
            return str;
        }
        else
        {
            str = str + s[i];
            str = str + PairStar(s,i+1,size);
           return str;
        }
    }
}

int main()
{
    // char c[] = {"hello"};
    int size;
    cin>>size;
    char c[size];
    cin>>c;
    cout<<PairStar(c,0,size)<<endl;
    return 0;
}









/*
int main()
{
    // char c[] = {"hello"};
    int size;
    cin>>size;
    // cout<<size<<endl;
    char c[size];
    int a[size];
    cout<<sizeof(a)<<endl;
    cout<<sizeof(c)<<endl;
    // size = strlen(c);
    // cout<<size<<endl;
    // cin>>c;
    // cout<<PairStar(c,0,size)<<endl;
    return 0;
}
*/