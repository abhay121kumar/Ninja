#include<iostream>
using namespace std;

int main()
{
    // int j = 97;
    // char ch = j; // implicite type casting int to char 
    // cout<<ch<<endl;//a



    int i = 65;
    char c = i; // implicite typecasting
    cout<<c<<endl;//A

    int *p = &i;

    //char *pc = p;
    //cout<<*pc<<endl;
//     error: cannot convert ‘int*’ to ‘char*’ in initialization
//    17 |     char *pc = p;

    char *pc = (char*)p;// explicite typecasting

    cout<<p<<endl;// address of i
    cout<<pc<<endl;//A

    cout<<*p<<endl; //65
    cout<<*pc<<endl;//A
    cout<<*(pc+1)<<endl;// null print
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl;
    cout<<*(pc+5)<<endl;

    return 0;
}