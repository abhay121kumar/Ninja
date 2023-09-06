#include<iostream>
#include<cstring>
using namespace std;

void removeX(char str[])
{
    if(str[0]=='\0')
    {
        return;
    }
    if(str[0]!='x')
    {
        // cout<<removeX<<" ";
        cout<<str<<" ";
        return removeX(str+1);
    }
    else
    {
        int i=1;
        for(;str[i] != '\0';i++)
        {
            str[i-1] = str[i];
        }
        str[i-1] = str[i];
        cout<<str<<" else"<<" ";
        removeX(str);
    }

}


int lengthOfString(char str[])
{
    if(str[0]=='\0')
    {
        return 0;
    }
    int smallLength = lengthOfString(str+1);
    return 1+smallLength;
 }

 int main()
 {
    char str[20];
    // string str[20];
    cout<<"Enter string here"<<endl;
    cin>>str;
    int length = lengthOfString(str);
    cout<<length<<endl;
    removeX(str);
    // length  = str.length;
    cout<<str<<endl;
    length = lengthOfString(str);
    cout<<length<<endl;
    return 0;
 }