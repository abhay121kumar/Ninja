#include<iostream>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
/*
@csalgo

Chapter Assignment
Problem Statement: Return subset of an array
Problem Level: HARD
Problem Description:
Given an integer array (of length n), find and return all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as
in the input array.
Note : The order of subsets are not important.
Input format :
Line 1 : Size of array
Line 2 : Array elements (separated by space)

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

// Dipanshu Code
// int main(){
//     int n, x;
//     cin>>n;
//     vector<vector<int>> d;
//     vector<int> v, q;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             q.push_back(v[j]);
//             d.push_back(q);
//         }
//         q.clear();
//     }
//     for(int i=0; i<d.size(); i++){
//         for(int j=0; j<d[i].size(); j++){
//             cout<<d[i][j]<<"  ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }









// 3
// 15 20 12

// 12 
// 20 
// 20 12 
// 15 
// 15 12 
// 15 20 
// 15 20 12

// int SubsetOfArray(int a[],int b[][],int n)// bad programming
// int SubsetOfArray(int *a,int b[][20],int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     int small = SubsetOfArray(a,b,n-1);
//     // if(a[n])
// }

// int main()
// {
//     int n;
//     int i=0,j=0;
//     cin>>n;
//     int arr1[n] = {1,2,3};
//     int x = pow(2,3);
//     int arr[x][n+1];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr1[i];
//     }
//     cout<<SubsetOfArray(arr1,arr,n)<<endl;
//     return 0;
// }








// suraj code
/*
int subsetOfArray(int input[],int n,int output[][20])
{
    if(n==1)
    {
        output[0][0] = 0;
        output[1][0] = 1;
        output[1][1] = input[0];
        return 2;
    }
    int smallSize = subsetOfArray(input+1,n-1,output);
    for(int i=0;i<smallSize;i++)
    {
        output[i+smallSize][0] = output[i][0] + 1;
        output[i+smallSize][1] = input[0];
        int j=1;
        while(output[i][j]!=0)
        {
            output[i+smallSize][j+1] = output[i][j];
            j++;
        }
    }
    return 2*smallSize;
}

int main()
{
    int input[20],length,output[35000][20];
    cin>>length;
    for(int i=0;i<length;i++)
    {
        cin>>input[i];
    }
    int size = subsetOfArray(input,length,output);
    for(int i=0;i<size;i++)
    {
        for(int j=1;j<=output[i][0];j++)
        {
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }
}

*/

int subsetOfArray(int input[],int n,int output[][20])
{
    if(n==1)
    {
        output[0][0] = 0;
        output[0][1] = 1;
        output[1][1] = input[0];
        return 2;
    }
    int smallOutput = subsetOfArray(input+1,n-1,output);
    for(int i=0;i<smallOutput;i++)
    {
        
    }
}














// int main()
// {
//     int n;
//     int i=0,j=0;
//     cin>>n;
//     int input[n] = {1,2,3};
//     for(int i=0;i<n;i++)
//     {
//         cin>>input[i];
//     }
//     int x = pow(2,3);
//     int y = n+1;
//     int output[x][y];
//     int output[20][20];
//     int small = subsetOfArray(input,n,output);
//     for(int i=0;i<small;i++)
//     {
//         for(int j=0;j<small;j++)
//         {
//             cout<<output[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }































