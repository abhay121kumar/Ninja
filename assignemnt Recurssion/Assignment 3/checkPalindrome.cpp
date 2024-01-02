/*
@csalgo

Chapter Assignment
Problem Statement: Check Palindrome (recursive)
Problem Level: MEDIUM
Problem Description:
Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S

Output Format :
'true' or 'false'

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
racecar

Sample Output 1:
true

Sample Input 2 :
ninja

Sample Output 2:
false



=====Answer=====
Correct Option: 

@csalgo
*/


#include<iostream>
#include<string>
using namespace std;

bool Checkpalindrome(string s,int size,int front, int end)
{
    if(size==0)
    {
    return false;
    }
    bool smallPalindrome = Checkpalindrome(s,size-1,front+1,end-1);
    if(front == end)
    {
        return true;
    }
    if(front<end)
    {
        if(s[front]==s[end])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return smallPalindrome;
}
int main()
{
    string s;
    int first,end;
    //s = "racecar";
    cout<<"Enter  name"<<endl;
    cin>>s;
    int size = s.length();
    cout<<Checkpalindrome(s,size,0,size-1)<<endl;
    return 0;
}















