#include<iostream>
using namespace std;
#include<string>
#include "classTriess.cpp"
#include "searchTries.cpp"
#include "insertTries.cpp"


void RemoveTries(TriesNode *root,string word){
    //base case
    if(word.size()==0){
        root->isTerminal = false;
        return;
    }

    //small calculation
    TriesNode *child;
    int index = word[0]-'a';
    if(root->children[index]!=NULL){
        child = root->children[index];
    }else{
        //word not found
        return;
    }
    RemoveTries(child,word.substr(1));

    //remove child node if it useless
    if(root->isTerminal==false){
        for(int i=0;i<26;i++){
            if(child->children[i]!=NULL){
                return;
            }
        }
        delete child;
        root->children[index] = NULL;
    }
}
