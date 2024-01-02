#include<bits/stdc++.h>
using namespace std;
// create a data type where you store
// char, int, double, string

struct node{
    string str;
    int num;
    double dob;
    char x;

    node(string str_,int num_,double dob_,char x_){
        str = str_;
        num = num_;
        dob = dob_;
        x = x_;
    }
};
int main(){
    //M-1 withput using constructor
    // this will work 
    //but
    //this is wrong way for defining 
    // instead use constructor
    // node abhay;
    // abhay.str = "hello";
    // abhay.num = 100;
    // abhay.dob = 34.32;

    //M-2 using construcotr
    // node *abhay =  new node("striver",100,34.32,'m');
    node abhay =  node("striver",100,34.32,'m');
    return 0;
}