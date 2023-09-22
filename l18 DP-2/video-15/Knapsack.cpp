/*
@csalgo

Coding Problem
Problem Statement: 0 1 Knapsack
Problem Level: MEDIUM
Problem Description:
A thief robbing a store can carry a maximal weight of W into his knapsack. There are N items, and i-th 
item weigh 'Wi' and the value being 'Vi.' What would be the maximum value V, that the thief can steal?
Input Format :
The first line of the input contains an integer value N, which denotes the total number of items.

The second line of input contains the N number of weights separated by a single space.

The third line of input contains the N number of values separated by a single space.

The fourth line of the input contains an integer value W, which denotes the maximum weight the thief can 
steal.

Output Format :
Print the maximum value of V that the thief can steal.

Constraints :
1 <= N <= 20
1<= Wi <= 100
1 <= Vi <= 100

Time Limit: 1 sec

Sample Input 1 :
4
1 2 4 5
5 4 8 6
5

Sample Output 1 :
13

Sample Input 2 :
5
12 7 11 8 9
24 13 23 15 16
26

Sample Output 2 :
51

@csalgo
*/

// wrong code 
// i try my self


#include<iostream>
using namespace std;

int Knapsack(int n,int* weight,int *value,int capacity){
    int ans=0;
    
    for(int i=0;i<n;i++){
        int TotalWeight=0,TotalValue=0;
        int k;
        for(int j=i;j<n;j++){
            k=j;
            if((TotalWeight+weight[k]) <= capacity){
                TotalWeight+=weight[k];
                TotalValue+=value[j];
            }
        }
        if(ans<TotalValue){
            ans = TotalValue;
        }
    }
    return ans;
}

int Knapsack_rec(int weight[],int value[],int size,int capacity){
    if(size==0){
        return 0;
    }
    int a=0,b=0;
    // if(capacity-weight[0] > 0){
    //     a = Knapsack_rec(weight+1,value+1,size-1,capacity-weight[0]) + value[0];
    // }else{
    //     b = Knapsack_rec(weight+1,value+1,size-1,capacity);
    // }

    if(capacity-weight[0] > 0)
        a = Knapsack_rec(weight+1,value+1,size-1,capacity-weight[0]) + value[0];

    b = Knapsack_rec(weight+1,value+1,size-1,capacity);


    return max(a,b);
}


int main(){
    int n;
    cin>>n;
    int weight[n],value[n];
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    for(int i=0;i<n;i++){
        cin>>value[i];
    }
    int capacity;
    cin>>capacity;
    // cout<<Knapsack(n,weight,value,capacity)<<endl;
    cout<<Knapsack_rec(weight,value,n,capacity)<<endl;
    return 0;
}