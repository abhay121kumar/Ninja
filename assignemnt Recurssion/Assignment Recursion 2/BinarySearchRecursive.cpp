/*
@csalgo

Chapter Assignment
Problem Statement: Binary Search (Recursive)
Problem Level: EASY
Problem Description:
Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. 
Return the index of x.
Return -1 if x is not present in the given array.
Note : If given array size is even, take first mid.
Input format :
Line 1 : Array size
Line 2 : Array elements (separated by space)
Line 3 : x (element to be searched)

Sample Input :
6
2 3 4 5 6 8 
5

Sample Output:
3



=====Answer=====
Correct Option: 

@csalgo
*/


#include<iostream>
#include<cstring>
using namespace std;


// suraj method

// int binarySearch(int arr[],int start,int end,int key)
// {
//     int mid;
//     if(start<end)
//     {
//         mid = (start+end)/2;
//         if(arr[mid]==key)
//         {
//             return mid;
//         }
//         if(arr[mid]<key)
//         {
//             return binarySearch(arr,mid+1,end,key);
//         }
//         else
//         {
//             return binarySearch(arr,start,mid-1,key);
//         }
//     }
//     return -1;
// }





// my method only few statement change
int binarySearch(int a[],int start,int end,int key)
{
    int mid;
    mid = (start+end)/2;
    if(start>end)
    {
        return -1;
    }
    if(a[mid]==key)
    {
        return mid;
    }
    if(a[mid]<key) 
    {
        return binarySearch(a,mid+1,end,key);
    }
    else
    {
        return binarySearch(a,start,mid-1,key);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<"index: "<<binarySearch(arr,0,n-1,key)<<endl;
    return 0;
}