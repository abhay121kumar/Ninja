
/*
@csalgo

Chapter Assignment
Problem Statement: Contains x
Problem Level: EASY
Problem Description:
Given a generic tree and an integer x, check if x is present in the given tree or not. Return true if x is present, return false otherwise.
Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  
The following line contains an integer, that denotes the value of x.

Output format :
The first and only line of output contains true, if x is present and false, otherwise.

Constraints:
Time Limit: 1 sec

Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0
40

Sample Output 1 :
true

Sample Input 2 :
10 3 20 30 40 2 40 50 0 0 0 0
4

Sample Output 2:
false



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

bool containX(TreeNode<int>* root,int x){
    if(root==NULL){
        return false;
    }
    bool flag = false;
    if(root->data == x){
        flag = true;
        return flag;
    }
    for(int i=0;i<root->children.size();i++){
        flag = containX(root->children[i],x);
    }
    return flag;
}

int main(){
    int x;
    cout<<"Enter x element value: "<<endl;
    cin>>x;
    TreeNode<int>* root = takeInput();
    int ans = containX(root,x);
    if(ans==0){
        cout<<"false"<<endl;
    }
    else{
        cout<<"True"<<endl;
    }
    // cout<<endl;
    return 0;
}

// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0