/*
@csalgo

Coding Problem
Problem Statement: Minimum Count
Problem Level: MEDIUM
Problem Description:
Given an integer N, find and return the count of minimum numbers required to represent N as a sum of squares.
That is, if N is 4, then we can represent it as : {1^2 + 1^2 + 1^2 + 1^2} and {2^2}. The output will be 1, as 1 is the minimum count of numbers required to represent N as sum of squares.
Input format :
The first and the only line of input contains an integer value, 'N'.

Output format :
Print the minimum count of numbers required.

Constraints :
0 <= n <= 10 ^ 4

Time Limit: 1 sec

Sample Input 1 :
12

Sample Output 1 :
3

Explanation of Sample Output 1 :
12 can be represented as : 
A) (1^1) + (1^1) + (1^1) + (1^1) + (1^1) + (1^1) + (1^1) + (1^1) + (1^1) + (1^1) + (1^1) + (1^1)

B) (1^1) + (1^1) + (1^1) + (1^1) + (1^1) + (1^1) + (1^1) + (1^1)  + (2 ^ 2)

C) (1^1) + (1^1) + (1^1) + (1^1) + (2 ^ 2) + (2 ^ 2)

D) (2 ^ 2) + (2 ^ 2) + (2 ^ 2)

As we can see, the output should be 3.

Sample Input 2 :
9

Sample Output 2 :
1

@csalgo
*/

#include<iostream>
using namespace std;
#include<limits.h>
#include<cmath>

int minCountCal(int n,int i){
    if(pow(i,2)>n){
        return INT_MAX;
    }
    int smallans = minCountCal(n,i+1);
    int ans = n-pow(i,2);
    int output = min(ans,smallans);

    return output;
}


int minCount(int n)
{
	//Write your code here
	return minCountCal(n,1)+1;

}
// int minCount2(int n)
// {
// 	//Write your code here
// 	// return minCountCal(n,1)+1;
// 	if(n==1 || n==2 || n==3 || n==0){
// 		return n;
// 	}
// 	int ans = INT_MAX;
// 	for(int i=1;i*i<=n;i++){
// 		ans = min(ans,1+minCount(n-i*i));
// 	}
// 	return ans;
// }

int main(){
    int n;
    cin>>n;
    cout<<minCount(n)<<endl;
    // cout<<minCount2(n)<<endl;
}

/*
1000
*/