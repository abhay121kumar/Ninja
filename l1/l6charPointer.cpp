#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4};
    char b[] = "a,b,c";
    cout<<a<<endl;// address print hoga 
    cout<<b<<endl;// but yaha actual value print hoga jab tak null char. nhi aa jata 

    char *c = &b[0];
    cout<<c<<endl;// same value print kar dega 0 index se le kar null char tak(\0)

    cout<<endl;
    char c1 = 'a';
    char *pc = &c1;
    cout<<c1<<endl;//a
    cout<<pc<<endl;//a�d'�� // a ka baad se garbage value print kar diya jab tak null char na aa gaya


    cout<<endl;
    char str[] = "a,b,c,d";
    //char *pstr = str;// isme koi problem nhi hai
    char *pstr = "a,b,c,d";//ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]//ya nhi kar shak te hain
    cout<<str<<endl;//a,b,c,d
    cout<<pstr<<endl;//a,b,c,d// but hm pointer me same value assign nhi kar shak te hain 

    return 0;
}