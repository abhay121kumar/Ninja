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

Node* DeleteNode(Node *head,int i){
    if(head==NULL){
        return head;
    }
    if(i==0){
        Node *temp=head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return head;
    }
    else{
        if(head){
            head->next = DeleteNode(head->next,i-1);
        }
        return head;
    }
}

void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head -> next;
    }
}

int main(){

    Node *head = takeInputBetter();
    Node *temp = head;
    bool flag = true;
    int count = 0;
    print(head);
    cout<<endl;

    int i,data;
    cout<<"Enter postion: "<<endl;
    cin>>i;
    head = DeleteNode(head,i);
    print(head);
    return 0;
}