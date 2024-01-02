#include<iostream>
#include <cmath>
using namespace std;
#include<bits/stdc++.h>


// void subSequence(vector<string> input,vector<string> output,int ind)
// {
//     if(ind==input.size()){
//         for(auto it:output){
//             cout<<it<<" ";
//         }
//         if(output.size()==0){
//             cout<<"{}"<<endl;
//         }
//         cout<<endl;
//         // cout<<"sdvs"<<endl;
//         return;
//     }
    
//     output.emplace_back(input[ind]);
//     subSequence(input,output,ind+1);
//     output.pop_back();

//     subSequence(input,output,ind+1);
// }

// int main()
// {
//     string str;
//     vector<string> str1 = {"abc"};
//     vector<string> output1;
//     subSequence(str1,output1,0);
//     return 0;
// }

// /*
// abc

// c
// b
// bc
// a
// ac
// ab
// abc
// */


void subsequencebystriver(vector<int> &ds,vector<int> arr,int ind,int size){
    if(size==ind){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        // cout<<"hello"<<endl;
        cout<<endl;
        return ;
    }
    ds.push_back(arr[ind]);
    subsequencebystriver(ds,arr,++ind,size);//ind++
    ds.pop_back();
    subsequencebystriver(ds,arr,ind++,size);
}
int main(){
    vector<int> arr = {1,2,3};
    vector<int> ds;
    subsequencebystriver(ds,arr,0,3);
    return 0;
}