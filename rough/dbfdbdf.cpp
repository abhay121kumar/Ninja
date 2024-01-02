#include<bits/stdc++.h>
using namespace std;

 int main(){
        vector<int> nums = {3,2,4};
        map<int,int> mpp;
        for(auto it:nums){
            mpp[it]+=1;
        }
        // int x = temp - nums[i];
        int i=0;
        int x = 3;
        int y=-1;
        // cout<<mpp.size()<<endl;
        // mpp.erase(x);
        // cout<<mpp.size()<<endl;
        nums[i] = -1;
        mpp[x]--;
        cout<<mpp[3]<<endl;
        cout<<nums[i]<<endl;
        int efe = mpp.count(x);
        cout<<efe<<" "<<"verv"<<endl;
        if(mpp.find(x)!=mpp.end() && mpp[x]>0){
            cout<<x<<endl;
            cout<<"hell"<<endl;
            y = mpp[x];
        }
        cout<<endl;
        mpp[9] = 10;
        cout<<mpp[9]<<endl;
        mpp[9]--;
        cout<<mpp[9]<<endl;
        for(auto it:mpp){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }