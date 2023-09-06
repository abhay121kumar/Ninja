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

// My rough work to insert and delete node in BST
class BST{
    BinaryTreeNode<int>* root;

    public:
    BST(){
        root = NULL;
    }
    ~BST(){
        delete root;
    }

    BinaryTreeNode<int>* insertData(int data, BinaryTreeNode<int>*root){
        if(root==NULL){
            BinaryTreeNode<int>* newNode = new BinaryTreeNode<int>(data);
            return newNode;
        }
        else{
            if(data<root->data){
                BinaryTreeNode<int>* leftOutput = insertData(data,root->left);
                return leftOutput;
            }
            else{
                BinaryTreeNode<int>* rightOutput = insertData(data,root->right);
                return rightOutput;
            }
        }
    }
    BinaryTreeNode<int>* deleteData(int data,BinaryTreeNode<int>* root){
        if(root==NULL){
            return;
        }
        if(root->data < data){
            BinaryTreeNode<int>* rightOutput = deleteData(data,root->right);
            delete rightOutput;
            return rightOutput;
        }
        else if(root->data > data){
            BinaryTreeNode<int>* leftOutput = deleteData(data,root->left);
            delete leftOutput;
            return leftOutput;
        }
        else{
            if(root->left == NULL && root->right == NULL){
                return NULL;
            }
            else if(root->left != NULL && root->right == NULL){
                return root->left;
            }
            else if(root->left == NULL && root->right != NULL){
                return root->right;
            }
            else{
                int maximum = max(root->data,max(root->left))
            }
        }
    }
    private:
    bool hasData(int data,BinaryTreeNode<int>* node){
        if(node==NULL){
            return false;
        }
        if(node->data==data){
            return true;
        }else if(data<node->data){
            return hasData(data,node->left);
        }else{
            return hasData(data,node->right);
        }
    }

    public:
    bool hasData(int data){
        return hasData(data,root);
    }
};