#include<iostream>
using namespace std;
#include<climits>

template <typename T>
class StackUsingArray{
    private:
    T *data;
    int nextIndex;
    int capacity;

    public:

    StackUsingArray(){
        data = new T[4]; // let assume size 4 
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
    void push(T element){
        if(nextIndex == capacity){
            T *newData = new T[2*capacity];
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
    T pop(){
        if(isEmpty()){
            cout<<"Stack is empty further you can not able to delete element"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    // read top element in the stack
    T top(){
        if(isEmpty()){
            cout<<"Stack is empty further you can not able to delete element"<<endl;
            return 0;
        }
        return data[nextIndex-1];
    }
};


int main(){
    StackUsingArray<int> s;

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

    StackUsingArray<char> s1;

    s1.push(100);
    s1.push(101);
    s1.push(102);
    s1.push(103);
    s1.push(104);

    cout<<"top element on stack: "<<s1.top()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<"size of stack: "<<s1.size()<<endl;
    cout<<s1.isEmpty()<<endl;
    return 0;
}

