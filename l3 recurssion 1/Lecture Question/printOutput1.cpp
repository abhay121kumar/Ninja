/*
@csalgo

Assignment Problem
Problem Name: What is the output
Problem Description:
What will be the output of the following code ?
#include <iostream>
using namespace std;

void print(int n){
    if(n < 0){
        return;
    }
    if(n == 0){
        cout << n << “ “;
        return;
    }
    print(n --);
    cout << n << “ “;
}

int main() {
    int num = 3;
    print(num);
}
Options:
0. Runtime Error
1. 3 2 1
2. 3 3 3
3. 0 1 2 3



=====Answer=====
Correct Option: 0

@csalgo
*/

#include <iostream>
using namespace std;

void print(int n){
    if(n < 0)
    {
        return;
    }
    if(n == 0)
    {
        return;
    }
    cout<<n<<endl;
    print(n--);
   // cout << n <<endl;
}

int main() {
    int num = 3;
    print(num);
}

// 0. Runtime Error
// 1. 3 2 1
// 2. 3 3 3
// 3. 0 1 2 3