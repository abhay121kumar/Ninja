#include<iostream>
using namespace std;
#include "classTriess.cpp"

void insertWord(TriesNode *root,string word){
    
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
    insertWord(child,word.substr(1));
}

void insertWord(string word){
    insertWord('\0',word);
}