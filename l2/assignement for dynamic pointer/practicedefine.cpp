#include <iostream>
using namespace std;

#define SQUARE(x) x*x

int main(){
    cout<<SQUARE(6)<<endl;
    int x = 36 / SQUARE(6);
    cout << x <<endl;



    // cout<<36/36<<endl;
    // int y = 36/36;
    // cout<<y<<endl;

    return 0;
}