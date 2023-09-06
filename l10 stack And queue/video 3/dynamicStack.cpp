#include<iostream>
using namespace std;
#include<climits>

class StackUsingArray{
    private:
    int *data;
    int nextIndex;
    int capacity;

    public:

    StackUsingArray(){
        data = new int[4]; // let assume size 4 
        nextIndex = 0;
        capacity = 4;
    }

    // return the number of elements present in my stack
    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex==0;
    }

    // insert element
    void push(int element){
        if(nextIndex == capacity){
            int *newData = new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }
            capacity = capacity * 2;
            delete[] data;
            data = newData;
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


int main(){
    StackUsingArray s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.top()<<"top element on stack: "<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<"size of stack: "<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}

/*
50top element on stack: 
50
40
30
2size of stack: 
0
*/