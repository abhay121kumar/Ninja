#include <iostream>
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


int main()
{
    // statically
    Node n1(10);
    Node *head = &n1;
    Node n2(20);

    n1.next = &n2;

    cout<<n1.data<<" "<<n2.data<<endl;
    cout<<head->data<<endl;
    cout<<head->next<<endl;
    return 0;
}