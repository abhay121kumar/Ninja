/*
@csalgo

Coding Problem
Problem Statement: All indexes of x
Problem Level: MEDIUM
Problem Description:
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. 
Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
indexes where x is present in the array (separated by space)

Constraints :
1 <= N <= 10^3

Sample Input :
5
9 8 10 8 8
8

Sample Output :
1 3 4

@csalgo
*/

#include <iostream>
#include <vector>
using namespace std;

// ====================== 2nd method ====================

// #include<iostream>
// using namespace std;

//                               right code

// int allIndexes(int input[], int size, int x, int output[])
// {

//     if(size == 0)
//     {
//         return 0;
//     }
//     int ans = allIndexes(input,size-1,x,output);
//     if(input[size-1] == x)
//     {
//         output[ans] = size-1;
//         return ans+1;
//     }
//     else{
//         return ans;
//     }
// }

// int main()
// {
//     int size,x;
//     cout<<"Enter size of the array "<<endl;
//     cin>>size;
//     int input[size];
//     int output[size];
//     cout<<"Enter the element of the array"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>input[i];
//     }
//     cout<<"Enter element that you want to search"<<endl;
//     cin>>x;

    // int size2 = allIndexes(input,size,x,output);

    // // int size2= sizeof(output)/sizeof(int);
    // cout<<size2<<endl;
    // for(int i=0;i<size2; i++)
    // {
    //     cout<<output[i]<<" ";
    // }

//     return 0;
// }

// ******************************************************************************************//

// // =========  suraj method ================ from 1 index ==

//  int allIndexes(int input[], int size, int x, int output[]) {

//     if(size == 0){
//         if(input[size] == x){
//             output[size] = size;
//             return size+1;
//         }else{
//             return size;
//         }
//     }

//     int small = allIndexes(input, size-1, x, output);
//     if(small == 0){
//         if(input[size]==x){
//             output[small] = size;
//             return small+1;
//         }else{
//          	return small;
//         }
//     }else{
//         if(input[size]==x){
//             output[small] = size;
//             return small+1;
//         }else{
//          	return small;
//         }
//     }
// }

// int main()
// {
//     int size,x;
//     cout<<"Enter size of the array "<<endl;
//     cin>>size;
//     int input[size];
//     int output[size];
//     cout<<"Enter the element of the array"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>input[i];
//     }

//     cout<<"Enter element that you want to search"<<endl;
//     cin>>x;
//     int size2 = allIndexes(input,size,x,output);
//     for(int k=0; k<size2; k++)
//     {
//         cout<<output[k]<<" ";
//     }

//     return 0;
// }

//**************************************************************************************************//

// wrong output code

// int AllIndex(int a[], int size, int x, int ans)
// {
//     if(size==0)
//     {
//         return -1;
//     }
//     int smallAllindex = AllIndex(a,size-1,x, ans);
//     if(a[size-1]==x)
//     {
//         ans = size-1;
//     }
//     return smallAllindex;
// }
// int main()
// {
//     int size,x;
//     cout<<"Enter size of the array "<<endl;
//     cin>>size;
//     int input[size];
//     int output[size];
//     cout<<"Enter the element of the array"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>input[i];
//     }
//     cout<<"Enter element that you want to search"<<endl;
//     cin>>x;

//     int size2 = AllIndex(input,size,x,0);

//     // int size2= sizeof(output)/sizeof(int);
//     cout<<size2<<endl;
//     for(int i=0;i<size2; i++)
//     {
//         cout<<output[i]<<" ";
//     }

//     return 0;
// }

// *************************************************************************//

// ya code output wrrog de raha hai

// int upd(int output[], int n)
// {
//     if (n == 0)
//     {
//         // output[0]++;
//         return 0;
//     }

//     int small = upd(output, n - 1);
//     (output[n])++;
//     return small;
// }

// int allIndexes(int input[], int size, int x, int output[])
// {

//     if (size == 0)
//     {
//         //cout << input[0];
//         return 0;
//     }

//     int small = allIndexes(input + 1, size - 1, x, output);
//     {
//         small = upd(output, small);
//         if (input[0] == x)
//         {
//             output[small] = 0;
//             return small + 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
// }

// int main()
// {
//     int size, x;
//     cout << "Enter size of the array " << endl;
//     cin >> size;

//     int input[size];
//     int output[50];
//     cout << "Enter the element of the array" << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cin >> input[i];
//     }

//     cout << "Enter element that you want to search" << endl;
//     cin >> x;

//     int size2 = allIndexes(input, size, x, output);

//     // int size2= sizeof(output)/sizeof(int);
//     // cout<<size2<<endl;
//     for (int i = 0; i < size2; i++)
//     {
//         cout << output[i] << " ";
//     }

//     return 0;
// }
