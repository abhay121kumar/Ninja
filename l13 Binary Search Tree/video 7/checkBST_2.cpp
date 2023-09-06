
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

class IsBSTreturn{
    public:
    bool isBST;
    int minimum;
    int maxmimum;
};

IsBSTreturn isBST2(BinaryTreeNode<int>* root){
    if(root==NULL){
        IsBSTreturn output;
        output.isBST = true;
        output.minimum = INT_MAX;
        output.maxmimum = INT_MIN;
        return output;
    }

    IsBSTreturn leftOutput = isBST2(root->left);
    IsBSTreturn rightOutput = isBST2(root->right);

    int minimum = min(root->data,min(leftOutput.minimum,rightOutput.minimum));
    int maximum = max(root->data,max(leftOutput.maxmimum,rightOutput.maxmimum));

    bool isBSTFinal = (root->data > leftOutput.maxmimum) && (root->data <= rightOutput.minimum) && leftOutput.isBST && rightOutput.isBST;

    IsBSTreturn output;
    output.isBST = isBSTFinal;
    output.minimum = minimum;
    output.maxmimum = maximum;

    return output;
}




int main(){
    BinaryTreeNode<int>* root = takeInputLevelWise();
    IsBSTreturn obj;
    obj = isBST2(root);
    cout<<"is BST "<<obj.isBST<<endl;
   
    // cout<<endl;
    return 0;
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1