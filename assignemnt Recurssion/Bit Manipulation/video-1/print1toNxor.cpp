#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>

int main(){
    int n=5;
    //M-1
    // int ans=0;
    // for(int i=1;i<=n;i++){
    //     ans = ans^i;
    // }
    // cout<<ans<<endl;

    //M-2
    if(n%4==0){
        cout<<n<<endl;
    }else if(n%4==1){
        cout<<1<<endl;
    }else if(n%4==2){
        cout<<n+1<<endl;
    }else if(n%4==3){
        cout<<0<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}