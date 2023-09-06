#include<iostream>
using namespace std;

template <typename T>
class Node{

    public:
    T data;
    Node<T> *next;
    
    Node(T data){
        this->data = data;
        next = NULL;
    }
};

template<typename T>
class StackUsingLL{
    Node<T> *head;
    int size;

    public:
    StackUsingLL(){
        head = NULL;
        size = 0;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size==0;
    }

    void push(T element){
        Node<T> *newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        size++;
    }

    T pop(){
        if(isEmpty()){
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete[] temp;
        size--;
        return ans;
    }

    T top(){
        if(isEmpty()){
            return 0;
        }

        return head->data;
    }

};


int main(){

    StackUsingLL<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<"top element on stack: "<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<"size of stack: "<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;

    StackUsingLL<char> s1;

    s1.push(100);
    s1.push(101);
    s1.push(102);
    s1.push(103);
    s1.push(104);

    cout<<"top element on stack: "<<s1.top()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<"size of stack: "<<s1.getSize()<<endl;
    cout<<s1.isEmpty()<<endl;
    return 0;
}

/*
top element on stack: 50
50
40
30
size of stack: 2
0
top element on stack: h
h
g
f
size of stack: 2
0

*/