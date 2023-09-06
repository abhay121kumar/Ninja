/*
@csalgo

Chapter Assignment
Problem Statement: Kth largest element
Problem Level: MEDIUM
Problem Description:
Given an array A of random integers and an integer k, find and return the kth largest element in the array.
Note: Try to do this question in less than O(N * logN) time.
Input Format :
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol N.
The following line contains N space separated integers, that denote the value of the elements of the array.
The following contains an integer, that denotes the value of k.

Output Format :
The first and only line of output contains the kth largest element

Constraints :
1 <= N, Ai, k <= 10^5
Time Limit: 1 sec

Sample Input 1 :
6
9 4 8 7 11 3
2

Sample Output 1 :
9

Sample Input 2 :
8
2 6 10 11 13 4 1 20
4

Sample Output 2 :
10



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
using namespace std;
#include<queue>

int kthLargestElement(int* input,int size,int k){
    priority_queue<int,vector<int>,greater<int>> pq;//min
    for(int i=0;i<k;i++){
        pq.push(input[i]);
    }

    for(int i=k;i<size;i++){
        if(pq.top() < input[i]){
            pq.pop();
            pq.push(input[i]);
        }
    }

    return pq.top();
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
    cout<<kthLargestElement(input,n,k);

    cout<<endl;
    return 0;
}

