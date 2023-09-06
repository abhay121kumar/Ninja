/*
@csalgo

Chapter Assignment
Problem Statement: Check Max-Heap
Problem Level: EASY
Problem Description:
Given an array of integers, check whether it represents max-heap or not. Return true if the given array represents max-heap, else return false.
Input Format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol N.
The following line contains N space separated integers, that denote the value of the elements of the array.

Output Format :
The first and only line of output contains true if it represents max-heap and false if it is not a max-heap.

Constraints:
1 <= N <= 10^5
1 <= Ai <= 10^5
Time Limit: 1 sec

Sample Input 1:
8
42 20 18 6 14 11 9 4

Sample Output 1:
true



=====Answer=====
Correct Option: 

@csalgo
*/
#include<iostream>
using namespace std;
#include<queue>

bool isMaxHeap(int* input,int size){
    bool flag = true;
    priority_queue<int> pq;
    if(size==0){
        return 0;
    }

    int parentIndex =0;
    int leftChildIndex = 2 * parentIndex + 1;
    int rightChildIndex = 2 * parentIndex + 2;

    while(leftChildIndex < size){
        int childIndex = parentIndex;
        if(input[childIndex]<input[leftChildIndex]){
            flag = false;
            break;
        }
        if(rightChildIndex<size && input[childIndex] < input[rightChildIndex]){
            flag = false;
            break;
        }
        parentIndex++;
        leftChildIndex = 2*parentIndex + 1;
        rightChildIndex = 2*parentIndex + 2;
    }
    return flag;
}

int main(){
    int n;
    cout<<"enter size of array "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = isMaxHeap(arr,n);
    if(ans){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}