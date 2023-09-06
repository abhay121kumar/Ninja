#include<iostream>
using namespace std;
#include <stack>


bool balanced(string s){
    bool flag = false;
    int size = s.length();
    stack<char> s1;
    int i=0;
    
    if(size==0){
        return flag;
    }
    while(i<size){
        while(s[i]!='}' && s[i]!=']' && s[i]!=')'){
                if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                s1.push(s[i]);
                i++;
                if(i>=size){
                    break;
                }
            }
        }
        if(s1.top()=='(' && s[i]==')'){
            flag = true;
            s1.pop();
        }
        else if(s1.top()=='{' && s[i]=='}'){
            flag = true;
            s1.pop();
        }
        else if(s1.top()=='[' && s[i]==']'){
            flag = true;
            s1.pop();
        }
        else if(s1.top()!=s[i]){
            flag = false;
            break;
        }
        i++;
    }
    if(!s1.empty()){
        flag = false;
    }
    return flag;
}
int main()
{
    string s;
    cin>>s;
    cout<<balanced(s)<<endl;
    return 0;
}

