#include<iostream>
using namespace std;

int main(){
    int a=12;
    cout<<(1<<3)<<endl;
    cout<<~(8)<<endl;
    int mask = ~(1<<3);
    cout<<"mask"<<mask<<endl;
    cout<<(a&mask)<<endl;
    return 0;
}