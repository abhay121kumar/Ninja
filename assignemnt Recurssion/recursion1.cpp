#include<iostream>
using namespace std;

//                                    Without PMI
// int fact(int n)
// {
//     cout<<n<<endl;
//     if(n==0)
//     {
//         return 1;
//     }
//     int smalloutput = fact(n-1);
//     return n * smalloutput;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int output = fact(n);
//     cout<<output<<endl;
//     return 0;
// }

//               with PMI concept using 

#include<iostream>
using namespace std;

int factorial(int n)
{
    cout<<n<<endl;
    if(n==1) // base case
    {
        return 1;
    }
    int smallOutput = factorial(n-1); // induction Hypothesis were we are are just assuming
    int output = n * smallOutput; // induction step
    return output;
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}