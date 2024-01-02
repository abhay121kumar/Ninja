#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>

int main(){
    int a=10;
    int b=20;
    cout<<a<<" "<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b<<endl;
    return 0;
}