/*
@csalgo

Chapter Assignment
Problem Statement: Extract Unique characters
Problem Level: EASY
Problem Description:
Given a string S, you need to remove all the duplicates. That means, the output string should contain each character only once. 
The respective order of characters should remain same, as in the input string.
Input format:
The first and only line of input contains a string, that denotes the value of S.

Output format :
The first and only line of output contains the updated string, as described in the task.

Constraints :
0 <= Length of S <= 10^8
Time Limit: 1 sec

Sample Input 1 :
ababacd

Sample Output 1 :
abcd

Sample Input 2 :
abcde

Sample Output 2 :
abcde



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
using namespace std;
#include<unordered_map>
#include<map>
#include<vector>

int main(){
    string s;
    cin>>s;
    // char s[] = "ababacd";
    // unordered_map<char,int> ourMap;
    map<char,int> ourMap;
    for(int i=0;s[i]!='\0';i++){
        if(ourMap.count(s[i])>0){
            ourMap[s[i]]+=1;
        }else{
            cout<<s[i]<<" ";
            ourMap[s[i]] = 1;
        }
    }

}