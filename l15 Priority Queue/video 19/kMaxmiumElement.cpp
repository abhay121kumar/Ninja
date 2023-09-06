/*
@csalgo

Coding Problem
Problem Statement: K largest elements
Problem Level: MEDIUM
Problem Description:
You are given with an integer k and an array of integers that contain numbers in random order. Write a program to find k largest numbers from given array. You need to save them in an array and return it.
Time complexity should be O(nlogk) and space complexity should be not more than O(k).
Order of elements in the output is not important.
Input Format :
Line 1 : Size of array (n)
Line 2 : Array elements (separated by space)
Line 3 : Integer k

Output Format :
k largest elements

Sample Input :
13
2 12 9 16 10 5 3 20 25 11 1 8 6 
4

Sample Output :
12
16
20
25

@csalgo
*/



#include<iostream>
using namespace std;
#include<queue>
#include<vector>

void kLargestElement(int* input,int size,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<k;i++){
        pq.push(input[i]);
    }

    int j=0;
    for(int i=k;i<size;i++){
        if(pq.top()<input[i]){
            // input[j] = input[i];
            pq.pop();
            // j++;
            pq.push(input[i]);
        }
    }

    // j=0;
    while(!pq.empty()){
        input[j] = pq.top();
        pq.pop();
        j++;
    }
}


int main(){
    int n;
    cout<<"size of an array "<<endl;
    cin>>n;
    int k;
    cout<<"enter k element "<<endl;
    cin>>k;
    int input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    kLargestElement(input,n,k);
    for(int i=0;i<k;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
    return 0;
}

