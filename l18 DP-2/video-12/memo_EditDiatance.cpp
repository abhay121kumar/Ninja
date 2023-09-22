#include<iostream>
using namespace std;

int Memo_helper(string s1,string s2,int **output){
    int m = s1.size();
    int n = s2.size();
    //base case
    if(s1.size()==0 || s2.size()==0){
        return max(s1.size(),s2.size());
    }

    if(output[m][n] != -1){
        return output[m][n];
    }
    int ans = 0;
    if(s1[0]==s2[0]){
        //insert
        ans = Memo_helper(s1.substr(1),s2.substr(1),output);
    }else{
        int a = Memo_helper(s1.substr(1),s2,output) + 1;
        int b = Memo_helper(s1,s2.substr(1),output) + 1;
        int c = Memo_helper(s1.substr(1),s2.substr(1),output) + 1;

        ans = min(a,min(b,c));
    }

    output[m][n]  = ans;
    return ans;
}

int EditDistance_using_Memoization(string s1,string s2){
    int n = s1.size();
    int m = s2.size();
    int **output = new int*[n+1];
    for(int i=0;i<=n;i++){
        output[i] = new int[m+1];
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            output[i][j] = -1;
        }
    }

    return Memo_helper(s1,s2,output);
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<EditDistance_using_Memoization(s1,s2)<<endl;
    return 0;
}