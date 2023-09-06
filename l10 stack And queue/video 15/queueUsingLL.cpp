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
class QueueUisngLL{
    Node<T> *head;
    Node<T> *tail;
    int size;

    public:
    QueueUisngLL(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size==0;
    }

    void enqueue(T element){
        Node<T> *newNode = new Node<T>(element);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
        
    }

    T dequeue(){
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

    T front(){
        if(isEmpty()){
            return 0;
        }

        return head->data;
    }

};


int main(){

    QueueUisngLL<int> s;

    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);
    s.enqueue(40);
    s.enqueue(50);
    s.enqueue(60);

    cout<<"top element on queue: "<<s.front()<<endl;
    cout<<s.dequeue()<<endl;
    cout<<s.dequeue()<<endl;
    cout<<s.dequeue()<<endl;
    cout<<"size of queue: "<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;

    
    return 0;
}

/*
top element on queue: 10
10
20
30
size of queue: 3
0top element on queue: 10
10
20
30
size of queue: 3
0
*/