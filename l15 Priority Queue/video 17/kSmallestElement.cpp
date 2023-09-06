/*
@csalgo

Coding Problem
Problem Statement: K smallest elements
Problem Level: MEDIUM
Problem Description:
You are given with an integer k and an array of integers that contain numbers in random order. Write a program to find k smallest numbers from given array. You need to save them in an array and return it.
Time complexity should be O(nlogk) and space complexity should be not more than O(k).
Order of elements in the output is not important.
Input Format :
Line 1 : Size of array (n)
Line 2 : Array elements (separated by space)
Line 3 : Integer k

Output Format :
k smallest elements

Sample Input 1 :
13
2 12 9 16 10 5 3 20 25 11 1 8 6 
4

Sample Output 1 :
5
3
2
1

@csalgo
*/

#include<iostream>
using namespace std;
#include<queue>

void kSmallestElement(int* input,int size,int k){
    priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push(input[i]);
    }

    int j=0;
    for(int i=k;i<size;i++){
        if(pq.top()>input[i]){
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
    kSmallestElement(input,n,k);
    for(int i=0;i<k;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
    return 0;
}

