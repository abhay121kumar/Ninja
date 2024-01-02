#include<iostream>
using namespace std;

int main(){
    int n = 13;
    int ans=0;
    while(n/2!=0){
        if(n%2==0){
            ans+=0;
        }else{
            ans+=1;
        }
        ans*=10;
        n=n/2;
    }
    ans+=1;
    cout<<ans<<endl;
    int rev = 0;
    while(ans!=0){
        rev = rev*10 + ans%10;
        ans=ans/10;
    }
    cout<<rev<<endl;

    string s1 = "abc";
    string s2 = s1;
    cout<<s2<<endl;
    return 0;
}