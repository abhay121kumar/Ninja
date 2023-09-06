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