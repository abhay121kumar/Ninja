/*
@csalgo

Coding Problem
Problem Statement: Search in BST
Problem Level: MEDIUM
Problem Description:
Given a BST and an integer k. Find if the integer k is present in given BST or not. You have to return true, if node with data k is present, return false otherwise.
Note: Assume that BST contains all unique elements.
Input Format:
The first line of input contains data of the nodes of the tree in level order form. The data of the nodes of the tree is separated by space. If any node does not have left or right child, take -1 in its place. Since -1 is used as an indication whether the left or right nodes exist, therefore, it will not be a part of the data of any node.   
The following line of input contains an integer, that denotes the value of k.

Output Format:
The first and only line of output contains a boolean value. Print true, if node with data k is present, print false otherwise.

Constraints:
Time Limit: 1 second

Sample Input 1 :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
2

Sample Output 1 :
true

Sample Input 2 :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
12

Sample Output 2 :
false

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

BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
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

bool searchBST(BinaryTreeNode<int>* root,int x){
    if(root == NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    bool flag=false;
    if(root->data > x){
        flag = searchBST(root->left,x);
    }
    if(root->data < x){
        flag = searchBST(root->right,x);
    }
    return flag;
}



int main(){
    BinaryTreeNode<int>* root = takeInputLevelWise();
    int x;
    cout<<"enter the element you want to search"<<endl;
    cin>>x;
    int ans = searchBST(root,x);
    if(ans){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
   
    // cout<<endl;
    return 0;
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1