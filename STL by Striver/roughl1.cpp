#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> vec(3, vector<int> (4,0));
    for(auto it1:vec){
        for(auto it2:it1){
            cout<<it2<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
    }
    return 0;
}