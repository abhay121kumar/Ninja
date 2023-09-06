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

Node* MidValue(Node *head){
    if(head==NULL){
        return 0;
    }
    Node *slow = head;
    Node *fast = head->next;

    while(fast!=NULL && fast->next!=NULL ){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* MergeTwoSorted(Node *head1,Node *head2){
    if(head1==NULL && head2==NULL){
        return 0;
    }
    else if(head1 == NULL){
        return head2;
    }
    else if(head2 == NULL){
        return head1;
    }
    else{
        Node *fh = NULL;
        Node *ft = NULL;
        if(head1->data <= head2->data){
            fh=head1;
            ft=head1;
            head1 = head1->next;
        }
        else{
            fh=head2;
            ft=head2;
            head2 = head2->next;
           
        }
        while(head1!=NULL && head2 != NULL){
            if(head1->data<head2->data){
                ft -> next = head1;
                ft=head1;
                head1 = head1->next;
            }
            else{
                ft->next = head2;
                ft=head2;
                head2 = head2 -> next;
            }
        }
        while(head1 != NULL){
            ft ->next = head1;
            ft = head1;
            head1 = head1 -> next;
        }
        while(head2 != NULL){
            ft -> next = head2;
            ft = head2;
            head2 = head2 -> next;
        }
        return fh;
    }
}

Node* MergeSort(Node *head){
    if(head==NULL || head->next == NULL){
        return head;
    }

    Node *mid = MidValue(head);
    Node *left = head;
    Node *right = mid->next;
    mid -> next = NULL;

    left = MergeSort(left);
    right = MergeSort(right);
    return MergeTwoSorted(left,right);
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
    Node *merge = MergeSort(head);
    print(merge);
    cout<<endl;
    return 0;
}