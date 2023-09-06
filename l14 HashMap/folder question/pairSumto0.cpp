/*
@csalgo

Coding Problem
Problem Statement: Pair sum to 0
Problem Level: MEDIUM
Problem Description:
Given a random integer array A of size N. Find and print the count of pair of elements in the array which sum up to 0.
Note: Array A can contain duplicate elements as well.
Input format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol N.
The following line contains N space separated integers, that denote the value of the elements of the array.

Output format :
The first and only line of output contains the count of pair of elements in the array which sum up to 0.

Constraints :
0 <= N <= 10^4
Time Limit: 1 sec

Sample Input 1:
5
2 1 -2 2 3

Sample Output 1:
2

@csalgo
*/

#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<map>

int pairSum(int* a,int size){
    unordered_map<int,int> map1;
    vector<int> v1;
    int count = 0;
    for(int i=0;i<size;i++){
        if(map1.count(a[i])>0){
            map1[a[i]]+=1;
        }else{
            map1[a[i]] = 1;
            v1.push_back(a[i]);
        }
    }

    //m-1
    // for(int i=0;i<v1.size();i++){
    //     for(auto x:map1){
    //         if(v1.at(i)==(-x.first) && x.second>0){
    //             count+=1;
    //         }
    //     }
    // }


    // m-2
    for(int i=0;i<size;i++){  
        if(map1[-a[i]]>0 && map1[a[i]]>0){
            if(map1[a[i]] > map1[-a[i]]){
                map1[a[i]]-=1;
            }else{
                map1[-a[i]]-=1;
            }
            count+=1;
        }   
    }
    return count;
}

int main(){
    int n;
    cout<<"size"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<pairSum(a,n)<<endl;
}