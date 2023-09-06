/*
@csalgo

Coding Problem
Problem Statement: Height of generic Tree
Problem Level: EASY
Problem Description:
Given a generic tree, find and return the height of given tree.
Input format:
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.

Output Format :
The first and only line of output prints the height of the given generic tree.

Constraints:
Time Limit: 1 sec

Sample Input 1:
10 3 20 30 40 2 40 50 0 0 0 0

Sample Output 1:
3

@csalgo
*/


#include<iostream>
using namespace std;
#include<vector>
#include<queue>

template<typename T>

class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data){
        this->data = data;
    }
};

TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter root data "<<endl;
    cin>>rootData;
    TreeNode<int>* root  = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNode;
    pendingNode.push(root);

    while(pendingNode.size()!=0){
        TreeNode<int>* front = pendingNode.front();
        pendingNode.pop();

        int n;
        cout<<"Enter number of children of "<<front->data<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            int childData;
            cout<<"Enter "<<i<<"th child of data "<<front->data<<endl;
            cin>>childData;

            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNode.push(child);
        }
    }
    return root;
}

int HeightOfTree(TreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    int ans=0;
    int count1=1;
    for(int i=0;i<root->children.size();i++){
        int count = count1 + HeightOfTree(root->children[i]);
        if(count>ans){
            ans= count;
        }
    }
    return ans;
}




void replaceWithDepth(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    root->data = 0;
    root->children.size()==0;
}


void ReplaceWithDepth(TreeNode<int>* root,int depth){
    if(root==NULL){
        return;
    }
    root->data = depth;

    int n = root->children.size();
    for(int i=0;i<n;i++){
        root->children[i]->data = depth+1;
        ReplaceWithDepth(root->children[i],depth+1);
    }
}


void PrintTree(TreeNode<int> *root){
    if(root==NULL){
        return;
    }

    queue<TreeNode<int>*> pendingNode;
    pendingNode.push(root);

    
    cout<<root->data;
    cout<<endl;
    while(pendingNode.size()!=0){
        TreeNode<int> *front = pendingNode.front();
        pendingNode.pop();
        bool flag = false;
        for(int i=0;i<front->children.size();i++){
            flag = true;
          cout<<front->children[i]->data<<",";
        }
        if(flag){
        cout<<endl;
        }
        for(int i=0;i<front->children.size();i++){
            pendingNode.push(front->children[i]);
        }
    }
}

int main(){
    TreeNode<int>* root = takeInput();
    cout<<"Height of tree "<<HeightOfTree(root)<<endl;
    cout<<"before modify tree"<<endl;
    PrintTree(root);
    // replaceWithDepth(root);
    ReplaceWithDepth(root,0);
    cout<<"after repplace with depth "<<endl;
    PrintTree(root);
    return 0;
}