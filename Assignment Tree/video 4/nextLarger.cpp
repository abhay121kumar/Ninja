/*
@csalgo

Chapter Assignment
Problem Statement: Next larger
Problem Level: MEDIUM
Problem Description:
Given a generic tree and an integer n. Find and return the node with next larger element in the tree i.e. find a node with value just greater than n.
Note: Return NULL if no node is present with the value greater than n.
Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  
The following line contains an integer, that denotes the value of n.

Output format :
The first and only line of output contains data of the node, whose data is just greater than n.

Constraints:
Time Limit: 1 sec

Sample Input 1 :
18
10 3 20 30 40 2 40 50 0 0 0 0

Sample Output 1 :
20

Sample Input 2 :
21
10 3 20 30 40 2 40 50 0 0 0 0

Sample Output 2:
30



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


// void nextLargePair(TreeNode<int>* root,int x, int *ans){
//     if(root->data>x && (*ans==INT_MIN || *ans>root->data)) *ans=root->data;
//     for(auto a:root->children) nextLargePair(a, x, ans);
// }

// int nextLargePair(TreeNode<int>* root,int x){
//     if(root==NULL){
//         return 0;
//     }
    
//     int ans = 



    //m-1
    // queue<TreeNode<int>*> pendingNode;
    // pendingNode.push(root);

    // int ans = INT_MIN;
    // while(pendingNode.size() != 0){
    //     TreeNode<int>* front = pendingNode.front();
    //     pendingNode.pop();

    //     if(front->data>x && (ans==INT_MIN || ans>front->data)){
    //         ans = front->data;
    //     }

    //     for(int i=0;i<front->children.size();i++){
    //         pendingNode.push(front->children[i]);
    //     }
    // }
    // return ans;

    //m-2


// }

int main(){
    TreeNode<int>* root = takeInput();
    int x; 
    cout<<"Enter the x element you want the next large"<<endl;
    cin>>x;
    int ans=INT_MAX;
    nextLargePair(root,x, &ans);
    cout<<ans;
    return 0;
}

//10 3 20 30 40 2 40 50 0 0 0 0