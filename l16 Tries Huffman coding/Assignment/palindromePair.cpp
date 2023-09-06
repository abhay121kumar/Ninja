/*
@csalgo

Chapter Assignment
Problem Statement: Pattern Matching
Problem Level: MEDIUM
Problem Description:
Given a  list of n words and a pattern p that we want to search. Check if the pattern p is present the given words or not. Return true if the pattern is present and false otherwise.
Input Format :
The first line of input contains an integer, that denotes the value of n.
The following line contains n space separated words.
The following line contains a string, that denotes the value of the pattern p.

Output Format :
The first and only line of output contains true if the pattern is present and false otherwise.

Constraints:
Time Limit: 1 sec

Sample Input 1 :
4
abc def ghi cba
de

Sample Output 2 :
true

Sample Input 2 :
4
abc def ghi hg
hi

Sample Output 2 :
true

Sample Input 3 :
4
abc def ghi hg
hif

Sample Output 3 :
false



=====Answer=====
Correct Option: 

@csalgo
*/



//wrong code  
#include<stack>
#include <iostream>
using namespace std;

class TriesNode
{
public:
    char data;
    TriesNode **children;
    bool isTerminal;

    TriesNode(char data)
    {
        this->data = data;
        children = new TriesNode *[26];
        isTerminal = false;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
    }
};

class Trie
{
    TriesNode *root;

public:
    Trie()
    {
        root = new TriesNode('\0');
    }

    // search
    bool searchTries(TriesNode *root, string word)
    {
        stack<int> s;
        
        // base condition
        if (word.size() == 0)
        {
            return root->isTerminal;
        }

        // small calculation
        int index = word[0] - 'a';
        TriesNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        return searchTries(child, word.substr(1));

        // recursive call
    }

    bool searchTries(string word)
    {
        return searchTries(root, word);
    }
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
    insertWord(root,word);
}
    // remove

    void RemoveTries(TriesNode *root, string word)
    {
        // base case
        if (word.size() == 0)
        {
            root->isTerminal = false;
            return;
        }

        // small calculation
        TriesNode *child;
        int index = word[0] - 'a';
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // word not found
            return;
        }
        RemoveTries(child, word.substr(1));

        // remove child node if it useless
        if (root->isTerminal == false)
        {
            for (int i = 0; i < 26; i++)
            {
                if (child->children[i] != NULL)
                {
                    return;
                }
            }
            delete child;
            root->children[index] = NULL;
        }
    }

    void RemoveTries(string word)
    {
        RemoveTries(root, word);
    }
};

int main()
{
    Trie t;
    t.insertWord("abc");
    t.insertWord("def");
    // t.insertWord("ghi");
    // t.insertWord("cba");

    cout << t.searchTries("abc") << endl; // 1
    cout << t.searchTries("cba") << endl; // 1
    cout << t.searchTries("bc") << endl; // 1
    cout << t.searchTries("def") << endl; // 1
    cout << t.searchTries("fed") << endl; // 1
    // cout << t.searchTries("abcdef") << endl; // 1
    // cout << t.searchTries("cd") << endl; // 1
    // cout << t.searchTries("bc") << endl; // 1
    // cout << t.searchTries("c") << endl; // 1
    // cout << t.searchTries("de") << endl; // 1
    // cout << t.searchTries("hi") << endl; // 1
    // cout << t.searchTries("hif") << endl; // 1
    return 0;
}