#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, 4, 1, 2, 3, 1};
    vector<vector<int>> ans;
    map<int, int> mpp;
    for (auto it : nums)
    {
        mpp[it] += 1;
    }
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << "hello" << endl;
    cout << mpp.size() << endl;
    int n = mpp.size();
    map<int,bool> v;
    for(auto it1:nums){
        v[nums[it1]] = true;
    }
    for(auto it1:v){
        // it2.second = false;
        cout<<it1.first<<" "<<it1.second<<" v"<<endl;
    }
    // for (auto it : mpp)
    // {
    //     // temp.emplace_back(it);
    //     mpp[it.first]--;
    // }

    cout << n << " n" << endl;

    while (n>0)
    {
        vector<int> temp;
        for (auto it : mpp)
        {
            if(mpp[it.first>0]){
                temp.emplace_back(it.first);
                mpp[it.first]--;
            }
            if(mpp[it.first]==0 && v[it.first]==true){
                n-=1;
                v[it.first] = false;
            }
        }
        ans.emplace_back(temp);
        temp.clear();
        // cout<<"hello"<<endl;
    }
    int a = 0;
    for (auto it : mpp)
    {
        a = it.first;
        cout << it.first << " " << it.second << endl;
        // cout<<a<<" a"<<endl;
    }

    cout << mpp.size() << endl;
}