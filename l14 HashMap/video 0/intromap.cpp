#include<iostream>
using namespace std;
#include<unordered_map>
#include<map>
#include<vector>

int main(){

    // unordered_map<int,int> m;
    // m[1] = 2;
    // m[12] = 23;
    // m[45] = 43;
    // for(auto x:m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    // // 45 43
    // // 12 23
    // // 1 2


    map<int,int> m;
    m[1] = 2;
    m[12] = 23;
    m[45] = 43;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    // 1 2
    // 12 23
    // 45 43

    map<int,bool> m1;
    m1[3] = false;
    m1[13] = true;
    m1[1] = false;
    for(auto x:m1){
        cout<<x.first<<" "<<x.second<<endl;
    }
    // 1 0
    // 3 0
    // 13 1

    // vector<int> v1= {1,2,3,4,5,-3};
    // for(auto x:v1){
    //     cout<<x<<" "; //1 2 3 4 5 
    // }



    int a[] = {2,1,-2,2,3,-3,-3,-1};
    unordered_map<int,int> map1;
    vector<int> v1;
    int count = 0;
    for(int i=0;i<8;i++){
        if(map1.count(a[i])>0){
            map1[a[i]]+=1;
        }else{
            map1[a[i]] = 1;
            v1.push_back(a[i]);
        }
    }
    for(auto x:map1){
        cout<<(-x.first)<<" ";
    }
    cout<<"hello"<<endl;
    for(auto x:map1){
        cout<<"key "<<(x.first)<<" "<<"value"<<x.second<<endl;;
    }
    cout<<endl;
    cout<<endl;
    for(auto x:map1){
        cout<<"key "<<(x.first)<<" "<<"value"<<x.second<<endl;;
        map1.erase(x.second);
    }
    cout<<endl;
    for(int i=0;i<map1.size();i++){
        // if(map1[a[i]>map1[-a[i]]]){
        //     cout<<"first  "<<map1[a[i]]<<endl;
        //     map1[a[i]]-=1;
        // }else{
        //     cout<<"second  "<<map1[-a[i]]<<endl;
        //     map1[-a[i]]-=1;
        // }
        cout<<map1[a[i]]<<" ";
        // map1.erase(a[i]);
    }
    cout<<endl;
    // cout<<endl;
    // for(int i=0;i<map1.size();i++){
    //     cout<<map1[-a[i]]<<" ";
    // }
    cout<<endl;








    // vector<int> v1 = {2,6,1,2};
    // vector<int> v2 = {1,2,3,4,2};

    // unordered_map<int,int> m11;
    // unordered_map<int,int> m2;
    // vector<int> v;

    // for(int i=0;i<v1.size();i++){
    //     m11[v1[i]]+=1;
    // }
    // for(int i=0;i<m11.size();i++){
    //     cout<<m11[v1[i]]<<" ";
    // }
    // cout<<endl; 

    // for(int i=0;i<v2.size();i++){
    //     m2[v2[i]]+=1;
    // }
    //   for(int i=0;i<m2.size();i++){
    //     cout<<m2[v2[i]]<<" ";
    // }
    // cout<<endl; 
}