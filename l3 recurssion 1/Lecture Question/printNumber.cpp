/*
@csalgo

Coding Problem
Problem Statement: Print numbers
Problem Level: EASY
Problem Description:
Given is the code to print numbers from 1 to n in increasing order recursively.
But it contains few bugs that you need to rectify such that all the test cases pass.
Input Format :
Integer n

Output Format :
Numbers from 1 to n (separated by space)

Constraints :
1 <= n <= 10000

Sample Input 1 :
 6

Sample Output 1 :
1 2 3 4 5 6

Sample Input 2 :
 4

Sample Output 2 :
1 2 3 4

@csalgo
*/

#include<iostream>
using namespace std;

//                                Method -1

// void print(int n)
// {
//     if(n==0)
//     {
//         return;
//     }
//     print(n-1);
//     cout<<n<<" ";
// }

// int main()
// {
//     int n;
//     cin>>n;
//     if(1 <= n <= 10000)
//     print(n);
//     return 0;
// }


//                                 Method - 2
int print(int n)
{
    //write your code here
    if(n == 1)
    {
        cout<<n<<" ";
        return 0;
    }
    
    print(n-1);
    cout<<(n)<<" ";
}
int main()
{
    int n;
    cin >> n;
  
    print(n);
}