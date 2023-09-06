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

int Length(Node *temp){
    if(temp==NULL){
        return 0;
    }
    else{
        temp = temp->next;
    }
    int size = Length(temp) + 1;
    return size;
}

void print(Node *head){
    Node *temp1 = head;
    while(temp1 != NULL){
        cout<<temp1->data<<" ";
        temp1 = temp1 -> next;
    }
}


int main(){
    Node *head = takeInputBetter();
    print(head);
    cout<<endl;
    cout<<Length(head);
    cout<<endl;
    return 0;
}
