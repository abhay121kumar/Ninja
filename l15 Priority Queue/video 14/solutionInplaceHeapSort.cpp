#include<iostream>
using namespace std;

void inplaceHeapSort(int* input,int size){
    //build min heap 
    //up-heapify
    int n = size;
    for(int i=0;i<n;i++){
        int childIndex = i;
        while(childIndex > 0){
            int parentIndex = (childIndex-1)/2;
            if(input[childIndex]<input[parentIndex]){
                int temp = input[childIndex];
                input[childIndex] = input[parentIndex];
                input[parentIndex] = temp;
            }
            else{
                break;
            }
            childIndex = parentIndex;
        }
    }

//remove element 
//down heapify

    while(size>1){
        int temp = input[0];
        input[0] = input[size-1];
        input[size-1] = temp;
        size--;

        int parentIndex = 0;
        int leftChildIndex = 2*parentIndex + 1;
        int rightChildIndex = 2*parentIndex + 2;

        while(leftChildIndex<size){
            int minIndex = parentIndex;

            if(input[minIndex]>input[leftChildIndex]){
                minIndex = leftChildIndex;
            }
            if(rightChildIndex<size && input[minIndex]>input[rightChildIndex]){
                minIndex = rightChildIndex;
            }
            if(minIndex == parentIndex){
                break;
            }

            int temp = input[minIndex];
            input[minIndex] = input[parentIndex];
            input[parentIndex] = temp;

            parentIndex = minIndex;
            leftChildIndex = 2*parentIndex +1;
            rightChildIndex = 2*parentIndex +2;
        }
    }

}


int main(){
    int n;
    cout<<"size of an array "<<endl;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    inplaceHeapSort(input,n);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
    return 0;
}


