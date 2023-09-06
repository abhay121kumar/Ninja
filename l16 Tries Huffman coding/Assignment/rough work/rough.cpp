#include<iostream>
using namespace std;
#include<string.h>

int main(){
    // int index1 = str[0];
    // int index2 = 'a';
    // int index = str[0]-'a';
    // cout<<index1<<endl;
    // cout<<index2<<endl;
    // cout<<index<<endl;





    // string str;
    // cin>>str;
    // string str1;
    // str1 = str;
    // cout<<str<<endl;
    // cout<<str1<<endl;
    // int i=0;
    // str1 = str.substr(i+1);
    // cout<<str1<<" 1"<<endl;
    // i++;
    // str1 = str.substr(i+1);
    // cout<<str1<<" 2"<<endl;
    // i++;
    // str1 = str.substr(i+1);
    // cout<<str1<<" 3"<<endl;
    // while(str1.size()!=0){
    // }
    string newStr;
    cin>>newStr;
    string word;
    word = newStr;
    cout<<"1st "<<word<<endl;
    cout<<"1st "<<newStr<<endl;
    word = newStr.substr(0+1);
    newStr = word;
    cout<<"2st "<<word<<endl;
    cout<<"2st "<<newStr<<endl;
    cout<<word.substr(0)<<endl;
    return 0;
}