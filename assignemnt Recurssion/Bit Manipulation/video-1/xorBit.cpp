#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>

int main(){
    vector<int> arr = {2,11,2,3,3,4,5,5,4};
    int xor1=0;
    for(int i=0;i<arr.size();i++){
        xor1 = xor1^arr[i];
    }
    cout<<xor1<<endl;
    return 0;
}