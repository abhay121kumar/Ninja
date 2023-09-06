/*
@csalgo

Chapter Assignment
Problem Statement: Replace pi (recursive)
Problem Level: MEDIUM
Problem Description:
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

Sample Input 1 :
xpix

Sample Output :
x3.14x

Sample Input 2 :
pipi

Sample Output :
3.143.14

Sample Input 3 :
pip

Sample Output :
3.14p



=====Answer=====
Correct Option: 

@csalgo
*/


#include<iostream>
#include<cstring>
using namespace std;



// Divancshu code

// string f(string s,int i,int n)
// {
//     string str=""; // xpip
//     if(i==n)
//     {
//         return str;
//     }
//     else if(i==(n-1))
//     {
//         str+=s[i];
//         return str;
//     }
//     else
//     {
//         if(s[i]=='p' && s[i+1]=='i')
//         {
//             str+="3.14";
//             str+=f(s,i+2,n); // dhyan se dekho i+2 ho raha hai 
//             return str;
//         }
//         else
//         {
//             str+=s[i];
//             str+=f(s,i+1,n);
//             return str;
//         }
//     }
// }

// int main()
// {
//     string s="xpip";
//     cout<<f(s,0,s.length())<<endl;

//     return 0;
// }


// My code mainly modification of dipanshu code

string ReplacePi(string s,int start,int length)
{
    string str = " ";
    if(start==length)
    {
        return str;
    }
    else if(start==length-1)
    {
        str =  s[start];
        return str;
    }
    else
    {
        if(s[start]=='p' && s[start+1]=='i')
        {
            str = "3.14";
            // str = str + "3.14";
            str = str + ReplacePi(s,start+2,length);
            return str;
        }
        else
        {
            str = s[start];
            str = str + ReplacePi(s,start+1,length);
            return str;
        }
    }
}

int main()
{
    // char c[] = {'p','i'};
    // char c[] = {'x','x'};
    // char c[] = {'x','x','p','p','i','i'};
    int n;
    cin>>n;
    cout<<"Enter the size if the array"<<endl;
    char c[n];
    cin>>c;
    int size = strlen(c);
    cout<<ReplacePi(c,0,size)<<endl;
}















//***********************************************************************************************************************************//

// int order_shift(char one[],int start,int len){
    

//     if(start == len){
//         return len;
//     }
    
//     one[len] = one[len-1];
//     order_shift(one, start, len-1);
//     return  len+1;
// }

// void replacePi(char one[]){
    
//     int len = strlen(one);
//     if(one[0]== '\0'){
//         return;
//     }
    
//     if(one[0] == 'p' && one[0+1] == 'i'){
//         len = order_shift(one,2,len);
//         one[len+1] = '\0';
//         len = order_shift(one,2,len);
//         one[len+1] = '\0';
        
//         one[0] = '3';
//         one[0+1] = '.';
//         one[0+2] = '1';
//         one[0+3] = '4';
//     }
    
//     replacePi(one+1);
// }

// int main() 
// {
//     char input[10000];
//     cin.getline(input, 10000);
//     replacePi(input);
//     cout << input << endl;
// }