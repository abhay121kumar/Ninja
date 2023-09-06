/*
@csalgo

Coding Problem
Problem Statement: Array Intersection
Problem Level: MEDIUM
Problem Description:
You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.
Note :
Input arrays/lists can contain duplicate elements.

The intersection elements printed would be in the order they appear in the first sorted array/list(ARR1).

<br>
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains an integer 'N' representing the size of the first array/list.

The second line contains 'N' single space separated integers representing the elements of the first the array/list.

The third line contains an integer 'M' representing the size of the second array/list.

The fourth line contains 'M' single space separated integers representing the elements of the second array/list.

Output format :
For each test case, print the intersection elements in a row, separated by a single space.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^6
0 <= M <= 10^6

Time Limit: 1 sec

Sample Input 1 :
2
6
2 6 8 5 4 3
4
2 3 4 7 
2
10 10
1
10

Sample Output 1 :
2 3 4
10

Sample Input 2 :
1
4
2 6 1 2
5
1 2 3 4 2

Sample Output 2 :
1 2 2

Explanation for Sample Output 2 :
Since, both input arrays have two '2's, the intersection of the arrays also have two '2's. The first '2' of first array matches with the first '2' of the second array. Similarly, the second '2' of the first array matches with the second '2' if the second array.

@csalgo
*/

// 2 6 1 2
// 5
// 1 2 3 4 2

// Sample Output 2 :
// 1 2 2

#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<map>
vector<int> ArrayIntersection(int* a,int* b,int size1,int size2){
    if(size1==0 || size2==0){
        vector<int> p;
        p.push_back(-1);
        return p;
    }
    map<int,int> map;
    vector<int> to_return;
    for(int i=0;i<size1;i++){
        if(map.count(a[i]) >0){
            map[a[i]]+=1;
            continue;
        }else{
            map[a[i]] = 1;
        }
    }
    for(int i=0;i<size2;i++){
        for(auto x:map){
            if(x.first==b[i] && x.second>0){
                to_return.push_back(b[i]);
                map[a[i]]-=1;
            }
        }
    }
    return to_return;
}

int main(){
    int n1,n2;
    cout<<"Enter size of n1 and n2 "<<endl;
    cin>>n1>>n2;
    int a[n1],b[n2];
    cout<<"enter element in array"<<endl;
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    vector<int> final = ArrayIntersection(a,b,n1,n2);
    for(int i=0;i<final.size();i++){
        cout<<final.at(i)<<" ";
    }
    cout<<endl;
    // vector<int> v1;
    // vector<int> v2;
    // for(int i=0;i<5;i++){
    //     cin>>v1.at(i);
    // }
    // for(int i=0;i<5;i++){
    //     cin>>v2.at(i);
    // }
    // vector<int> final = ArrayIntersection(v1,v2,v1.size(),v2.size());
}