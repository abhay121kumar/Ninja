
#include<iostream>
using namespace std;
#include<queue>

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

// int HeightOfBT(BinaryTreeNode<int>* root){
//     if(root==NULL){
//         return 0;
//     }
//     return 1 + max(HeightOfBT(root->left),HeightOfBT(root->right));

// }
// int DiameterOfBT(BinaryTreeNode<int>* root){
//     if(root==NULL){
//         return 0;
//     }
//     int LeftRight = HeightOfBT(root->left) +  HeightOfBT(root->right);
//     int leftHight = DiameterOfBT(root->left);
//     int rightHight = DiameterOfBT(root->right);

//     return max(LeftRight,max(leftHight,rightHight));
// }

pair<int,int> diameterHeightBetter(BinaryTreeNode<int>* root){
    if(root==NULL){
        pair<int,int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }

    pair<int,int> leftAns = diameterHeightBetter(root->left);
    pair<int,int> rightAns = diameterHeightBetter(root->right);

    int lh = leftAns.first;
    int ld = leftAns.second;
    int rh = rightAns.first;
    int rd = rightAns.second;

    int height = 1 + max(lh,rh);
    int diameter = max(lh+rh,max(ld,rd));

    pair<int,int> p;
    p.first = height;
    p.second = diameter;
    return p;
}

int main(){
    BinaryTreeNode<int>* root = takeInputLevelWise();
    printTree(root);
    // cout<<"Diameter of tree "<<DiameterOfBT(root);
    pair<int,int> p = diameterHeightBetter(root);
    cout<<"height "<<p.first<<endl;
    cout<<"diameter "<<p.second<<endl;
    // cout<<endl;
    return 0;
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1