/*
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
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(int data){
        this->data = data;
        left=NULL;
        right=NULL;
    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};

vector<string> huffmanCodes(string s, vector<int> f,int N){
    vector<char,int> count;
    map<char,int> ourMap;
    for(int i=0;i<s.length();i++){
        ourMap[s[i]]+=1;
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto it:f){
        pq.push(it);
    }
    while(!pq.empty() && pq.size()!=1){
        int value1 = pq.top();
        pq.pop();
        BinaryTreeNode<int> *leftchild = new BinaryTreeNode<int>(value1);
        int value2 = pq.top();
        pq.pop();
        BinaryTreeNode<int> *rightchild = new BinaryTreeNode<int>(value2);
        int sum = value1+value2;
        BinaryTreeNode<int> *root = new BinaryTreeNode<int>(sum);
        root->left = leftchild;
        root->right = rightchild;
        f.push_back(sum);
        pq.push(sum);
    }
}


int main(){
    // string s="aabcdd";
    // map<char,int> ourMap;
    // for(int i=0;i<s.length();i++){
    //     ourMap[s[i]]+=1;
    // }
    // map<char,int> :: iterator it = ourMap.begin();
    // while(it != ourMap.end()){
    //     cout<<it->first<<" "<<it->second<<endl;
    //     it++;
    // }
    return 0;
}

*/



// divanshu code

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
    priority_queue<pair<int, BinaryTreeNode<pair<int, char>>*>, vector<pair<int, BinaryTreeNode<pair<int, char>>*>>, greater<pair<int, BinaryTreeNode<pair<int, char>>*>>> pq;

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