#include <iostream>
using namespace std;
#include "classTriess.cpp"

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

        // recursive call
        return searchTries(child, word.substr(1));
    }

    bool searchTries(string word)
    {
        return searchTries(root, word);
    }

    // insert
    void insertWord(TriesNode *root, string word)
    {

        // base condition
        if (word.size() == 0)
        {
            root->isTerminal = true;
            return;
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
            child = new TriesNode(word[0]);
            root->children[index] = child;
        }

        // recursive call
        insertWord(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertWord(root, word);
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

    void RemoveTries(string word){
        RemoveTries(root,word);
    }
};

int main(){
    Trie t;
    t.insertWord("and");
    t.insertWord("are");
    t.insertWord("dot");

    cout<<t.searchTries("and")<<endl;//1
    t.RemoveTries("and");
    cout<<t.searchTries("and")<<endl;//0
    cout<<t.searchTries("dot")<<endl;//1
    cout<<t.searchTries("dote")<<endl;//0
    cout<<t.searchTries("do")<<endl;//0
    return 0;
}