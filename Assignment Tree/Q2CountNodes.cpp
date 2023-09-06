/*
@csalgo

Chapter Assignment
Problem Statement: Count nodes
Problem Level: EASY
Problem Description:
Given a tree and an integer x, find and return the number of nodes which contains data greater than x.
Input format:
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  
The following line contains an integer, that denotes the value of x.

Output Format :
The first and only line of output prints the count of nodes greater than x.

Constraints:
Time Limit: 1 sec

Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0
35

Sample Output 1 :
3

Sample Input 2 :
10 3 20 30 40 2 40 50 0 0 0 0
10

Sample Output 2:
5



=====Answer=====
Correct Option: 

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
    ~TreeNode(){
        for(int i=0;i<children.size();i++){
            delete children[i];
        }
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

int countLeafNode(TreeNode<int>* root,int x){
    if(root==NULL){
        return 0;
    }
    int count = 0;
    if(root->data>x){
        count++;;
    }
    for(int i=0;i<root->children.size();i++){
        count = count + countLeafNode(root->children[i],x);
    }
    return count;
}
int main(){
    int x;
    cout<<"Enter data of x "<<endl;
    cin>>x;
    TreeNode<int>* root = takeInput();
    cout<<countLeafNode(root,x)<<endl;
    return 0;
}

