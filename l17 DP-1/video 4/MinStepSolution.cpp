#include<iostream>
using namespace std;
// #include<cmath>
#include<algorithm>
#include<bits/stdc++.h>

int Min_Step_to_1(int n){
    //base condition
    if(n<=1){
        return 0;
    }

    int x = Min_Step_to_1(n-1);
    int y = INT_MAX;
    int z = INT_MAX;

    if(n%2==0){
        y = Min_Step_to_1(n/2);
    }
    if(n%3==0){
        z = Min_Step_to_1(n/3);
    }

    int ans = min(x,min(y,z)) + 1;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << Min_Step_to_1(n) << endl;
    return 0;
}