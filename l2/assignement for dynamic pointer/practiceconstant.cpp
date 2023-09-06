#include <iostream>
using namespace std;

int main(){
    const int p = 5;
    int const *q = &p;
    //p++;
    q++;
    cout<<q<<endl;
    (*q)++;
}