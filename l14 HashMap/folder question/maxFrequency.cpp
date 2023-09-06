/*
@csalgo

Coding Problem
Problem Statement: Maximum Frequency Number
Problem Level: EASY
Problem Description:
You are given an array of integers that contain numbers in random order. Write a program to find and return the number which occurs the maximum times in the given input.
If two or more elements contend for the maximum frequency, return the element which occurs in the array first.
Input Format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol N.
The following line contains N space separated integers, that denote the value of the elements of the array.

Output Format :
The first and only line of output contains most frequent element in the given array.

Constraints:
0 <= N <= 10^8
Time Limit: 1 sec

Sample Input 1 :
13
2 12 2 11 12 2 1 2 2 11 12 2 6

Sample Output 1 :
2

Sample Input 2 :
3
1 4 5

Sample Output 2 :
1

@csalgo
*/

#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<limits.h>

int maxFrqueucy(int* a,int size){

    // wrong method
    unordered_map<int,int> frequency;
    vector<int> v1;
    for(int i=0;i<size;i++){
        if(frequency.count(a[i])>0){
            frequency[a[i]]+=1;
            continue;
        }
        else{
            frequency[a[i]] = 1;
            v1.push_back(a[i]);
        }
    }
    int maximum=INT_MIN;
    int to_return = 0;
    for(int i=0;i<v1.size();i++){
        if(maximum < frequency[v1.at(i)]){
            maximum = frequency[v1.at(i)];
            to_return = v1.at(i);
        }
    }
    return to_return;


    // divanshu method
    // unordered_map<int,int> m;
    //  for(int i=0;i<size;i++){
    //     m[a[i]]+=1;
    // } 
    // int element,maxmimum=0;
    // for(auto x:m){
    //     if(x.second > maxmimum){
    //         element = x.first;
    //         maxmimum = x.second;
    //     }
    // }
    // return element;
}


int main(){
    int n;
    cout<<"size"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<maxFrqueucy(a,n)<<endl;
}