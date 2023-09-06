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
    // public:
    BinaryTreeNode<int>* root;

    public:
    BST(){
        root = NULL;
    }
    ~BST(){
        delete root;
    }

    private:
    BinaryTreeNode<int>* insertData(int data, BinaryTreeNode<int>* node){
        if(node==NULL){
            BinaryTreeNode<int>* newNode = new BinaryTreeNode<int>(data);
            return newNode;
        }
        if(data < node->data){
            node->left = insertData(data,node->left);
        }else{
            node->right = insertData(data,node->right);
        }
        return node;
    }

    public:
    void insertData(int data){
        this->root = insertData(data,this->root);
    }
    
    private:
    BinaryTreeNode<int>* deleteData(int data,BinaryTreeNode<int>* node){
        if(node==NULL){
            return NULL;
        }

        if(data > node->data){
            node->right = deleteData(data,node->right);
            return node;
        }
        else if(data < node->data){
            node->left = deleteData(data,node->left);
            return node;
        }else{
            if(node->left == NULL && node->right == NULL){
                delete node;
                return NULL;
            }
            else if(node->left == NULL){
                BinaryTreeNode<int>* temp = node->right;
                node->right = NULL;
                delete node;
                return temp;
            }else if(node->right == NULL){
                BinaryTreeNode<int>* temp = node->left;
                node->left = NULL;
                delete node;
                return temp;
            }
            else{
                BinaryTreeNode<int>* minNode = node->right;
                while(minNode->left != NULL){
                    minNode = minNode->left;
                }
                int rightMin = minNode->data;
                node->data = rightMin;
                node->right = deleteData(rightMin,node->right);
                return node;
            }
        }
    }
    public:
    void deleteData(int data){
        root = deleteData(data,root); 
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

    private:
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
    public:
    void printTree(){
        printTree(root);
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



int main(){
    // BinaryTreeNode<int>
    // BinaryTreeNode<int>* root = ;
    BST b;
    b.insertData(10);
    b.insertData(5);
    b.insertData(20);
    b.insertData(7);
    b.insertData(3);
    b.insertData(15);
    b.printTree();
    b.deleteData(10);// root
    b.deleteData(100);
    b.printTree();
    // b.insertData(1500);
    // b.printTree();
}