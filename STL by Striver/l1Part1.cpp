#include<bits/stdc++.h> // include all library
using namespace std;


// int main(){
//     int val = 50;
//     double val = 10.0;
//     cout<<val<<endl;
// }

/*
l1.cpp:7:12: error: conflicting declaration ‘double val’
    7 |     double val = 10.0;
      |            ^~~
l1.cpp:6:9: note: previous declaration as ‘int val’
    6 |     int val = 50;
*/

// namespace abhay{
//     int val = 50;
// }
// int main(){
//     double val = 10.0;
//     cout<<val<<endl;//10
//     cout<<abhay::val<<endl;//50
//     std::cout<<val<<endl; // 10 //without using namespace
// }



namespace abhay{
    int val = 50;
    int getVal(){
        return val*10;
    }
}
int main(){
    double val = 10.0;
    cout<<val<<endl;//10
    cout<<abhay::val<<endl;//50
    std::cout<<val<<endl; // 10 //without using namespace
    cout<<abhay::getVal()<<endl;//500
}