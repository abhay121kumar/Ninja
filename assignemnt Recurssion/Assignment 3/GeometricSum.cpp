/*
@csalgo

Chapter Assignment
Problem Statement: Geometric Sum
Problem Level: MEDIUM
Problem Description:
Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)

using recursion.
Input format :
Integer k

Output format :
Geometric sum

Constraints :
0 <= k <= 1000

Sample Input 1 :
3

Sample Output 1 :
1.875

Sample Input 2 :
4

Sample Output 2 :
1.93750



=====Answer=====
Correct Option: 

@csalgo
*/


#include<iostream>
#include<math.h>
using namespace std;

float GeometricMean(int n)
{
    if(n==0)
    return 1;

    float smallGeometicMean = GeometricMean(n-1);
    float a = (float)1/pow(2,n);
    float ans = smallGeometicMean + a;
    return ans;
}

int main()
{
    int n;
    cout<<"Enter number you want to sum of Geometric mean"<<endl;
    cin>>n;
    cout<<GeometricMean(n)<<endl;
    cout<<endl;





   // float a = 1+(float)1/pow(2,n);
//     int b = pow(2,n);
//    // cout<<b<<endl;
//     int b1 = 1;
//     float c = (float)b1/b;
//     //cout<<c<<endl;
//     float d = 1 + c;
//     cout<<d<<endl;
  //  cout<<a<<endl;


    // float a1 = 1;
    // float a2 = 2;
    // float a3 = a1/a2;
    // cout<<a3<<endl;
    //cout<<float(1/2)<<endl;
    return 0;
}