/*
@csalgo

Coding Problem
Problem Statement: Edit Distance
Problem Level: MEDIUM
Problem Description:
Given two strings s and t of lengths m and n respectively, find the Edit Distance between the strings. Edit Distance of two strings is minimum number of steps required to make one string equal to other. In order to do so you can perform following three operations only :
1. Delete a character

2. Replace a character with another one

3. Insert a character

Note - Strings don't contain spaces
Input Format :
Line 1 : String s
Line 2 : String t

Output Format :
Line 1 : Edit Distance value

Constraints
1<= m,n <= 10

Sample Input 1 :
abc
dc

Sample Output 1 :
2

@csalgo
*/

#include<iostream>
using namespace std;


int EditDistance(string s1,string s2){
    int n = s1.size();
    int m = s2.size();

    int **output = new int*[n+1];
    for(int i=0;i<=n;i++){
        output[i] = new int[m+1];
    }

    for(int j=0;j<=m;j++){
        // output[0][j] = s2.size();// wrong this i make 
        output[0][j] = j;
    }

    for(int i=1;i<=n;i++){
        // output[i][0] = s1.size();// wrong this i make 
        output[i][0] = i;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[n-i]==s2[m-j]){
                output[i][j] = output[i-1][j-1];
            }else{
                int a = output[i-1][j] + 1;
                int b = output[i][j-1] + 1;
                int c = output[i-1][j-1] + 1;

                output[i][j] = min(a,min(b,c));
            }
        }
    }

    return output[n][m];
    
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<EditDistance(s1,s2)<<endl;
    return 0;
}