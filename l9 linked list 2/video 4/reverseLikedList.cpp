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
//     if(head==NULL){
//         return 0;
//     }
//     int size = length(head->next)+1;
//     return size;
// }

Node *Reverse(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *smallAns = Reverse(head->next);
    Node *temp = smallAns;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    
    return smallAns;
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
    Node *reverse = Reverse(head);
    print(reverse);
    cout<<endl;
    return 0;
}