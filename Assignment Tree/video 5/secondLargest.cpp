/*
@csalgo

Chapter Assignment
Problem Statement: Second Largest Element In Tree
Problem Level: MEDIUM
Problem Description:
Given a generic tree, find and return the node with second largest value in given tree.
Note: Return NULL if no node with required value is present.
Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.

Output Format :
The first and only line of output contains data of the node with second largest data.

Constraints:
Time Limit: 1 sec

Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0

Sample Output 1 :
40



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<limits.h>

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
            cout<<"Enter "<<i<<"th child of data"<<front->data<<endl;
            cin>>childData;

            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNode.push(child);
        }
    }
    return root;
}
template<typename T>
class Pair{
    public:
    T Large;
    T nextLargeNode;
    // TreeNode<int> *nextLargeNode;
};

int secondLargest(TreeNode<int>* root){
    if(root==NULL){
        return 0;
    }

    queue<TreeNode<int>*> pendingNode;
    pendingNode.push(root);

    Pair<int> p1;
    p1.Large = INT_MIN;
    p1.nextLargeNode = 0;

    while(pendingNode.size()!=0){
        TreeNode<int>* front = pendingNode.front();
        pendingNode.pop();

        int n = front->children.size();
        int small = front->data;

        for(int i=0;i<n;i++){
            if(small<front->children[i]->data){
                small = front->children[i]->data;
            }
            pendingNode.push(front->children[i]);
        } 

        if(p1.Large<small){
            p1.nextLargeNode = p1.Large;
            p1.Large = small;
        }
        if(p1.Large>p1.nextLargeNode && p1.nextLargeNode<small && p1.Large!=small){
            p1.nextLargeNode = small;
        }
    }
    return p1.nextLargeNode;
}

int main(){
    TreeNode<int>* root = takeInput();
    cout<<secondLargest(root)<<endl;
    return 0;
}

//10 3 20 30 40 2 80 50 0 0 0 0
//5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0