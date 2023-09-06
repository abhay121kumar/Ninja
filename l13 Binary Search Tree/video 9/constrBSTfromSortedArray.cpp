/*
@csalgo

Coding Problem
Problem Statement: Construct BST
Problem Level: EASY
Problem Description:
Given a sorted integer array A of size n, which contains all unique elements. You need to construct a balanced BST from this input array. Return the root of constructed BST.
Note: If array size is even, take first mid as root.
Input format:
The first line of input contains an integer, which denotes the value of n. The following line contains n space separated integers, that denote the values of array.

Output Format:
The first and only line of output contains values of BST nodes, printed in pre order traversal.

Constraints:
Time Limit: 1 second

Sample Input 1:
7
1 2 3 4 5 6 7

Sample Output 1:
4 2 1 3 6 5 7

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

BinaryTreeNode<int>* sortedArray(int arr[],int si,int ei){
    if(si>ei){
        return 0;
    }
    int mid = (si+ei)/2;

    BinaryTreeNode<int>* leftChild = sortedArray(arr,si,mid-1);
    BinaryTreeNode<int>* rightChild = sortedArray(arr,mid+1,ei);

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(arr[mid]);
    root->left = leftChild;
    root->right = rightChild;

    return root;
}

void printBST(BinaryTreeNode<int>* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printBST(root->left);
    printBST(root->right);
}
int main(){
    int n;
    cout<<"size of an array "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BinaryTreeNode<int>* root = sortedArray(arr,0,n-1);
    printBST(root);
}