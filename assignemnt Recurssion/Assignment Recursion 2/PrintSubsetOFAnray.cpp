/*
@csalgo

Chapter Assignment
Problem Statement: Print Subsets of Array
Problem Level: HARD
Problem Description:
Given an integer array (of length n), find and print all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should 
remain same as in the input array.
Note : The order of subsets are not important. Just print the subsets in different lines.
Input format :
Line 1 : Integer n, Size of array
Line 2 : Array elements (separated by space)

Constraints :
1 <= n <= 15

Sample Input:
3
15 20 12

Sample Output:
[] (this just represents an empty array, don't worry about the square brackets)
12 
20 
20 12 
15 
15 12 
15 20 
15 20 12



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
using namespace std;
#include<vector>

/*
void printSubsetsOfArray(int input[], int size, int output[], int outputSize)
{
    if (size == 0)
    {
        for (int i = 0; i < outputSize; i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }

    printSubsetsOfArray(input + 1, size - 1, output, outputSize);
    // assuming current elemnet is included in array
    int newoutput[20] = {};
    for (int i = 0; i < outputSize; i++)
    {
        newoutput[i] = output[i];
    }
    newoutput[outputSize] = input[0];
    printSubsetsOfArray(input + 1, size - 1, newoutput, outputSize + 1);
}

void printSubsetsOfArray(int input[], int size)
{
    int ans[20] = {};
    printSubsetsOfArray(input, size, ans, 0);
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    printSubsetsOfArray(arr,size);
    return 0;
}

*/

void fun(int index,int *input,int size, vector<int> &output){
    if(index==size){
        for(auto it : output){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    output.push_back(input[index]);
    fun(index+1,input,size,output);
    output.pop_back();
    fun(index+1,input,size,output);
}

int main(){
    int size=3;
    int input[] = {1,2,3};
    vector<int> output;
    fun(0,input,size,output);
    return 0;
}