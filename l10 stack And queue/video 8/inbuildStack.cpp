#include<iostream>
using namespace std;
#include <stack>

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    if(s.empty()){
        cout<<"hello"<<endl;
    }
    return 0;
}

// 50
// 40
// 4
// 0