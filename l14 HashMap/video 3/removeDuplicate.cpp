#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

vector<int> removeDuplicate(int* arr,int size){
    vector<int> output;
    unordered_map<int,bool> seen;
    for(int i=0;i<size;i++){
        if(seen.count(arr[i]) > 0){
            continue;
        }
        seen[arr[i]] = true;
        output.push_back(arr[i]);
    }
    return output;
}

int main(){
    int a[] = {1,2,2,3,3,3,4,6,6,7,5};
    vector<int> output = removeDuplicate(a,11);
    for(int i=0;i<output.size();i++){
        cout<<output.at(i)<<" ";
    }
    cout<<endl;
}