/*
@csalgo

Coding Problem
Problem Statement: Print Tree level wise
Problem Level: MEDIUM
Problem Description:
Given a generic tree, print the input tree in level wise order.
For printing a node with data N, you need to follow the exact format -
N:x1,x2,x3,...,xn
where, N is data of any node present in the generic tree. x1, x2, x3, ...., xn are the children of node N. Note that there is no space in between.

You need to print all nodes in the level order form in different lines.
Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.

Output Format :
The first and only line of output contains the elements of the tree in level wise order, as described in the task.

Constraints:
Time Limit: 1 sec

Sample Input 1:
10 3 20 30 40 2 40 50 0 0 0 0

Sample Output 1:
10:20,30,40
20:40,50
30:
40:
40:
50:

@csalgo
*/

#include<iostream>
using namespace std;
#include<vector>
#include<queue>
template <typename T>

class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> childArray;

    TreeNode(T data){
        this->data = data;
    }
};


TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter Root data "<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> childNode;
    childNode.push(root);

    while(childNode.size()!=0){
        TreeNode<int>* front = childNode.front();
        childNode.pop();
        cout<<"Enter num of child of root "<<front->data<<endl;
        int TotalchildOfRoot;
        cin>>TotalchildOfRoot;
        for(int i=0;i<TotalchildOfRoot;i++){
            int childData;
            cout<<"Enter "<<i<<" th child of data "<<front->data<<endl;
            cin>>childData;

            TreeNode<int>* child = new TreeNode<int>(childData);
            front->childArray.push_back(child);
            childNode.push(child);
        }
    }
    return root;
}

void printInput(TreeNode<int>* root){
    // TreeNode<int>* root = new TreeNode<int>(rootData);// why wrong
    queue<TreeNode<int>*> childNode;
    childNode.push(root);

    while(childNode.size()!=0){
        TreeNode<int>* front = childNode.front();
        cout<<front->data<<":";
        childNode.pop();
        for(int i=0;i<front->childArray.size();i++){
            cout<<front->childArray[i]->data<<",";
        }
        cout<<endl;
        for(int i=0;i<front->childArray.size();i++){
            childNode.push(front->childArray[i]);
           
        }
    }

}

int main(){
    TreeNode<int>* root = takeInput();
    printInput(root);
}