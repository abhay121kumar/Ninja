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
            // or
            // tail = tail->next;
        }
        cin>>data;
    }
    return head;

}

Node* insertNode(Node *head,int i,int data){
    Node *newNode = new Node(data);
    Node *temp = head;
    int count = 0;
    if(i==0){
        newNode -> next = temp;
        head = newNode;
        return head;
    }

    while(temp!=NULL && count<i-1){
        count++;
        temp = temp->next;
    }
    if(temp != NULL){
        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
        //          or
        // newNode->next = temp->next;
        // temp->next = newNode;
    }
    return head;
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

    int i,data;
    cout<<"Enter postion: "<<endl;
    cin>>i;
    cout<<"Enter Data: "<<endl;
    cin>>data;
    head = insertNode(head,i,data);
    print(head);
    return 0;
}