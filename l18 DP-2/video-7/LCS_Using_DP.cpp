#include<iostream>
using namespace std;

int LCS_Using_DP(string s1,string s2){
    int m = s1.size();
    int n = s2.size();
    int **output = new int*[m+1];

    for(int i=0;i<=m;i++){
        output[i] = new int[n+1];
    }

    //check for 0 column
    for(int j=0;j<=n;j++){
        output[0][j] = 0;
    }

    //check for 0 row
    for(int i=1;i<=m;i++){
        output[i][0]  = 0;
    }

    //calulation for remaining row and column
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[m-i]==s2[n-j]) // this is the tricky part(m-i) and (n-j)
            {
                output[i][j] = 1 + output[i-1][j-1];
            }else{
                int a = output[i-1][j];
                int b = output[i][j-1];
                int c = output[i-1][j-1];

                output[i][j] = max(a,max(b,c));
            }
        }
    }

    return output[m][n];
}


int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<LCS_Using_DP(s1,s2)<<endl;

    return 0;
}