// #include<iostream>
// #include<map>
// #include<queue>
// using namespace std;
// #include<vector>
// #include<string>
// #include<bits/stdc++.h>

// template<typename T>
// class BinaryTreeNode{
//     public:
//     int data;
//     int leftEdge;
//     int rightEdge;
//     BinaryTreeNode* left;
//     BinaryTreeNode* right;

//     BinaryTreeNode(T data){
//         this->data = data;
//         this->leftEdge = -1;
//         this->rightEdge = -1;
//         left=NULL;
//         right=NULL;
//     }
//     ~BinaryTreeNode(){
//         delete left;
//         delete right;
//     }
// };

// void printTree(BinaryTreeNode<int> *root){
//     if(root==NULL){
//         return;
//     }
//     queue<BinaryTreeNode<int>*> pendingNode;
//     pendingNode.push(root);
//     while(!pendingNode.empty()){
//         BinaryTreeNode<int>*front = pendingNode.front();
//         pendingNode.pop();
//         cout<<front->data<<":"<<" ";
//         if(front->left!=NULL){
//             cout<<"L "<<front->left->data<<" ";
//             pendingNode.push(front->left);
//         }
//         if(front->right!=NULL){
//             cout<<"R "<<front->right->data<<" ";
//             pendingNode.push(front->right);
//         }
//         cout<<endl;
//     }
// }


// vector<int> rootToNodePath(BinaryTreeNode<int>* root,int data){
    
// }

// void huffmanCodes(string s, vector<int> f){
//     vector<int> count;
//     // map<pair<pair<char,int>,vector<int>>,int> ourMap;
//     // map<pair<char,int>,vector<int>> ourMap;
//     map<char,int> ourMap;
//     for(int i=0;i<s.length();i++){
//         ourMap[s[i]]+=1;
//     }
//     // priority_queue<int, vector<int>, greater<int>> pq;
//     priority_queue<pair<int,BinaryTreeNode<int>*>, vector<pair<int,BinaryTreeNode<int>*>>, greater<pair<int, BinaryTreeNode<int>*>>> pq;

//     for(auto it:f){
//         BinaryTreeNode<int> *node = new BinaryTreeNode<int>(it); 
//         pq.push({it,node});
//     }

//     while(!pq.empty() && pq.size()!=1){
//         int value1 = pq.top().first;
//         BinaryTreeNode<int> *leftchild = pq.top().second;
//         pq.pop();
//         int value2 = pq.top().first;
//         BinaryTreeNode<int> *rightchild = pq.top().second;
//         pq.pop();

//         int sum = value1+value2;
//         BinaryTreeNode<int> *root = new BinaryTreeNode<int>(sum);
//         root->left = leftchild;
//         root->right = rightchild;
//         root->leftEdge = 0;
//         root->rightEdge = 1;
//         // f.push_back(sum);
//         pq.push({sum,root});
//     }

//     BinaryTreeNode<int>* root1 = pq.top().second;
//     printTree(root1);
    
//     map<char,vector<int>> ansMap;
//     for(int i=0;i<f.size();i++){
//         vector<int> output = rootToNodePath(root1,f[i]);
//         ansMap[s[i]] = output;
//     }
// }



// // void huffmanCodes(string s, vector<int> f){
// //     vector<int> count;
// //     map<char,int> ourMap;
// //     for(int i=0;i<s.length();i++){
// //         ourMap[s[i]]+=1;
// //     }

// // priority_queue<pair<int, BinaryTreeNode<int>*>, vector<pair<int, BinaryTreeNode<int>*>>, greater<pair<int, BinaryTreeNode<int>*>>> pq;

// //     for(auto it:f){
// //         BinaryTreeNode<int>* b = new BinaryTreeNode<int>(it);
// //         pq.push({it, b});
// //     }

// //     while(!pq.empty() && pq.size()!=1){
// //         int value1 = pq.top().first;
// //         BinaryTreeNode<int> *leftchild = pq.top().second;
// //         pq.pop();
// //         int value2 = pq.top().first;
// //         BinaryTreeNode<int> *rightchild = pq.top().second;
// //         pq.pop();
// //         int sum = value1+value2;
// //         BinaryTreeNode<int> *root = new BinaryTreeNode<int>(sum);
// //         root->left = leftchild;
// //         root->right = rightchild;
// //         pq.push({sum, root});
// //     }

// //     BinaryTreeNode<int>* root1 = pq.top().second;
// //     printTree(root1);
// // }

// int main(){
//     string s = "abcde";
//     vector<int> f = {5,9,12,13,16,45};
//     huffmanCodes(s,f);
//     return 0;
// }





// // void huffmanCodes(string s, vector<int> f){
// //     vector<int> count;
// //     map<char,int> ourMap;
// //     for(int i=0;i<s.length();i++){
// //         ourMap[s[i]]+=1;
// //     }
// //     priority_queue<int, vector<int>, greater<int>> pq;
// //     for(auto it:f){
// //         pq.push(it);
// //     }
// //     while(!pq.empty() && pq.size()!=1){
// //         int value1 = pq.top();
// //         pq.pop();
// //         BinaryTreeNode<int> *leftchild = new BinaryTreeNode<int>(value1);
// //         int value2 = pq.top();
// //         pq.pop();
// //         BinaryTreeNode<int> *rightchild = new BinaryTreeNode<int>(value2);
// //         int sum = value1+value2;
// //         BinaryTreeNode<int> *root = new BinaryTreeNode<int>(sum);
// //         root->left = leftchild;
// //         root->right = rightchild;
// //         f.push_back(sum);
// //         pq.push(sum);
// //     }

// //     BinaryTreeNode<int>* root1 = new BinaryTreeNode<int>(pq.top());
// //     printTree(root1);
// // }








#include<iostream>
#include<map>
#include<queue>
using namespace std;
#include<vector>
#include<string>
#include<bits/stdc++.h>

template<typename T>
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(T data){
        this->data = data;
        left=NULL;
        right=NULL;
    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};

void printTree(BinaryTreeNode<pair<int, char>> *root, string s, map<char, string> &m){
    if(root->left==NULL && root->right==NULL){
        m[root->data.second]=s;
        return;
    }
    printTree(root->left, s+'0', m);
    printTree(root->right, s+'1', m);
    return;
}

void huffmanCodes(string s, vector<int> f){
priority_queue<pair<int, BinaryTreeNode<pair<int, char>>>, vector<pair<int, BinaryTreeNode<pair<int, char>>>>, greater<pair<int, BinaryTreeNode<pair<int, char>>*>>> pq;
    for(int i=0; i<s.length(); i++){
        BinaryTreeNode<pair<int, char>>* b = new BinaryTreeNode<pair<int, char>>({f[i], s[i]});
        pq.push({f[i], b});
    }

    while(!pq.empty() && pq.size()!=1){
        int value1 = pq.top().first;
        BinaryTreeNode<pair<int, char>> *leftchild = pq.top().second;
        pq.pop();
        int value2 = pq.top().first;
        BinaryTreeNode<pair<int, char>> *rightchild = pq.top().second;
        pq.pop();
        BinaryTreeNode<pair<int, char>> *root = new BinaryTreeNode<pair<int, char>>({leftchild->data.first+rightchild->data.first, leftchild->data.second+rightchild->data.second});
        root->left = leftchild;
        root->right = rightchild;
        pq.push({leftchild->data.first+rightchild->data.first, root});
    }

    BinaryTreeNode<pair<int, char>>* root1 = pq.top().second;
    map<char, string> m;
    printTree(root1, "", m);
    for(auto x:m){
        cout<<x.first<<" : "<<x.second<<"\n";
    }
}

int main(){
    string s = "abcdef";
    vector<int> f = {5,9,12,13,16,45};
    huffmanCodes(s,f);
    return 0;
}








// #include<iostream>
// #include<map>
// #include<queue>
// using namespace std;
// #include<vector>
// #include<string>
// #include<bits/stdc++.h>

// template<typename T>
// class BinaryTreeNode{
//     public:
//     int data;
//     int leftEdge;
//     int rightEdge;
//     BinaryTreeNode* left;
//     BinaryTreeNode* right;

//     BinaryTreeNode(T data){
//         this->data = data;
//         this->leftEdge = -1;
//         this->rightEdge = -1;
//         left=NULL;
//         right=NULL;
//     }
//     ~BinaryTreeNode(){
//         delete left;
//         delete right;
//     }
// };

// // void printTree(BinaryTreeNode<pair<int, char>> *root, string s, map<char, string> &m){
// void printTree(BinaryTreeNode<int> *root, string s, map<char, string> &m){
//     if(root->left==NULL && root->right==NULL){
//         m[root->data.second]=s;
//         return;
//     }
//     printTree(root->left, s+'0', m);
//     printTree(root->right, s+'1', m);
//     return;
// }


// void huffmanCodes(string s, vector<int> f){
//     vector<int> count;
//     // map<pair<pair<char,int>,vector<int>>,int> ourMap;
//     // map<pair<char,int>,vector<int>> ourMap;
//     map<char,int> ourMap;
//     for(int i=0;i<s.length();i++){
//         ourMap[s[i]]+=1;
//     }
//     // priority_queue<int, vector<int>, greater<int>> pq;
//     priority_queue<pair<int,BinaryTreeNode<int>*>, vector<pair<int,BinaryTreeNode<int>*>>, greater<pair<int, BinaryTreeNode<int>*>>> pq;

//     for(auto it:f){
//         BinaryTreeNode<int> *node = new BinaryTreeNode<int>(it); 
//         pq.push({it,node});
//     }

//     while(!pq.empty() && pq.size()!=1){
//         int value1 = pq.top().first;
//         BinaryTreeNode<int> *leftchild = pq.top().second;
//         pq.pop();
//         int value2 = pq.top().first;
//         BinaryTreeNode<int> *rightchild = pq.top().second;
//         pq.pop();

//         int sum = value1+value2;
//         BinaryTreeNode<int> *root = new BinaryTreeNode<int>(sum);
//         root->left = leftchild;
//         root->right = rightchild;
//         root->leftEdge = 0;
//         root->rightEdge = 1;
//         // f.push_back(sum);
//         pq.push({sum,root});
//     }

//     BinaryTreeNode<int>* root1 = pq.top().second;
//     // BinaryTreeNode<pair<char,int>>* root1 = pq.top().second;
//     map<char, string> m;
//     printTree(root1, "", m);
//     for(auto x:m){
//         cout<<x.first<<" : "<<x.second<<"\n";
//     }
// }



// void huffmanCodes(string s, vector<int> f){
//     vector<int> count;
//     map<char,int> ourMap;
//     for(int i=0;i<s.length();i++){
//         ourMap[s[i]]+=1;
//     }

// priority_queue<pair<int, BinaryTreeNode<int>*>, vector<pair<int, BinaryTreeNode<int>*>>, greater<pair<int, BinaryTreeNode<int>*>>> pq;

//     for(auto it:f){
//         BinaryTreeNode<int>* b = new BinaryTreeNode<int>(it);
//         pq.push({it, b});
//     }

//     while(!pq.empty() && pq.size()!=1){
//         int value1 = pq.top().first;
//         BinaryTreeNode<int> *leftchild = pq.top().second;
//         pq.pop();
//         int value2 = pq.top().first;
//         BinaryTreeNode<int> *rightchild = pq.top().second;
//         pq.pop();
//         int sum = value1+value2;
//         BinaryTreeNode<int> *root = new BinaryTreeNode<int>(sum);
//         root->left = leftchild;
//         root->right = rightchild;
//         pq.push({sum, root});
//     }

//     BinaryTreeNode<int>* root1 = pq.top().second;
//     printTree(root1);
// }

// int main(){
//     string s = "abcde";
//     vector<int> f = {5,9,12,13,16,45};
//     huffmanCodes(s,f);
//     return 0;
// }





// void huffmanCodes(string s, vector<int> f){
//     vector<int> count;
//     map<char,int> ourMap;
//     for(int i=0;i<s.length();i++){
//         ourMap[s[i]]+=1;
//     }
//     priority_queue<int, vector<int>, greater<int>> pq;
//     for(auto it:f){
//         pq.push(it);
//     }
//     while(!pq.empty() && pq.size()!=1){
//         int value1 = pq.top();
//         pq.pop();
//         BinaryTreeNode<int> *leftchild = new BinaryTreeNode<int>(value1);
//         int value2 = pq.top();
//         pq.pop();
//         BinaryTreeNode<int> *rightchild = new BinaryTreeNode<int>(value2);
//         int sum = value1+value2;
//         BinaryTreeNode<int> *root = new BinaryTreeNode<int>(sum);
//         root->left = leftchild;
//         root->right = rightchild;
//         f.push_back(sum);
//         pq.push(sum);
//     }

//     BinaryTreeNode<int>* root1 = new BinaryTreeNode<int>(pq.top());
//     printTree(root1);
// }

