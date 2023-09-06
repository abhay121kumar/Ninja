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

class Pair{
    public:

    Node *head;
    Node *tail;
};

Pair Reverse(Node *head){
    if(head==NULL || head->next==NULL){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }
    Pair smallAns = Reverse(head->next);
    
    smallAns.tail ->next = head;
    head->next = NULL;

    Pair ans;
    ans.head = smallAns.head;
    ans.tail =  head;
    return ans;
}

Node *reverseLinkedList(Node *head){
    return Reverse(head).head; // ****************************** we need only head address 
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
    head = reverseLinkedList(head);
    print(head);
    cout<<endl;
    return 0;
}