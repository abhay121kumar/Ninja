/*
@csalgo

Chapter Assignment
Problem Statement: Check AB
Problem Level: MEDIUM
Problem Description:
Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was generated using the
 following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'

If all the rules are followed by the given string, return true otherwise return false.
Input format :
String S

Output format :
'true' or 'false'

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
abb

Sample Output 1 :
true

Sample Input 2 :
abababa

Sample Output 2 :
false



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
#include<cstring>
using namespace std;

bool CheckAB(string s,int size,int i,int x)
{
    if(size==i)
    {
        return false;
    }
    else if(s[i]=='a')
    {
        
        if(s[i]=='a' && (s[i+1]!='b'))
        // if(s[i]=='a')
        {
            CheckAB(s,size,i+1,x);
            return true;
        }
        else if(s[i]=='a' && (s[i+1]=='b' && s[i+2]=='b'))
        {
            CheckAB(s,size,i+1,x);
            return true;
        }
        else
        {
            CheckAB(s,size,i+1,x);
            return false;
        }
    }
    else
    {
        CheckAB(s,size,i+1,x);
        return false;
    }
}
int main()
{
    int size;
    cin>>size;
    char c[size];
    cin>>c;
    cout<<CheckAB(c,size,0,0)<<endl;
    return 0;
}
