#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int minStepusingDP(int n){
    if(n<=1){
        return 0;
    }
    if(n<=3){
        return 1;
    }
    int *arr = new int[n+1];
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    for(int i=4;i<=n;i++){
        int x = INT_MAX,y=INT_MAX,z=INT_MAX;
        if(i%2==0){
            x = arr[i/2];
        }
        if(i%3==0){
            y = arr[i/3];
        }
        z = arr[i-1];

        int ans = min(x,min(y,z))+1;
        arr[i] = ans;
    }
    return arr[n];
}

int main()
{
    int n;
    cin >> n;
    cout << minStepusingDP(n)<< endl;
    return 0;
}