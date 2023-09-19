/*
@csalgo

Coding Problem
Problem Statement: Staircase
Problem Level: MEDIUM
Problem Description:
A child runs up a staircase with 'n' steps and can hop either 1 step, 2 steps or 3 steps at a time. 
Implement a method to count and return all possible ways in which the child can run-up to the stairs.
Input format :
The first and the only line of input contains an integer value, 'n', denoting the total number of steps.

Output format :
Print the total possible number of ways.

Constraints :
0 <= n <= 10 ^ 4

Time Limit: 1 sec

Sample Input 1:
4

Sample Output 1:
7

Sample Input 2:
10

Sample Output 2:
274

@csalgo
*/

#include<iostream>
using namespace std;
#include<limits.h>

int starecase_m1(int n){
    if(n==0 || n==1){
        return 1;
    }
    if(n<0){
        return 0;
    }

    return starecase_m1(n-1) + starecase_m1(n-2) + starecase_m1(n-3) ;
}

int staircase_Helper(int *arr,int n){
    if(n == 0 || n == 1){
        return 1;
    }
    if(n<0){
        return 0;
    }

    if(arr[n] != INT_MAX){
        return arr[n];
    }

    int ans = staircase_Helper(arr,n-1) + staircase_Helper(arr,n-2) + staircase_Helper(arr,n-3);
    arr[n] = ans;

    return ans;
}

int starecase_m2(int n){
    int *arr = new int[n+1];
    for(int i=0;i<n+1;i++){
        arr[i] = INT_MAX;
    }
    return staircase_Helper(arr,n);
}

int starecase_m3(int n){
    int *arr = new int[n+1];
    if(n==0){
        return 1;
    }
    if(n==1 || n==2){
        return n;
    }
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;

    for(int i=3;i<n+1;i++){
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }
    return arr[n];
}

int main(){
    int n;
    cin>>n;
    cout<<starecase_m1(n)<<endl;
    cout<<starecase_m2(n)<<endl;
    cout<<starecase_m3(n)<<endl;
}