#include<bits/stdc++.h>
using namespace std;

int jobScheduling(vector<int>& sT, vector<int>& eT, vector<int>& p) {
        multimap<int,int> mpp;
        // mpp[eT[0]] = p[0];
        mpp.insert(std::make_pair(eT[0], p[0]));
        int maxi=0;
        // cout<<"hello"<<endl;
        for(int i=1;i<sT.size();i++){
            multimap<int,int> ourMap;
            for(auto it:mpp){
                if(sT[i]>=it.first){
                    // mpp[eT[i]] = it.second+p[i];
                    ourMap.insert(std::make_pair(eT[i], it.second+p[i]));
                }else{
                    // mpp[eT[i]] = p[i];
                    ourMap.insert(std::make_pair(eT[i], p[i]));
                }
                // cout<<it.first<<" "<<it.second<<endl;
                // cout<<i<<endl;
            }
            if(ourMap.size()>0){
                for(auto it:ourMap){
                    mpp.insert(std::make_pair(it.first,it.second));
                    maxi = max(maxi,it.second);
                }
            }
            // ourMap.clear();
        }
        for(auto it:mpp){
            cout<<it.first<<" "<<it.second<<endl;
        }
        return maxi;
    }
int main(){
    vector<int> st = {6,15,7,11,1,3,16,2};
    vector<int> et = {19,18,19,16,10,8,19,8};
    vector<int> p = {2,9,1,19,5,7,3,19};
    cout<<jobScheduling(st,et,p)<<endl;
    return 0;
}