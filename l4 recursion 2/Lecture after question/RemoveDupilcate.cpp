/*
@csalgo

Coding Problem
Problem Statement: Remove Duplicates 
Problem Level: EASY
Problem Description:
Given a string S, remove consecutive duplicates from it recursively.
Input Format :
String S

Output Format :
Output string

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string

Sample Input 1 :
aabccba

Sample Output 1 :
abcba

Sample Input 2 :
xxxyyyzwwzzz

Sample Output 2 :
xyzwz

@csalgo
*/

#include<iostream>
using namespace std;

// void RemoveDuplicate(char str[])
// {
//     if(str[0]=='\0')
//     {
//         return;
//     }
//     if(str[0]!=str[1])
//     {
//         // cout<<str;
//         return RemoveDuplicate(str+1);
//     }
//     else
//     {
//         char i='\0';
//         int j=0;
//         while(i=='\0')
//         {
//             if(str[j] == '\0'){
//                 // i = '\0';
//                 break;
//             }
//             str[j]=str[j+1];
//             j++;   
//         }
//         return RemoveDuplicate(str);
//     }
// }


void RemoveDuplicate(char str[])
{
    if(str[0]=='\0')
    {
        return;
    }
    if(str[0]!=str[1])
    {
        return RemoveDuplicate(str+1);
    }
    else
    {
        for(int j=0;str[j]!='\0';j++)
        {
            str[j]=str[j+1];
        }
        return RemoveDuplicate(str);
    }
}
int main()
{
    char str[20];
    cin>>str;
    RemoveDuplicate(str);
    cout<<str<<endl;
    return 0;
}