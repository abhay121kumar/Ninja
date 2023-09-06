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

// int length(Node *head){
//     Node *temp = head;
//     int length = 0;
//     while(temp!=NULL){
//         length++;
//         temp = temp->next;
//     }
//     return length;
// }

Node *DeleteNode(Node *head,int i){
    // int size = length(head);
    Node *temp = head;
    Node *length = head;
    int count = 0;
    if(i==0){
        head = temp->next;
        delete temp;
        return head;
    }
    while(temp !=0 && count<i-1){
        count++;
        temp = temp->next;
    }

    int size = 0;
    while(length!=NULL){
        size++;
        length = length->next;
    }
    if(temp!=NULL && i<size){
        Node *a = temp->next;
        Node *b = a->next;
        temp->next = b;
        delete a;
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
    int i;
    cout<<"Enter Postion: "<<endl;
    cin>>i;
    head = DeleteNode(head,i);
    print(head);
    cout<<endl;
    return 0;
}