/*
@csalgo

Coding Problem
Problem Statement: Minimum and Maximum in the Binary Tree
Problem Level: MEDIUM
Problem Description:
For a given a Binary Tree of type integer, find and return the minimum and the maximum data values.
Return the output as an object of Pair class, which is already created.
Note:
All the node data will be unique and hence there will always exist a minimum and maximum node data.

Input Format:
The first and the only line of input will contain the node data, all separated by a single space. Since -1 is used as an indication whether the left or right node data exist for root, it will not be a part of the node data.

Output Format:
The only line of output prints two integers denoting the minimum and the maximum data values respectively. A single line will separate them both.

Constraints:
2 <= N <= 10^5
Where N is the total number of nodes in the binary tree.

Time Limit: 1 sec

Sample Input 1:
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1

Sample Output 1:
1 14

Sample Input 2:
10 20 60 -1 -1 3 50 -1 -1 -1 -1

Sample Output 2:
3 60

@csalgo
*/


#include<iostream>
using namespace std;
#include<queue>
#include<limits.h>
template<typename T>
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};

BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);

    while(pendingNode.size()!=0){
        BinaryTreeNode<int>* front = pendingNode.front();
        pendingNode.pop();

        cout<<"Enter left child of front data "<<front->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData!=-1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNode.push(child);
        }

        cout<<"Enter right child of front data "<<front->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData!=-1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNode.push(child);
        }
    }
    return root;
}



void printTree(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);

    while(!pendingNode.empty()){
        BinaryTreeNode<int>* front = pendingNode.front();
        pendingNode.pop();
        cout<<front->data<<":"<<" ";
        if(front->left != NULL){
            cout<<"L"<<front->left->data<<" ";
            pendingNode.push(front->left);
        }
        if(front->right != NULL){
            cout<<"R"<<front->right->data;
            pendingNode.push(front->right);
        }
        cout<<endl;
    }
}


pair<int,int> MaxMin(BinaryTreeNode<int>* root){
    if(root==NULL){
        pair<int,int> p;
        p.first = INT_MAX; // for min.
        p.second = INT_MIN;// for max.
        return p;
    }

    pair<int,int> p1;
    p1.first = root->data;
    p1.second = root->data;

    queue<BinaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);

    // while(pendingNode.size()!=0){
    //     BinaryTreeNode<int>* front = pendingNode.front();
    //     pendingNode.pop();

    //     int ans1,ans2;
    //     if(front->left!=NULL){
    //         pendingNode.push(front->left);
    //         ans1  = front->left->data;
    //     }
    //     if(front->right!=NULL){
    //         pendingNode.push(front->right);
    //         ans2 = front->right->data;
    //     }

    //     if(ans1<p1.first){
    //         p1.first = ans1;
    //     }
    //     if(ans2<p1.first){
    //         p1.first = ans2;
    //     }
    //     if(ans1>p1.second){
    //         p1.second = ans1;
    //     }
    //     if(ans2>p1.second){
    //         p1.second = ans2;
    //     }
    // }

    // littele bit optimized code not bulky code
    while(pendingNode.size()!=0){
        BinaryTreeNode<int>* front = pendingNode.front();
        pendingNode.pop();

        if(front->left!=NULL){
            pendingNode.push(front->left);

            if(front->left->data < p1.first){
                p1.first = front->left->data;
            }
            if(front->left->data > p1.second){
                p1.second = front->left->data;
            }
        }
        if(front->right!=NULL){
            pendingNode.push(front->right);

            if(front->right->data < p1.first){
                p1.first = front->right->data;
            }
            if(front->right->data > p1.second){
                p1.second = front->right->data;
            }
        }
    }
    return p1;
}

int main(){
    BinaryTreeNode<int>* root = takeInputLevelWise();
    printTree(root);
    // cout<<"Diameter of tree "<<DiameterOfBT(root);
    pair<int,int> p = MaxMin(root);
    cout<<"minimum "<<p.first<<endl;
    cout<<"maxmimum "<<p.second<<endl;
    // cout<<endl;
    return 0;
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1