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


class BST{
    BinaryTreeNode<int>* root;

    public:
    BST(){
        root = NULL;
    }
    ~BST(){
        delete root;
    }

    void deleteData(){

    }
    void insertData(){

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