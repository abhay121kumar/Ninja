#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* takeInputBetter(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    
    while(data != -1){
        Node *newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin>>data;
    }
    return head;
}

Node *Reverse(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *prev = NULL;
    Node *current = head;
    Node *next = head -> next;
    while(current!=NULL){
        current ->next = prev; 
        prev = current;
        current = next;
        if(current!=NULL){
            next = current->next;
        }
    }
    return prev; 
}

void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head -> next;
    }
}

int main(){
    Node *head = takeInputBetter();
    print(head);
    cout<<endl;
    head = Reverse(head);
    print(head);
    cout<<endl;
    return 0;
}