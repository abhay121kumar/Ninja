#include<iostream>
using namespace std;
#include <vector>

class TreeNode{
    public:
    char data;
    vector<TreeNode*> children;

    TreeNode(char data){
        this->data = data;
    }
};

void insert(string s,int i,TreeNode* root,TreeNode* r){
    if(i==s.length()){
        return;
    }
    TreeNode *n = new TreeNode(s[i]);
    if(root){
        root->children.push_back(n);
    }
    if(r){
        r->children.push_back(n);
    }
    insert(s,i+1,root,n);
}

void print(TreeNode *r){
    cout<<r->data;
    if(r->children.size()){
        print(r->children[0]);
    }
}

int main(){
    TreeNode *root = new TreeNode('\0');
    insert("abcde",0,root,NULL);
    for(int i=0;i<root->children.size();i++){
        print(root->children[i]);
        cout<<endl;
    }
    return 0;
}