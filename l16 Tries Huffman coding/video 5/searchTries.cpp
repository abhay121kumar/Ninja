#include<iostream>
using namespace std;
#include "classTriess.cpp"


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
    searchTries('\0',word);
}