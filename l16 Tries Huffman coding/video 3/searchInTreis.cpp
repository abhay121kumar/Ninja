#include<iostream>
using namespace std;

class TriesNode{
    public:
    char data;
    TriesNode* *children;
    bool isTerminal;

    TriesNode(char data){
        this->data = data;
        children = new TriesNode*[26];
        isTerminal = false;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
    }
};
void insertWode(TriesNode *root,string word){
    
    //base condition
    if(word.size()==0){
        root-> isTerminal = true;
        return;
    }

    //small calculation
    int index = word[0]-'a';
    TriesNode *child;
    if(root->children[index] != NULL){
        child = root->children[index];
    }else{
        child = new TriesNode(word[0]);
        root->children[index] = child;
    }

    //recursive call
    insertWode(child,word.substr(1));
}

void insertWord(string word){
    insertWode(root,word);
}

bool searchTries(TriesNode *root,string word){
    
    //base condition
    if(word.size()==0){
        root-> isTerminal = true;
        return true;
    }

    //small calculation
    int index = word[0]-'a';
    TriesNode *child;
    if(root->children[index] != NULL){
        child = root->children[index];
    }else{
        return false;
    }

    //recursive call
    searchTries(child,word.substr(1));
}

void searchTries(string word){
    searchTries(root,word);
}