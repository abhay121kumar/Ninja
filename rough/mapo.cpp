#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<int> vec;
        for(auto it:nums){
            vec.emplace_back(target-it);
        }
        map<int,int> ourMap;
        for(auto it:nums){
            ourMap[it]+=1;
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]+vec[i]) == target && (vec[i]>0) && (count<2)){
                if(nums[i]==vec[i] && (ourMap[nums[i]]==1)){
                    cout<<"hrllo"<<endl;
                    continue;
                }
                count++;
                ans.emplace_back(i);
            }
        }
        return ans;
    }

int main(){
    array<int,5> arr = {1,2,1,4,1};
    vector<int> arr1 = {3,2,3,1,1};
    map<int,int> ourMap;
    for(auto it:arr){
        ourMap[it]+=1;
    }
    // map<int,pair<int,int>> ourMap;
    // for(int i=0;i<arr1.size();i++){
    //     ourMap.[arr1[i]]+=1;
    // }

    for(auto it:ourMap){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<ourMap[arr[0]]<<endl;
    if(ourMap.find(2)!=ourMap.end()){
        cout<<ourMap[2]<<endl;
    }
    ourMap[1]-=1;
    cout<<ourMap[arr[0]]<<endl;
    // vector<int> ans = twoSum(arr1,6);
    // for(auto it:ans){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

  
    multiset<int> st;
    for(auto it:arr1){
        st.emplace(it);
    }
    int i=0;
    if(st.find(arr1[i])!=st.end()){
        cout<<i<<endl;
    }
    // st[0] = -1;
    // st.insert(1,9);
    cout<<st.count(9)<<endl;
    // cout<<st.count(8)<<endl;
    // cout<<st[0]


    multiset<pair<int,int>> st1;
    for(int i=0;i<arr1.size();i++){
        st1.emplace(i,arr1[i]);
    }
    if(st1.find(arr1[0])!=st1.end()){
        cout<<"he"<<endl;
    }
} 