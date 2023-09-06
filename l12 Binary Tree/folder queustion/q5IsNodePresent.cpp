/*
@csalgo

Coding Problem
Problem Statement: Is node present?
Problem Level: EASY
Problem Description:
For a given Binary Tree of type integer and a number X, find whether a node exists in the tree with data X or not.
Input Format:
The first and the only line of input will contain the node data, all separated by a single space. Since -1 is used as an indication whether the left or right node data exist for root, it will not be a part of the node data.

Output Format:
The only line of output prints 'true' or 'false'.

Note:
You are not required to print anything explicitly. It has already been taken care of.

Constraints:
1 <= N <= 10^5
Where N is the total number of nodes in the binary tree.

Time Limit: 1 sec

Sample Input 1:
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
7

Sample Output 1:
true

Sample Input 2:
2 3 4 -1 -1 -1 -1
10

Sample Output 2:
false

@csalgo
*/

#include<iostream>
using namespace std;
#include<queue>

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

bool isNodePresent(BinaryTreeNode<int>* root,int x){
    if(root==NULL){
        return false;
    }
    queue<BinaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);
    bool flag = false;
    while(!pendingNode.empty()){
        BinaryTreeNode<int>* front = pendingNode.front();
        pendingNode.pop();
        
        if(front->data == x){
            flag = true;
            break;
        }
        if(front->left != NULL){
            // cout<<"L"<<front->left->data<<" ";
            pendingNode.push(front->left);
        }
        if(front->right != NULL){
            // cout<<"R"<<front->right->data;
            pendingNode.push(front->right);
        }
    }
    return flag;
}

int main(){
    BinaryTreeNode<int>* root = takeInputLevelWise();
    printTree(root);
    int x;
    cout<<"Enter x element you want to search"<<endl;
    cin>>x;
    cout<<"is node present in Binary Tree "<<isNodePresent(root,x);
    cout<<endl;
    return 0;
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1