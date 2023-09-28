/*
@csalgo

Coding Problem
Problem Statement: 0 1 Knapsack
Problem Level: MEDIUM
Problem Description:
A thief robbing a store can carry a maximal weight of W into his knapsack. There are N items, and i-th item weigh 'Wi' and the value being 'Vi.' What would be the maximum value V, that the thief can steal?
Input Format :
The first line of the input contains an integer value N, which denotes the total number of items.

The second line of input contains the N number of weights separated by a single space.

The third line of input contains the N number of values separated by a single space.

The fourth line of the input contains an integer value W, which denotes the maximum weight the thief can steal.

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




// wrong code wrong output coming

#include<iostream>
using namespace std;


int Knapsack_helper_memo(int weight[],int value[],int size,int capacity,int* output,int i){
    if(size==0 || capacity==0){
        return 0;
    }

    if(weight[0] > capacity){
        return Knapsack_helper_memo(weight+1,value+1,size-1,capacity,output,i);
    }

    if(output[i] != -1){
        return output[i];
    }
     
    int a = Knapsack_helper_memo(weight+1,value+1,size-1,capacity-weight[0],output,i+1) + value[0];

    int b = Knapsack_helper_memo(weight+1,value+1,size-1,capacity,output,i+1);

    output[i] =  max(a,b);

    return output[i];
}


int Knapsack_rec(int weight[],int value[],int size,int capacity){
    int *output = new int[size+1];
    for(int i=0;i<=size;i++){
        output[i] = -1;
    }

    return Knapsack_helper_memo(weight,value,size,capacity,output,0);
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
    cout<<Knapsack_rec(weight,value,n,capacity)<<endl;
    return 0;
}