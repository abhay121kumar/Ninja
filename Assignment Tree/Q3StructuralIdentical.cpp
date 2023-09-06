/*
@csalgo

Chapter Assignment
Problem Statement: Structurally identical
Problem Level: MEDIUM
Problem Description:
Given two generic trees, return true if they are structurally identical. Otherwise return false.
Structural Identical
If the two given trees are made of nodes with the same values and the nodes are arranged in the same way, then the trees are called identical.

Input format :
The first line of input contains data of the nodes of the first tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  
The following line of input contains data of the nodes of the second tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.

Output format :
The first and only line of output contains true, if the given trees are structurally identical and false, otherwise.

Constraints:
Time Limit: 1 sec

Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
10 3 20 30 40 2 40 50 0 0 0 0

Sample Output 1 :
true

Sample Input 2 :
10 3 20 30 40 2 40 50 0 0 0 0 
10 3 2 30 40 2 40 50 0 0 0 0

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

// int countNodes(TreeNode<int>* root){
//     int ans=1;
//     for(int i=0;i<root->children.size();i++){
//         ans+=countNodes(root->children[i]);
//     }
//     return ans;
// }

bool structualIdentical(TreeNode<int>* root1,TreeNode<int>* root2){
    if(root1==NULL && root2!=NULL){
        return false;
    }
    bool flag = false;

    if(root1->data!=root2->data){
        return flag;
    }
    else{
        flag = true;
    }
    for(int i=0;i<(root1->children.size() && root2->children.size());i++){
        flag = structualIdentical(root1->children[i],root2->children[i]);
    }
    return flag;
}
int main(){
    TreeNode<int>* root1 = takeInput();
    TreeNode<int>* root2 = takeInput();
    // cout<<countNodes(root1)<<endl;
    // cout<<countNodes(root2)<<endl;
    cout<<structualIdentical(root1,root2)<<endl;
    return 0;
}

