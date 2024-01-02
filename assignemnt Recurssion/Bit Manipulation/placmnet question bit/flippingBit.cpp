#include<iostream>
using namespace std;
// #include<cmath>
// #include<algorithm>
#include<climits>

int minValue(int n){
    int value=n;
    int ans=INT_MAX;
    while(value>=0){
        int mask = ~(1<<(value-1));
        ans = min(ans,(n&mask));
        // n--;
        value--;
    }
    return ans;
}

int main(){
    int a=12;
    // cout<<(a&1)<<endl;
    // cout<<(a>>1)<<endl;
    // cout<<(a>>1)<<endl;
    // int mask = ~(1<<2);
    // cout<<"mask"<<mask<<endl;
    // cout<<(a&mask)<<endl;
    cout<<minValue(a)<<endl;
    return 0;
}