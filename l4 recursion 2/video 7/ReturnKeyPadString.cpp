/*
@csalgo

Coding Problem
Problem Statement: Return Keypad - String
Problem Level: HARD
Problem Description:
Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note : 1. The order of strings are not important.
2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
Input Format :
Integer n

Output Format :
All possible strings in different lines

Constraints :
1 <= n <= 10^6

Sample Input:
23

Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf

@csalgo
*/

#include <iostream>
#include <cmath>
using namespace std;

int copyu(string output[], int n, int l, string str[], int num)
{
    string a[n * l];
    int k = 0;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[k] = output[j] + str[num % 10][i];
            k++;
        }
    }

    for (int i = 0; i < n * l; i++)
    {
        output[i] = a[i];
    }
    return n * l;
}

int keypad(int num, string output[])
{
    string str[100] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    if (num == 0)
    {
        output[0] = "";
        return 1;
    }
    int smallnum = num / 10; // 234 // 23 // 2 // 0
    int n = keypad(smallnum, output);
    int l = str[num % 10].length();
    n = copyu(output, n, l, str, num);

    return n;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for (int i = 0; i < count && i < 10000; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}