/*
@csalgo

Coding Problem
Problem Statement: Find path in BST
Problem Level: MEDIUM
Problem Description:
Given a BST and an integer k. Find and return the path from the node with data k and root (if a node with data k is present in given BST) in a list. Return empty list otherwise.
Note: Assume that BST contains all unique elements.
Input Format :
The first line of input contains data of the nodes of the tree in level order form. The data of the nodes of the tree is separated by space. If any node does not have left or right child, take -1 in its place. Since -1 is used as an indication whether the left or right nodes exist, therefore, it will not be a part of the data of any node.   
The following line of input contains an integer, that denotes the value of k.

Output Format :
The first line and only line of output prints the data of the nodes in the path from node k to root. The data of the nodes is separated by single space.

Constraints:
Time Limit: 1 second

Sample Input 1:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
2

Sample Output 1:
2 5 8

@csalgo
*/
#include<iostream>
using namespace std;
#include<queue>
#include<limits.h>
#include<vector>
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

void printTree(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);

    while(!pendingNode.empty()){
        BinaryTreeNode<int>* front = pendingNode.front();
        pendingNode.pop();
        cout<<front->data<<":"<<" ";
        if(front->left != NULL){
            cout<<"L"<<front->left->data<<" ";
            pendingNode.push(front->left);
        }
        if(front->right != NULL){
            cout<<"R"<<front->right->data;
            pendingNode.push(front->right);
        }
        cout<<endl;
    }
}
vector<int>* rootToNodePath(BinaryTreeNode<int>* root,int data){
    if(root==NULL){
        return NULL;
    }

    if(root->data == data){
        vector<int>* output = new vector<int>();
        output->push_back(root->data);
        return output;
    }

    vector<int>* leftOutput = rootToNodePath(root->left,data);
    if(leftOutput != NULL){
        leftOutput->push_back(root->data);
        return leftOutput;
    }

    vector<int>* rightOutput = rootToNodePath(root->right,data);
    if(rightOutput != NULL){
        rightOutput->push_back(root->data);
        return rightOutput;
    }
    else{
        return NULL;
    }
}

int main(){
    BinaryTreeNode<int>* root = takeInputLevelWise();
    int data;
    // printTree(root);
    cout<<"enter your data you want from the path "<<endl;
    cin>>data;
    vector<int>* output = rootToNodePath(root,data);
    for(int i=0;i<output->size();i++){
        cout<<output->at(i)<<endl;
    }

    delete output;// becuse we make vector as a dynamic
    delete root;
}
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1