/*
@csalgo

Chapter Assignment
Problem Statement: Loot Houses
Problem Level: MEDIUM
Problem Description:
A thief wants to loot houses. He knows the amount of money in each house. He cannot loot two consecutive houses. Find the maximum amount of money he can loot.
Input format :
The first line of input contains an integer value of 'n'. It is the total number of houses.

The second line of input contains 'n' integer values separated by a single space denoting the amount of money each house has.

Output format :
Print the the maximum money that can be looted.

Constraints :
0 <= n <= 10 ^ 4

Time Limit: 1 sec

Sample Input 1 :
6
5 5 10 100 10 5

Sample Output 1 :
110

Sample Input 2 :
6
10 2 30 20 3 50

Sample Output 2 :
90

Explanation of Sample Output 2 :
Looting first, third, and the last houses([10 + 30 + 50]) will result in the maximum loot, and all the other possible combinations would result in less than 90.



=====Answer=====
Correct Option: 

@csalgo
*/
#include<iostream>
using namespace std;

int Loothouses(int *arr,int size){
    if(size<=0 ){
        return 0;
    }

    int x = Loothouses(arr+2,size-2) + arr[0];
    int y = Loothouses(arr-2,size-2) + arr[0];

    return max(x,y);
}

int maxSum(int *arr,int size){
    int lootHouse=0;
    for(int i=0;i<size;i++){
        int sum = arr[i];
        for(int j=0;j<size;j++){
            if(j != (i-1) && j != (i+1) && (j != i))
            {
                sum+=arr[j];
                j+=2;
            }
        }
        if(lootHouse<sum){
            lootHouse = sum;
        }
    }
    return lootHouse;
}

int maxSum_DP(int *arr,int size){
    int *output = new int[size];
    output[0] = arr[0];
    output[1] = max(arr[0],arr[1]);

    for(int i=2;i<size;i++){
        output[i] = max(arr[i]+output[i-2],output[i-1]);
    }
    return output[size-1];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<Loothouses(arr,n)<<endl;
    cout<<maxSum(arr,n)<<endl;
    cout<<maxSum_DP(arr,n)<<endl;
    return 0;
}