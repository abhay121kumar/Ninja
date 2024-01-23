#include<bits/stdc++.h>
using namespace std;

// void helperFun(vector<string> &arr,int n,vector<string> &ds,int indx){
//     if(indx==n){
//         if(ds.size()==0){
//             cout<<"{}";
//         }
//         for(auto it:ds){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     ds.emplace_back(arr[indx]);
//     helperFun(arr,n,ds,indx+1);
//     ds.pop_back();
//     helperFun(arr,n,ds,indx+1);
// }

// void printSubSeq(vector<string> arr){
//     vector<string> ds;
//     helperFun(arr,arr.size(),ds,0);
// }

// int main(){
//     vector<string> arr = {"un","iq","ue"};
//     printSubSeq(arr);
//     return 0;
// }



void helperFun(vector<string> &arr,int n,vector<string> &ds,int indx,vector<vector<string>> &allSubSeq){
    if(indx==n){
        // if(ds.size()==0){
        //     // cout<<"{}";
        //     ds.emplace_back("{}");
        //     allSubSeq.emplace_back(ds);
        // }
       
        allSubSeq.emplace_back(ds);
        // cout<<endl;
        return;
    }
    ds.emplace_back(arr[indx]);
    helperFun(arr,n,ds,indx+1,allSubSeq);
    ds.pop_back();
    helperFun(arr,n,ds,indx+1,allSubSeq);
}

void printSubSeq(vector<string> arr){
    vector<string> ds;
    vector<vector<string>> allSubSeq;
    helperFun(arr,arr.size(),ds,0,allSubSeq);
    for(int i=0;i<allSubSeq.size();i++){
        for(int j=0;j<allSubSeq[i].size();j++){
            cout<<allSubSeq[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<string> arr = {"un","iq","ue"};
    printSubSeq(arr);
    return 0;
}