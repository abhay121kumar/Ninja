#include<iostream>
using namespace std;
#include "ClassstackUisngArray.cpp"

int main(){
    StackUsingArray s(4);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.top()<<"top element on stack: "<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<"size of stack: "<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}

/*
40top element on stack: 
40
30
20
1size of stack: 
0
*/