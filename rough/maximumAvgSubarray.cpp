#include<iostream>
using namespace std;
#include<bits/stdc++.h>

    double findMaxAverage(vector<int>& nums, int k) {
    if(nums.size()==1){
        return nums[0]/k;
    }
    for(int i=1;i<nums.size();i++){
        nums[i] = nums[i-1]+nums[i];
    }
    double ans=INT_MIN,temp=0;
    int l=0;
    for(int i=k-1;i<nums.size();i++){
        if(i==(k-1)){
            temp = (double)nums[i]/(double)k;
            if(temp>ans){
                ans = temp;
            }
            continue;
        }
        temp = (((double)nums[i])-(double)nums[l])/(double)k;
        if(temp>ans){
            ans = temp;
        }
        l++;
    }
    return ans;
    }

int main(){
    vector<int> input = {1,12,-5,-6,50,3};
    int k=4;
    cout<<findMaxAverage(input,k)<<endl;
    return 0;
}

/*
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        std::cin.tie(0);

        int sum {0};
        for (int idx {0}; idx < k; ++idx)
            sum += nums[idx];
        
        int result {sum};
        for (int idx {k}; idx < nums.size(); ++idx) {
            sum += nums[idx] - nums[idx - k];
            result = max(result, sum);
        }

        return static_cast<double>(result) / k;
    }
};
*/