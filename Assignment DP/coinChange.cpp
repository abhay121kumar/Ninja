/*
@csalgo

Chapter Assignment
Problem Statement: Ways To Make Coin Change
Problem Level: MEDIUM
Problem Description:
For the given infinite supply of coins of each of denominations, D = {D0, D1, D2, D3, ...... Dn-1}. You need to figure out the total number of ways W, in which you can make the change for Value V using coins of denominations D.
Return 0 if the change isn't possible.
Input Format
The first line of the input contains an integer value N, which denotes the total number of denominations.

The second line of input contains N values, separated by a single space. These values denote the value of denomination.

The third line of the input contains an integer value, that denotes the value of V.

Output Format
Print the total total number of ways i.e. W.

Constraints :
1 <= n <= 10
1 <= V <= 1000

Time Limit: 1sec

Sample Input 1 :
3
1 2 3
4

Sample Output 1 :
4

Explanation to Sample Input 1 :
Number of ways are - 4 total i.e. (1,1,1,1), (1,1, 2), (1, 3) and (2, 2).

Sample Input 2 :
6
1 2 3 4 5 6
250

Sample Output 2 :
13868903



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
using namespace std;

//wrong code by myself
int coinChange(int *input,int size,int value,int count){
    if(size<=0 || count>value){
        return 0;
    }
    int x = 0,y=0;
    if(count==value){
        cout<<"hello"<<endl;    
        x = coinChange(input+1,size-1,value,count+input[0])+1;
        count=0;
    }else{
        y = coinChange(input,size,value,count+input[0]);
    }
    return x+y;
}




















//correct code from youtube
int coin(int *input,int size,int value){
    int output[value+1];
    for(int i=0;i<value+1;i++){
        output[i] = 0;
    }
    output[0] = 1;
    for(int i=0;i<size;i++){
        for(int j=input[i];j<=value;j++){
            output[j] += output[j-input[i]];
        }
    }
    return output[value];
}

int main(){
    int n,value;
    cin>>n>>value;
    int input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<coinChange(input,n,value,0)<<endl;
    // cout<<coin(input,n,value)<<endl;
    return 0;
}



















