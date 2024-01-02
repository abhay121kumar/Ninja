#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p = {1,2};
    pair<int,int> p1 = {1,0};
    p1 =  {3,4};
    vector<pair<int,int>> v;
    v.emplace_back(1,1);
    cout<<v[0].first<<endl;
    cout<<v[0].second<<endl;
    if(p==p1){
        cout<<"true";
    }else{
        cout<<"false;";
    }
    cout<<p1.first<<p1.second<<endl;
    // vector<vector<pair<int,int>>> v1(v);
    cout<<endl;
    string s1 = "abc";
    string s2 = "abd";
    if(s1==s2){
        cout<<"trues"<<endl;
    }else{
        cout<<"falses"<<endl;
    }
}