#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int minHelper(int *arr,int n){
    if(n<=1){
        return 0;
    }

    if(arr[n] != -1){
        return arr[n];
    }
    int x = minHelper(arr,n-1);
    int y = INT_MAX,z = INT_MAX;

    if(n%2==0){
        y = minHelper(arr,n/2);
    }
    if(n%3==0){
        z = minHelper(arr,n/3);
    }

    int ans = min(x,min(y,z)) + 1;
    arr[n] = ans;

    return ans;
}

int minStep(int n){
    int *arr = new int[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = -1;
    }
    return minHelper(arr,n);
}

int main()
{
    int n;
    cin >> n;
    cout << minStep(n)<< endl;
    return 0;
}