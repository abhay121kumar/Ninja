/*
@csalgo

Coding Problem
Problem Statement: Number of balanced Binary Trees
Problem Level: HARD
Problem Description:
Given an integer h, find the possible number of balanced binary trees of height h. You just need to return the count of possible binary trees which are balanced.
This number can be huge, so return output modulus 10^9 + 7.
Time complexity should be O(h).
Input Format :
Integer h

Output Format :
Count % 10^9 + 7

Input Constraints :
1 <= h <= 10^7

Sample Input 1:
3

Sample Output 1:
15

Sample Input 2:
4

Sample Output 2:
315

@csalgo
*/

#include<iostream>
using namespace std;
#include<cmath>//for power function

// assuming n is allways n>=0
// int NoOfBalancedBT(int n){
//     if(n<=1){
//         return 1;
//     }

//     int mod = (int) (pow(10,9)) + 7;
//     int x = NoOfBalancedBT(n-1);
//     int y = NoOfBalancedBT(n-2);

//     int temp1 = (int) (((long) (x)*x)%mod);
//     int temp2 = (int) ((2*(long) (x)*y)%mod);
//     int ans = (temp1+temp2)%mod;

//     return ans;
// }










// int balancedBT(int *arr,int n){
//     if(n<=1){
//         return 1;
//     }

//     if(arr[n] != -1){
//         return arr[n];
//     }
    
//     int mod = (int) (pow(10,9)) + 7;
//     int x = balancedBT(arr,n-1);
//     int y = balancedBT(arr,n-2);

//     int temp1 = (int) (((long) (x)*x)%mod);
//     int temp2 = (int) ((2*(long) (x)*y)%mod);
//     // int ans = (temp1+temp2)%mod;
//     arr[n] = (temp1+temp2)%mod;

//     // arr[n] = ans;
//     // return ans;
//     return arr[n];
// }

// int NoOfBalancedBT_using_Memomization(int n){
//     int *arr = new int[n+1];
//     for(int i=0;i<n+1;i++){
//         arr[i] = -1;
//     }

//     return balancedBT(arr,n);
// }












int NoOfBalancedBT_using_DP(int n){
    int *arr = new int[n+1];
    arr[0] = 1;
    arr[1] = 1;

    for(int i=2;i<n+1;i++){
        int mod = (int) (pow(10,9)) + 7;
        
        int x = arr[i-1];
        int y = arr[i-2];

        int temp1 = (int) (((long) (x)*x)%mod);
        int temp2 = (int) ((2*(long) (x)*y)%mod);

        arr[i] = (temp1+temp2)%mod;
    }
    return arr[n];
}

int main(){
    int n;
    cin>>n;
    // cout<<NoOfBalancedBT(n)<<endl;

    // cout<<NoOfBalancedBT_using_Memomization(n)<<endl;

    cout<<NoOfBalancedBT_using_DP(n)<<endl;
}