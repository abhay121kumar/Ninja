#include<iostream>
using namespace std;
#define PI 3.14 // #define , compile hone se phyle apna kaam kar ka dikhaye ga
// compiler ko kya dikhe ga koi extra variable nhi dikhe ga sirf 3.14 dikhe ga
int main()
{
    int r;
    cin>>r;

    //double pi = 3.14; // iske ve jarurat nhi hai alag se variable kyu store karwye
    //pi = pi + 1; // agar futher koi program me aya koi changes kar de pi ki value to change ho jaye ga isliye
    // hm aye sa nhi kar shak te hai 
    //cout<< 3.14 * r * r <<endl;// aye sa hm nhi kare ga agar hm log baar baar 3.14 ka use karna hoga to 
    // baar baar likh na padeg ga hm log ko

    cout<< PI * r * r <<endl;// ab sahi hai 
}