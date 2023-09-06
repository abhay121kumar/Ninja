#include<iostream>
using namespace std;

int main()
{
    string *sp = new string;
    *sp = "abc";
    cout<<sp<<endl;
    cout<<*sp<<endl;

    string s = "defg";
    getline(cin,s);
    cout<<s<<endl;

    s="kuchve";
    cout<<s[0]<<endl;
    s[0] = 'p';

    string s1;
    s1 = "hij";
    cout<<"s1 "<<s1<<endl;
    string s2 = s+s1;
    cout<<"for s2 "<<s2<<endl;
    s+=s1;
    cout<<"for s "<<s<<endl;

    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    cout<<s.substr(3)<<endl;
    cout<<s.substr(3,3)<<endl;
    cout<<s.find("veh")<<endl;;

}

/*
0x556ecb26aeb0
abc
coding ninja
coding ninja
k
s1 hij
for s2 puchvehij
for s puchvehij
9
9
hvehij
hve
4
*/