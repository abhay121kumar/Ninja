#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void printF(vector<int> input,vector<int> v,int ind,int n,int k,int sumi){
    if(ind==n){
        if(sumi==k){
            for(auto it:v){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    sumi = sumi + input[ind];
    v.emplace_back(input[ind]);
    printF(input,v,ind+1,n,k,sumi);
    v.pop_back();
    sumi = sumi - input[ind];
    printF(input,v,ind+1,n,k,sumi);
}

int main(){
    vector<int> input = {1,2,1};
    vector<int> v;
    int k=2;
    int n=3;
    printF(input,v,0,n,k,0);
    return 0;
}