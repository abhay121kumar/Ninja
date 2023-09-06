#include<iostream>
using namespace std;
#include<vector>


template<typename T>
class TreeNode{
    public:
    T data;
    // vector<TreeNode<T>*> children;
    //or
    vector<TreeNode*> children;

    TreeNode(T data){
        this->data = data;

    }
};

TreeNode<int> *takeInput(){
    int rootData;
    cout<<"Enter Data: "<<endl;
    cin>>rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    int n;
    cout<<"Enter Number of children of "<<rootData<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

void PrintTree(TreeNode<int> *root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        PrintTree(root->children[i]);
    }
}

int main(){
    TreeNode<int> *root = takeInput();
    PrintTree(root);
}

/*
1:2,3,4,
2:5,6,
5:
6:
3:7,
7:
4:8,
8:
*/