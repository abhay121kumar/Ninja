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

TreeNode<int> *takeInputLevelWise(){
    int rootData;
    cout<<"Enter root Data: "<<endl;
    cin>>rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    
    //creating TreeNode pointer integer type queue
    queue<TreeNode<int>*> pendingNode;
    pendingNode.push(root);

    while(pendingNode.size()!=0){
        // creating front pointer show that we can access first node of queue
        TreeNode<int> *front = pendingNode.front();
        pendingNode.pop();

        cout<<"Enter Number of Children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childData;

            // TreeNode<int> child(childData);// we can not create static child because jab hamra ya fun. over ho jaye ga then root ka access hm se chale jaye ga means destroy hojaye ga isliye hm static nhi bana shka te hai
            // front->children.push_back(&child);
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNode.push(child);
        }
    }
    return root;
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
    // while(pendingNode.size()!=0){
    //     TreeNode<int> *front = pendingNode.front();
    //     cout<<front->data<<":";
    //     pendingNode.pop();
    //     for(int i=0;i<front->children.size();i++){
    //       cout<<front->children[i]->data<<",";
    //     }

    //     cout<<endl;
    //     for(int i=0;i<front->children.size();i++){
    //         pendingNode.push(front->children[i]);
    //     }
    // }
}

int main(){
    TreeNode<int> *root = takeInputLevelWise();
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