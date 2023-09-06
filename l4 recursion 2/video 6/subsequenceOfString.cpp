#include<iostream>
#include <cmath>
using namespace std;

int subSequence(string input,string output[])
{
    if(input.empty())
    {
        output[0] = "";
        return 1;
    }
    string subsequenceString = input.substr(1);
    int outputSize = subSequence(subsequenceString,output);
    for(int i=0;i<outputSize;i++)
    {
        output[i+outputSize] = input[0]+output[i];
    }
    return 2*outputSize;
}

int main()
{
    string str;
    cin>>str;
    int size = pow(2,str.size());
    string *output = new string[size];
    int smallOutputSize = subSequence(str,output);
    for(int i=0;i<smallOutputSize;i++)
    {
        cout<<output[i]<<endl;
    }
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