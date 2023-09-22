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