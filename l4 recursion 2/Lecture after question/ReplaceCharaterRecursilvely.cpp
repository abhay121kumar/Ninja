/*
@csalgo

Coding Problem
Problem Statement: Replace character recursively
Problem Level: EASY
Problem Description:
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 
in the given string.
Do this recursively.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)

Output Format :
Updated string

Constraints :
1 <= Length of String S <= 10^6

Sample Input :
abacd
a x

Sample Output :
xbxcd

@csalgo
*/

#include<iostream>
#include<cstring>
using namespace std;

//                                                             Method -1
// void ReplaceCharater(char str[])
// {
//     if(str[0]=='\0')
//     {
//         return;
//     }
//     if(str[0]!='a')
//     {
//         return ReplaceCharater(str+1);
//     }
//     else
//     {
//         str[0]='x';
//         return ReplaceCharater(str+1);
//     }
// }
// int main()
// {
//     char str[20];
//     cin>>str;
//     // char c1,c2;
//     // cin>>c1>>c2;
//     ReplaceCharater(str);
//     cout<<str<<endl;
// }

//                                                 Method -2


// void ReplaceCharater(char str[],char c1,char c2)
// {
//     if(str[0]=='\0')
//     {
//         return;
//     }
//     if(str[0]!=c1)
//     {
//         return ReplaceCharater(str+1,c1,c2);
//     }
//     else
//     {
//         str[0]=c2;
//         return ReplaceCharater(str+1,c1,c2);
//     }
// }
// int main()
// {
    // char str[20];
    // cin>>str;
    // char c1,c2;
    // cin>>c1>>c2;
    // ReplaceCharater(str,c1,c2);
    // cout<<str<<endl;
// }


//                              Method -3

int main()
{
    // char str[20];
    // cin>>str;
    // char c1,c2;
    // cin>>c1>>c2;
     char str[20],c1,c2;
    cin>>str;
    cout<<"Enter character that have to replace"<<endl;
    cin>>c1>>c2;
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==c1)
        {
            str[i]=c2;
            i++;
        }
        else
        {
            i++;
        }
    }
    // for(int i=0;i!='\0';i++)
    // {
    //     if(str[i]==c1)
    //     {
    //         str[i]=c1;
    //     }
    //     else

    // }
    cout<<str<<endl;
    return 0;
}

