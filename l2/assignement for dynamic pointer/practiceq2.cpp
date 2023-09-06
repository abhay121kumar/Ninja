#include <iostream>
using namespace std;

void func(int i, int& j, int p){
    i++;
    j++;
    p++;
    cout<<i<<endl;//11
    cout<<j<<endl;//7
    cout<<p<<endl;//11
}

int main(){
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p<<endl;
}