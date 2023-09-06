/*
@csalgo

Chapter Assignment
Problem Statement: Longest Consecutive Sequence
Problem Level: MEDIUM
Problem Description:
You are given an array of unique integers that contain numbers in random order. You have to find the longest possible sequence of consecutive numbers using the numbers from given array.
You need to return the output array which contains starting and ending element. If the length of the longest possible sequence is one, then the output array must contain only single element.
Note:
1. Best solution takes O(n) time.
2. If two sequences are of equal length, then return the sequence starting with the number whose occurrence is earlier in the array.

Input format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol n.
The following line contains n space separated integers, that denote the value of the elements of the array.

Output format:
The first and only line of output contains starting and ending element of the longest consecutive sequence. If the length of longest consecutive sequence, then just print the starting element.

Constraints :
0 <= n <= 10^6
Time Limit: 1 sec

Sample Input 1 :
13
2 12 9 16 10 5 3 20 25 11 1 8 6

Sample Output 1 :
8 12

Sample Input 2 :
7
3 7 2 1 9 8 41

Sample Output 2 :
7 9
Explanation: Sequence should be of consecutive numbers. Here we have 2 sequences with same length i.e. [1, 2, 3] and [7, 8, 9],
but we should select [7, 8, 9] because the starting point of [7, 8, 9] comes first in input array and therefore, the output will be 7 9, 
as we have to print starting and ending element of the longest consecutive sequence.

Sample Input 3 :
7
15 24 23 12 19 11 16

Sample Output 3 :
15 16



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
using namespace std;
#include<vector>
// #include<map>
// #include<bits/stdc++.h>
#include<algorithm>






//divanshu code
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min=arr[0];
    map<int, int> m;
    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min=arr[i];
        }
        m[arr[i]]=i;
    }
    int ans=min, count=1, l=1;
    for(auto x:m){
        if(min!=x.first){
            if(min+count==x.first){
                count++;
            }else{
                if(count>l){
                    l=count;
                    ans=min;
                }else if(count==l && m[min]<m[ans]){
                    l=count;
                    ans=min;
                }
                min=x.first;
                count=1;
            }
        }
    }
    cout<<ans<<"  "<<ans+l-1;
    return 0;
}

*/

/*
int main(){

int n;
cin>>n;
// int count;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
map<int, bool> m;
for(int i=0; i<n; i++){
    m[arr[i]]=true;
}
int count, ans=0;
for(int i=0; i<n; i++){
    if(m[arr[i]]){
        count=0;
        m[arr[i]]=false;
        int x=arr[i]-1;
        while(m[x]){
            m[x]=false;
            x--;
            count++;
        }
        x=arr[i]+1;
        while(m[x]){
            m[x]=false;
            x++;
            count++;
        }
        if(count>ans){
            ans=count;
        }
    }
}
}

*/

//suraj kumar

#include<unordered_map>

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    // Your Code goes here
    unordered_map<int, bool>  map1;
    vector<int> v1;

    for(int i=0; i<n; i++){
        map1[arr[i]]  =true;
    }

    int mainMaxLength = 0;
    int mainStart = 0;

    for ( int i =0; i < n; i++){
        int maxLength = 0;
        int start = arr[i];

        map1[arr[i]] = false;
        maxLength++;


        int j = 1;
        while( map1.count(arr[i]+j) > 0 &&  map1[(arr[i])+j]  ){  //  &&  map1[(arr[i])+j]
            map1[arr[i]+j] = false;
            maxLength++;
            j++;
        }

        int k = 1;
        while(map1.count(arr[i]-k) != 0  && k > 0 && map1[(arr[i])-k] ){ // && map1[(arr[i])-k]
            map1[arr[i]-k] = false;
            maxLength++;
            start = arr[i]-k;
            k++;
        }

        if(mainMaxLength < maxLength){
            mainMaxLength = maxLength;
            mainStart = start;
        }else if(mainMaxLength == maxLength){
            for(int i =0; i<n; i++){
                if(arr[i] == start){
                    mainMaxLength = maxLength;
                    mainStart = start;
                    break;
                }

                if(arr[i] == mainStart){
                    break;
                }
            }
        }
    }

    v1.push_back(mainStart);
    cout<<mainMaxLength<<endl;
    if(mainStart != mainStart+mainMaxLength-1){
        v1.push_back(mainStart+mainMaxLength-1);
    }

    return v1;
}



int main(){
    int n;
    cout<<"Enter size of an array"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> ans = longestConsecutiveIncreasingSequence(a,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i)<<" ";
    }
    return 0;
}
