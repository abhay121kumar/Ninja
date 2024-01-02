#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>

int helper(int n){
    int ans=0;
    if(n%4==0){
        ans = n;
    }
    else if(n%4==1){
        ans = 1;
    }
    else if(n%4==2){
        ans = n+1;
    }
    else if(n%4==1){
        ans = 0;
    }
    return ans;
}

int fun(int l,int r){
    int xor1= helper(l-1);
    int xor2= helper(r);
    return xor1^xor2;

}
int main(){
    int l,r;
    cin>>l>>r;
    cout<<fun(l,r)<<endl;
    return 0;
}