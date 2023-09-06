
#include<iostream>
#include<cstring>
using namespace std;

string PairStar(string s,int i,int size)
{
    string str = "";
    if(i==size)
    {
        return str;
    }
    else
    {
        if(s[i]==s[i+1])
        {
           str = str + s[i];
            if(s[i+1]!='\0')
            {
               str = str + "*";
           }
            str = str + PairStar(s,i+1,size);
            return str;
        }
        else
        {
            str = str + s[i];
            str = str + PairStar(s,i+1,size);
           return str;
        }
    }
}

int main()
{
    // char c[] = {"hello"};
    int size;
    cin>>size;
    char c[size];
    size = strlen(c);
    cin>>c;
    cout<<PairStar(c,0,size)<<endl;
    return 0;
}