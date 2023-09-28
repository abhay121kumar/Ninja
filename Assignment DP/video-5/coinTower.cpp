/*
@csalgo

Chapter Assignment
Problem Statement: Coin Tower
Problem Level: MEDIUM
Problem Description:
Whis and Beerus are playing a new game today. They form a tower of N coins and make a move in alternate 
turns. Beerus plays first. In one step, the player can remove either 1,  X, or Y coins from the tower.
 The person to make the last move wins the game. Can you find out who wins the game?
Input format :
The first and the only line of input contains three integer values separated by a single space. 
They denote the value of N, X and Y, respectively.

Output format :
Prints the name of the winner, either 'Whis' or 'Beerus' (Without the quotes).

Constraints :
1 <= N <= 10 ^ 6
2 <= X <= Y<= 50

Time Limit: 1 sec

Sample Input 1 :
4 2 3

Sample Output 1 :
Whis

Sample Input 2 :
10 2 4

Sample Output 2 :
Beerus


=====Answer=====
Correct Option: 

@csalgo
*/
#include<iostream>
using namespace std;
#include<limits.h>


int coinTower(int n,int x,int y){
    int *output = new int[n];
    output[0] = 1;
    for(int i=1;i<n;i++){
        int p = output[i-1]^1;
        int q = INT_MIN;
        if(i-x>=1){
            q = output[i-x];
        }
        int r = INT_MIN;
        if(i-y>=1){
            r = output[i-y];
        }

        output[i] = max(p,max(q,r));
    }
    return output[n];
}

int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int ans = coinTower(n,x,y);
    if(ans){
        cout<<"Beerus"<<endl;
    }else{
        cout<<"whis"<<endl;
    }
    return 0;
}