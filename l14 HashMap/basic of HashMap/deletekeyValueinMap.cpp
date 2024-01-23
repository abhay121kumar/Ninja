#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<unordered_map>

using namespace std;

int main(){
    string s = "aaabcccd";
    unordered_map<char,int> mpp;
    for(auto it:s){
        mpp[it]+=1;
    }
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    int k=1;
    // set<pair<char,int>> s1;
    // for(auto it:mpp){
    //     s1.insert(it);
    // }
    for(auto it:s){
        if(mpp[it]>1 && k>0){
            mpp[it]-=1; 
            k--;
        }
    }
    cout<<"update"<<endl;
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    // for(auto it:s1){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }

}