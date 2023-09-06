#include<iostream>
#include<queue>
using namespace std;

void kSortedArray(int* input,int size,int k){
    priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push(input[i]);
    }

    int j=0;
    for(int i=k;i<size;i++){
        input[j] = pq.top();
        pq.pop();
        pq.push(input[i]);
        j++;
    }

    while(!pq.empty()){
        input[j] = pq.top();
        pq.pop();
        j++;
    }
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
    kSortedArray(input,n,k);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
    return 0;
}

