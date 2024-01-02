/*
@csalgo

Chapter Assignment
Problem Statement: Pairs with difference K
Problem Level: MEDIUM
Problem Description:
You are given with an array of integers and an integer K. You have to find and print the count of all such pairs which have 
difference K.
Note: Take absolute difference between the elements of the array.
Input Format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol n.
The following line contains n space separated integers, that denote the value of the elements of the array.
The following line contains an integer, that denotes the value of K.

Output format :
The first and only line of output contains count of all such pairs which have an absolute difference of K.

Constraints :
0 <= n <= 10^4
Time Limit: 1 sec

Sample Input 1 :
4 
5 1 2 4
3

Sample Output 1 :
2

Sample Input 2 :
4
4 4 4 4 
0

Sample Output 2 :
6



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>


//wrong code

/*
int pairWithDifferenceK(int* a,int size,int k){
    unordered_map<int,int> map1;
    int count=0;
    for(int i=0;i<size;i++){
        if(map1.count(a[i])>0){
            map1[a[i]]+=1;
        }else{
            map1[a[i]] = 1;
        }
    }
    for(int i=0;i<size;i++){
        if(map1[a[i]]){
            int x = a[i] - a[i+1];
            if(x==k || -x==k){
                count = map1[a[i]]+count;
                map1[a[i]]-=1;
            }
        }
    }
    // cout<<count<<endl;
    return count;
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
    cout<<pairWithDifferenceK(input,n,k);

    cout<<endl;
    return 0;
}

*/

//suraj code
#include<unordered_map>

int getPairsWithDifferenceK(int *arr, int n, int k) {
	// Write your code here
	unordered_map<int , int> map1;

	for(int i =0; i<n; i++){
		map1[arr[i]]++;
	}

	int pairCount = 0;

	for(int i=0; i<n; i++){
		if(map1[k+arr[i]]>0){
			if(!k){
				map1[k+arr[i]]-=1;
			}
			pairCount+=map1[(k+arr[i])];
            // cout<<map1[(k+arr[i])]<<" "<<arr[i]+k<<" "<<endl;
		}
	}
	return pairCount;
	
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
    cout<<getPairsWithDifferenceK(input,n,k);

    cout<<endl;
    return 0;
}