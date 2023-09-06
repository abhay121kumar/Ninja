/*
@csalgo

Coding Problem
Problem Statement: Postorder Binary Tree
Problem Level: EASY
Problem Description:
For a given Binary Tree of integers, print the post-order traversal.
Input Format:
The first and the only line of input will contain the node data, all separated by a single space. Since -1 is used as an indication whether the left or right node data exist for root, it will not be a part of the node data.

Output Format:
The only line of output prints the post-order traversal of the given binary tree.

Constraints:
1 <= N <= 10^6
Where N is the total number of nodes in the binary tree.

Time Limit: 1 sec

Sample Input 1:
1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1

Sample Output 1:
4 5 2 6 7 3 1

Sample Input 2:
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1

Sample Output 1:
2 9 3 6 10 5

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

void printLevelWise(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);

    while(pendingNode.size()!=0){
        int size = pendingNode.size();

        for(int i=0;i<size;i++){
            BinaryTreeNode<int>* front = pendingNode.front();
            pendingNode.pop();
            cout<<front->data<<" ";
            if(front->left!=NULL){
                pendingNode.push(front->left);
            }
            if(front->right!=NULL){
                pendingNode.push(front->right);
            }
        }
        cout<<endl;
    }
}

BinaryTreeNode<int>* buildTreeheader(BinaryTreeNode<int>*);

int main(){
    BinaryTreeNode<int>* root = takeInputLevelWise();
    printTree(root);
    cout<<endl;
    printLevelWise(root);
    cout<<endl;
    return 0;
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1