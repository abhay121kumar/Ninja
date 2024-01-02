/*
@csalgo

Coding Problem
Problem Statement: Last index of x
Problem Level: MEDIUM
Problem Description:
Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
You should start traversing your array from 0, not from (N - 1).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
last index or -1

Constraints :
1 <= N <= 10^3

Sample Input :
4
9 8 10 8
8

Sample Output :
3

@csalgo
*/

#include<iostream>
using namespace std;

//             Method -1

// int LastIndex(int a[], int size, int x)
// {
//     if(size==0)
//     return -1;

//     if(a[size-1]==x)
//     {
//         return size-1;
//     }

//     return LastIndex(a,size-1,x);

// }

// Method -2

int LastIndex(int a[], int size, int x)
{
    if(size==0)
    {
        return -1;
    }
    int smallLastIndex = LastIndex(a,size-1,x);
    if(a[size-1]==x)
    {
        return size-1;
    }
    return smallLastIndex;
}

int main()
{
    int size,x;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter element of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter number you want to search in the array"<<endl;
    cin>>x;
    cout<<LastIndex(a,size,x)<<endl;

    return 0;
}



/*


	METHOD 1 EASY ONE 
int lastIndex(int input[], int size, int x) {
    //  Don't write main().
    //  Don't read input, it is passed as function argument.
    //  Return output and don't print it.
    //  Taking input and printing output is handled automatically.
  
	if(size == 0){
        if(input[size] == x){
            return size;
        }else{
            return -1;
        }
    }
    
    if(input[size-1] == x){
        return size-1;
    }
    
    int small = lastIndex(input,size-1, x);
    return small;
}


//Method 2nd start from 0 
//NOTE FIRST GO TO THE LAST ELEMENT OF ARRAY AND THEN START SERCHING OR COMPARING WHAT WE WANT IT.

int lastIndex(int input[], int size, int x){
    
    if(size == 0){
        return -1;
    }
    
    int small = lastIndex(input+1, size-1, x);
    if(input[0]!=x && small == -1){
        return -1;
    }else{
        return small+1;
    }
}



*/
















    // int a[5] = {1,2,3,4,5};
    // int p = sizeof(a)/sizeof(a[0]);
    // int *p = a;
    // // cout<<sizeof(a)<<endl;
    // // cout<<sizeof(a[0])<<endl;
    // cout<<p<<endl;
    // cout<<endl;
    // for(int i=0;i<5;i++)
    // {
    //     cout<<p<<endl;
    //     p--;
    // }