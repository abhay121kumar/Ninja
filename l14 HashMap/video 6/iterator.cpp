#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;
#include<bits/stdc++.h>

int main(){
    unordered_map<string,int> ourMap;
    ourMap["abc1"] = 1;
    ourMap["abc2"] = 2;
    ourMap["abc3"] = 3;
    ourMap["abc4"] = 4;
    ourMap["abc5"] = 5;
    ourMap["abc6"] = 6;
    ourMap["abc7"] = 7;

    unordered_map<string,int> :: iterator it1 = ourMap.begin();

    while(it1 != ourMap.end()){
        cout<<"key "<<it1->first<<" "<<"value "<<it1->second<<endl;
        it1++;
    }

    //find
    // giving error while running this two line of code
    // unordered_map<string,int> :: iterator it3 = ourMap.find("abc1");
    // ourMap.erase(it3,it3 + 4);

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    vector<int> :: iterator it2 = v.begin();
    while(it2 != v.end()){
        cout<<*it2<<endl;
        it2++;
    }

    unordered_map<int,int> ourMap1;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        if(ourMap1.count(arr[i])>0){
            ourMap1[arr[i]]+=1;
        }else{
            ourMap1[arr[i]] =1;
        }
    }
    unordered_map<int,int> :: iterator it3 = ourMap1.begin();
    while(it3 != ourMap1.end()){
         cout<<"key "<<it3->first<<" "<<"value "<<it3->second<<endl;
         it3++;
    }
    // cout<<it3->first<<endl;
    // cout<<it3->first + 1<<endl;

    vector<int> v4;
    cout<<v4.size()<<endl;
    int arr1[] = {11,2,3,14,5,6,9,10};
    sort(arr1,arr1+8);
    for(int i=0;i<8;i++){
        cout<<arr1[i]<<" ";
    }


}