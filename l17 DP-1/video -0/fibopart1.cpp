#include<iostream>
using namespace std;

int Fibo_M1(int n){
    //base condition
    if(n<=1){
        return n;
    }
    // recursive call
    int a  = Fibo_M1(n-1);
    int b = Fibo_M1(n-2);
    //return and samll cal.
    return a+b;
}

int fibo_helper(int *ans,int n){
    //base condition
    if(n<=1){
        return n;
    }

    //check if output already exit
    if(ans[n] != -1){
        return ans[n];
    }

    //recurise call
    int a = fibo_helper(ans,n-1);
    int b = fibo_helper(ans,n-2);

    //save the output for future use
    ans[n]  = a+b;

    //return the final output
    return ans[n];
}

int fibo_by_DP(int n){
    int *arr = new int[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = -1;
    }
    return fibo_helper(arr,n);
}

int main(){
    int n;
    cin>>n;
    cout<<Fibo_M1(n)<<endl;
    cout<<endl;
    cout<<fibo_by_DP(n)<<endl;
}