#include<iostream>
#include <cmath>
using namespace std;
#include<bits/stdc++.h>

// int subSequence(string input,string output[])
void subSequence(vector<string> input,vector<string> output,int ind)
{
    if(ind==input.size()){
        for(auto it:output){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    
    output.emplace_back(input[ind]);
    subSequence(input,output,ind+1);
    output.pop_back();

    subSequence(input,output,ind+1);

    // if(input.empty())
    // {
    //     output[0] = "";
    //     return 1;
    // }
    // string subsequenceString = input.substr(1);
    // int outputSize = subSequence(subsequenceString,output);
    // for(int i=0;i<outputSize;i++)
    // {
    //     output[i+outputSize] = input[0]+output[i];
    // }
    // return 2*outputSize;

}

int main()
{
    string str;
    vector<string> str1 = {"abc"};
    // cin>>str;
    // int size = pow(2,str.size());
    // string *output = new string[size];
    vector<string> output1;
    subSequence(str1,output1,0);
    // int smallOutputSize = subSequence(str,output,0);
    // for(int i=0;i<smallOutputSize;i++)
    // {
    //     cout<<output[i]<<endl;
    // }
    return 0;
}

/*
abc

c
b
bc
a
ac
ab
abc
*/