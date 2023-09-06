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

void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head -> next;
    }
}

int main(){
    cout<<"Enter head 1 element: "<<endl;
    Node *head1 = takeInputBetter();
    print(head1);
    cout<<endl;
    cout<<"Enter head 2 element :"<<endl;
    Node *head2 = takeInputBetter();
    print(head2);
    cout<<endl;
    Node *head3 = MergeTwoSorted(head1,head2);
    print(head3);
    cout<<endl;
    return 0;
}



// #include<iostream>
// using namespace std;

// class Node{
//     public:

//     int data;
//     Node *next;

//     Node(int data){
//         this->data = data;
//         next = NULL;
//     }
// };

// Node* takeInputBetter(){
//     int data;
//     cin>>data;
//     Node *head = NULL;
//     Node *tail = NULL;
    
//     while(data != -1){
//         Node *newNode = new Node(data);
//         if(head==NULL){
//             head = newNode;
//             tail = newNode;
//         }
//         else{
//             tail -> next = newNode;
//             tail = newNode;
//         }
//         cin>>data;
//     }
//     return head;
// }

// Node* MergeTwoSorted(Node *head1,Node *head2){
//     Node *fh = NULL;
//     Node *ft = NULL;
//     if(head1==NULL && head2==NULL){
//         return 0;
//     }
//     else if(head1 == NULL){
//         return head2;
//     }
//     else if(head2 == NULL){
//         return head1;
//     }
//     else{ 
//         if(head1->data <= head2->data){
//             fh=head1;
//             head1 = head1->next;
//             ft=fh;
//         }
//         else{
//             fh=head2;
//             head2 = head2->next;
//             ft=fh;
           
//         }
//         while(head1!=NULL && head2 != NULL){
//             if(head1->data <= head2->data){
//                 ft -> next = head1;
//                 head1 = head1->next;
//                 // ft=head1;
//                 ft = ft->next;
//             }
//             else{
//                 ft->next = head2;
//                 head2 = head2 -> next;
//                 // ft=head2;
//                 ft = ft->next;
//             }
//         }
//         while(head1 != NULL){
//             ft ->next = head1;
//             head1 = head1 -> next;
//             // ft = head1;
//             ft = ft->next;
//         }
//         while(head2 != NULL){
//             ft -> next = head2;
//             head2 = head2 -> next;
//             // ft = head2;
//             ft = ft ->next;
//         }
//     }
//     return fh;
// }

// void print(Node *head){
//     while(head != NULL){
//         cout<<head->data<<" ";
//         head = head -> next;
//     }
// }

// int main(){
//     cout<<"Enter head 1 element: "<<endl;
//     Node *head1 = takeInputBetter();
//     print(head1);
//     cout<<endl;
//     cout<<"Enter head 2 element :"<<endl;
//     Node *head2 = takeInputBetter();
//     print(head2);
//     cout<<endl;
//     Node *head3 = MergeTwoSorted(head1,head2);
//     // cout<<"Hello"<<endl;
//     print(head3);
//     cout<<endl;
//     return 0;
// }