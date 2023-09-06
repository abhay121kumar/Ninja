#include<iostream>
#include<cstring>
using namespace std;

int recursionString(char str[])
{
    if(str[0]=='\0')
    {
        return 0;
    }
    int smallOutput = recursionString(str+1);
    return 1+smallOutput;
}

int  main()
{
    char str[20];
    cin>>str;
    int small = recursionString(str);
    cout<<small<<endl;
    return 0;
}