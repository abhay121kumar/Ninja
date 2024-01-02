#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int printF(vector<int> input,vector<int> v,int ind,int n,int k,int sumi){
    if(ind==n){
        if(sumi==k){
            return 1;
        }
        return 0;
    }
    sumi = sumi + input[ind];
    v.emplace_back(input[ind]);
    int left = printF(input,v,ind+1,n,k,sumi);
    v.pop_back();
    sumi = sumi - input[ind];
    
    int right = printF(input,v,ind+1,n,k,sumi);

    return left+right;
}

int main(){
    vector<int> input = {1,2,1};
    vector<int> v;
    int k=2;
    int n=3;
    int  ans = printF(input,v,0,n,k,0);
    cout<<ans<<endl;
    return 0;
}