/*
@csalgo

Coding Problem
Problem Statement: BST to LL
Problem Level: EASY
Problem Description:
Given a BST, convert it into a sorted linked list. You have to return the head of LL.
Input format:
The first and only line of input contains data of the nodes of the tree in level order form. The data of the nodes of the tree is separated by space. If any node does not have left or right child, take -1 in its place. Since -1 is used as an indication whether the left or right nodes exist, therefore, it will not be a part of the data of any node.

Output Format:
The first and only line of output prints the elements of sorted linked list.

Constraints:
Time Limit: 1 second

Sample Input 1:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1

Sample Output 1:
2 5 6 7 8 10

@csalgo
*/


#include<iostream>
using namespace std;
#include<queue>
#include<limits.h>
template<typename T>
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};
template<typename V>
class Node{
    public:
    int data;
    int *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};


BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data "<<endl;
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);

    while(pendingNode.size()!=0){
        BinaryTreeNode<int>* front = pendingNode.front();
        pendingNode.pop();

        cout<<"Enter left child of front data "<<front->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData!=-1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNode.push(child);
        }

        cout<<"Enter right child of front data "<<front->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData!=-1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNode.push(child);
        }
    }
    return root;
}
// template<typename V>
class linkListHT{
	public:
		Node<int> * Head = NULL;
		Node<int> * Tail = NULL;
		// Node<int> * rightHead = NULL;
		// Node<int> * rightTail =NULL;
};

linkListHT constructSortedList(BinaryTreeNode<int> * root ){
	if(root == NULL){
		linkListHT output;
		return output;
	}
	
	linkListHT leftans = constructSortedList(root->left);
	linkListHT rightans = constructSortedList(root->right);

	Node<int> * newNode = new Node<int>(root->data);

	linkListHT output;

	if(leftans.Head == NULL){
		leftans.Head = newNode;
		if(rightans.Head != NULL){
			newNode->next = rightans.Head;
			output.Tail = rightans.Tail;
		}else{
			output.Tail = newNode;
		}
		
	}else{
		leftans.Tail->next = newNode;
		if(rightans.Head != NULL){
			newNode->next = rightans.Head;
			output.Tail = rightans.Tail;
		}else{
			output.Tail = newNode;
		}
	}

	output.Head = leftans.Head;
	// if(rightans.Head != NULL ){
	// 	output.Tail = rightans.Tail;
	// }else{
	// 	output.Tail = rightans.Head;
	// }
	
	return output;
}

Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
  // Write your code here
  linkListHT output;
  output = constructSortedList(root);
  return output.Head;
}