/*
@csalgo

Chapter Assignment
Problem Statement: String to Integer
Problem Level: MEDIUM
Problem Description:
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric 
string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")

Output format :
Corresponding integer N (int, Eg. 1234)

Constraints :
0 <= |S| <= 9
where |S| represents length of string S.

Sample Input 1 :
1231

Sample Output 1 :
1231

Sample Input 2 :
12567

Sample Output 2 :
12567



=====Answer=====
Correct Option: 

@csalgo
*/


#include<iostream>
#include<cstring>
using namespace std;    

int StringToInteger(string s,int i,int num)
{
    int x=0;
    if(i==s.length()-1)
    {
        x=s[i];
        x= x-48;
        num = num + x;
        return num;
    }
    else
    {
        x = s[i];
        x = x -48;
        num = num + x;
        return StringToInteger(s,i+1,num*10);
    }
}
int main()
{
    int n;
    cin>>n;
    char c[n];
    cin>>c;
    // int size = strlen(c);
    int ans = StringToInteger(c,0,0);
    cout<<ans<<endl;
    // cout<<StringToInteger(c,0,0)<<endl;
}
/*
int main ()
{
    int a='1';
    char c;
    cout << "Enter a character : ";
    cin >> c;
    // cout << "Enter a integer : ";
    // cin >> a;
    cout << "ASCII value of " << c <<" is :  " << (int)c<<endl;
    cout << "ASCII value of " << a <<" is :  " << (int)a<<endl;
    return 0;
}
*/