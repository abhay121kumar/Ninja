#include<iostream>
#include<unordered_map>
using namespace std;
#include<bits/stdc++.h>

int LongestSubsetZeroSum(int* input,int size){
    unordered_map<int,int> ourMap;
    int sum=input[0];

    for(int i=1;i<size-1;i++){
       ourMap[i] = input[i] + sum;
        sum = ourMap[i];
    }

    

}