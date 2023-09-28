/*
@csalgo

Chapter Assignment
Problem Statement: Longest Increasing Subsequence
Problem Level: MEDIUM
Problem Description:
Given an array with N elements, you need to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in strictly increasing order.
Input Format
Line 1 : An integer N 
Line 2 : Elements of arrays separated by spaces

Output Format
Line 1 : Length of longest subsequence

Input Constraints
1 <= n <= 10^3

Sample Input :
6
5 4 11 1 16 8

Sample Output 1 :
3

Sample Output Explanation
Length of longest subsequence is 3 i.e. (5,11,16) or (4,11,16).

Sample Input 2:
3
1 2 2

Sample Output 2 :
2

=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
using namespace std;


//wrong idea wrong code by myself
// int LongestSubSequnece(int *arr,int size){
//     int count=1;
//     int temp=arr[0];
//     for(int i=1;i<size;i++){
//         if(temp<arr[i]){
//             temp = arr[i];
//             count+=1;
//         }
//     }
//     return count;
// }


//correct code
int LIS(int* input,int size){
    int *output = new int[size];
    output[0] = 1;
    for(int i=1;i<size;i++){
        output[i] = 1;
        for(int j=i-1;j>=0;j--){
            if(input[j]>input[i]){
                continue;
            }
            int possibleAns = output[j] + 1;
            if(possibleAns > output[i]){
                output[i] = possibleAns;
            }
        }
    }

    int length = 0;
    for(int i=0;i<size;i++){
        if(length<output[i]){
            length = output[i];
        }
    }
    delete [] output;
    return length;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<LIS(arr,n)<<endl;
    return 0;
}