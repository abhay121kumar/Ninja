#include <iostream>
using namespace std;

void func(int p){
    p++;
    
}

int main(){
    int i = 10;
    int &p = i;
    func(i);
    cout<<i<<endl;
}