
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

    // method 1 to delete the nodes of tree after using the tree nodes
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

// // method 2 to delete the nodes of tree after using the tree nodes
// void deleteTreeNode(TreeNode<int>* root){
//     for(int i=0;i<root->children.size();i++){
//         deleteTreeNode(root->children[i]);
//     }
//     delete root;
// }


int main(){
    TreeNode<int>* root = takeInput();
    // deleteTreeNode(root);
    cout<<endl;
    return 0;
}

// 1 3 2 3 4 2 5 6 0 1 9 0 2 7 8 0 0 0 