/*
@csalgo

Chapter Assignment
Problem Statement: Node with maximum child sum
Problem Level: MEDIUM
Problem Description:
Given a generic tree, find and return the node for which sum of its data and data of all its child nodes is maximum.
 In the sum, data of the node and data of its immediate child nodes has to be taken.
Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, 
number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the 
tree is
separated by space.

Output format :
The first and only line of output contains the data of the node with maximum sum, as described in the task.

Constraints:
Time Limit: 1 sec

Sample Input 1 :
5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0

Sample Output 1 :
1



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<algorithm>
#include<limits.h>



template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<int>*> children;

    TreeNode(T data){
        this->data = data;
    }

    ~TreeNode(){
        for(int i=0;i<children.size();i++){
            delete children[i];
        }
    }
};

template<typename T,typename K>
class Pair{
    public:
    T sum;
    TreeNode<T>* maxNode; 

};

TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter Root data "<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNode;
    pendingNode.push(root);

    while(pendingNode.size()!=0){
        TreeNode<int>* front = pendingNode.front();
        pendingNode.pop();
        int n;
        cout<<"Enter Number of children of"<<front->data<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            int childData;
            cout<<"Enter "<<i<<"th child of data of"<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNode.push(child);
        }
    }
    return root;
}



Pair<int,TreeNode<int>*> maxSumNode(TreeNode<int> * root){
    Pair<int,TreeNode<int>*> p1;
    p1.sum = INT_MIN;
    p1.maxNode = NULL;
    if(root == NULL){
        return p1;
    }
    
    queue<TreeNode<int>*> pendingNode;
	pendingNode.push(root);


    while(!pendingNode.empty()){
        TreeNode<int> * front = pendingNode.front();
        pendingNode.pop();

        int n = front->children.size();
        int sum = front->data;

        for(int i = 0; i<n; i++){
            sum = sum + front->children.at(i)->data;
            pendingNode.push(front->children[i]);
        }
        
        if(p1.sum < sum ){
            p1.sum = sum;
        	p1.maxNode = front;
        }
    }
    return p1;
}

// template<typename T>
int pairOutput(TreeNode<int> *root){
    Pair<int,TreeNode<int>*> ans;
    ans = maxSumNode(root);
    return ans.maxNode->data;
}

int main(){
    TreeNode<int>* root;
    root = takeInput();
    cout<<pairOutput(root)<<endl;
    return 0;

}