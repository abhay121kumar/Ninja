#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    // int nums[8] = {0,1,2,2,3,0,4,2};
    vector<int> nums = {3,2,2,3};
    int val = 3;
    // map<int,int> ourMap ;
    // int maxi=0;
    
    // for(int i=0;i<8;i++){
    //     ourMap[arr[i]]+=1;
    // }
    // // cout<<maxi<<endl;
    // // int ans = 
    // cout<<ourMap[4]<<endl;
     unordered_map<int,int> ourMap;
        for(auto it:nums){
            ourMap[nums[it]]+=1;
        }
        int ans = ourMap[val];
        // return nums.size()-ans;
        cout<<nums.size()-ans<<endl;;
}