#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>

void printSub(string s,vector<char> v,int ind,int n){
    // cout<<ind<<" hgf ";
    if(ind==n){
        for(auto it:v){
            cout<<it;
        }
        if(v.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    v.emplace_back(s[ind]);
    printSub(s,v,ind+1,n);
    v.pop_back();
    printSub(s,v,ind+1,n);
}
int main(){
    string s= "abc";
    vector<char> v;
    int n = 3;
    // cout<<"53"<<endl;
    printSub(s,v,0,n);
    return 0;
}

// void printSub(vector<int> s,vector<int> v,int ind,int n){
//     if(ind==n){
//         for(auto it:v){
//             cout<<it<<" ";
//         }
//         if(v.size()==0){
//             cout<<"{}";
//         }
//         cout<<endl;
//         return;
//     }
//     v.emplace_back(s[ind]);
//     printSub(s,v,ind+1,n);
//     v.pop_back();
//     printSub(s,v,ind+1,n);
// }
// int main(){
//     vector<int> s= {1,2,3};
//     vector<int> v;
//     int n = 3;
//     printSub(s,v,0,n);

// }
/*
1 2 3 
1 2 
1 3 
1 
2 3 
2 
3 
{}
*/