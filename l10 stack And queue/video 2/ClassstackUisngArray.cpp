#include<iostream>
using namespace std;
#include<climits>

class StackUsingArray{
    private:
    int *data;
    int nextIndex;
    int capacity;

    public:

    StackUsingArray(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    // return the number of elements present in my stack
    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        // m-1
        /*
        if(nextIndex==0){
            return true;
        }
        else{
            return false;
        }
        */
        // m-2
        return nextIndex==0;
    }

    // insert element
    void push(int element){
        if(nextIndex == capacity){
            cout<<"stack is full your data can not be inserted that is: "<<data[element]<<endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    // delete element
    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty further you can not able to delete element"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    // read top element in the stack
    int top(){
        if(isEmpty()){
            cout<<"Stack is empty further you can not able to delete element"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};