#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int temp = target;
        int y = -1;
        int z = -1;
        map<int,int> mpp;
        for(auto it:nums){
            mpp[it]+=1;
        }
        int i=0;
        while(i<nums.size()){
            int x = temp - nums[i];
            mpp[nums[i]]-=1;
            nums[i] = -1;
            if(mpp.find(x)!=mpp.end()){
                cout<<x<<endl;
                y = mpp[x];
            }
            if(x>0 && y!=-1){
                z = x;
                ans.emplace_back(i);
            }
            if(ans.size()==1){
                break;
            }
            i++;
        }
        while(i<nums.size()){
            if(nums[i]==z){
                // cout<<nums[i]<<endl;
                ans.emplace_back(i);
            }
            i++;
        }
        return ans;
    }

    int main(){
        vector<int> arr = {3,2,4};
        map<int,int> ourMap;
        for(auto it:arr){
            ourMap[it]+=1;
        }
        vector<int> ans = twoSum(arr,6);
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }