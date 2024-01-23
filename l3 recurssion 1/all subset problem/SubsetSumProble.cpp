#include<bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> &arr,int n,int ind,vector<int> &ds,int sum){
    if(ind==n){
        ds.emplace_back(sum);
        return;
    }
    //take
    subsetSum(arr,n,ind+1,ds,sum+arr[ind]);
    //not take
    // cout<<"helo"<<endl;
    subsetSum(arr,n,ind+1,ds,sum);
    // return;
}

int main(){
    vector<int> arr = {3,1,2};
    vector<int> ds;
    subsetSum(arr,3,0,ds,0);
    for(auto it:ds){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<ds.size()<<" size"<<endl;
}