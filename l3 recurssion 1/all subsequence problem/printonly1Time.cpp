#include<iostream>
using namespace std;
#include<bits/stdc++.h>

bool printF(vector<int> input,vector<int> v,int ind,int n,int k,int sumi){
    if(ind==n){
        if(sumi==k){
            for(auto it:v){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        return false;
    }
    sumi = sumi + input[ind];
    v.emplace_back(input[ind]);
    if(printF(input,v,ind+1,n,k,sumi) == true){
        return true;
    }
    v.pop_back();
    sumi = sumi - input[ind];
    
    if(printF(input,v,ind+1,n,k,sumi)==true) return true;
    return false;
}

int main(){
    vector<int> input = {1,2,1};
    vector<int> v;
    int k=2;
    int n=3;
    bool  ans = printF(input,v,0,n,k,0);
    cout<<endl;
    return 0;
}