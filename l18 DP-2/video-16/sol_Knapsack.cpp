#include<iostream>
using namespace std;

int Knapsack_rec(int weight[],int value[],int size,int capacity){
    if(size==0 || capacity==0){
        return 0;
    }


    if(weight[0] > capacity){
        return Knapsack_rec(weight+1,value+1,size-1,capacity);
    }
    //or
    // if(capacity-weight[0] < 0){
    //     return Knapsack_rec(weight+1,value+1,size-1,capacity);
    // }

    int a = Knapsack_rec(weight+1,value+1,size-1,capacity-weight[0]) + value[0];

    int b = Knapsack_rec(weight+1,value+1,size-1,capacity);


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
    cout<<Knapsack_rec(weight,value,n,capacity)<<endl;
    return 0;
}