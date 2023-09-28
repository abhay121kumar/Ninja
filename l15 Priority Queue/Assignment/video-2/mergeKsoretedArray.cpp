// #include <bits/stdc++.h> 
#include<iostream>
using namespace std;
#include<vector>

// vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
// {
//     // Write your code here. 
//     vector<int> pq;
    
// }



int main(){
    vector<vector<int>> arr;
    int n,m;
    cin>>n;

    for(int i=0;i<n;i++){
        int m;
        vector<int> newarr;
        cout<<"Enter the size of array to insert :";
        cin>>m;   
        for(int j=0;j<m;j++){
            int data;
            cout<<"data enter"<<endl;
            cin>>data;
            newarr.push_back(data);
        }
        arr.push_back(newarr);
    }   
    for(int i=0;i<arr[i].size();i++){
        for(int j=0;j<newarr[j].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// 4
// 5
// 8 9 10 11 12
// 4
// 1 2 3 4
// 2
// 0 2
// 3
// 1 2 3