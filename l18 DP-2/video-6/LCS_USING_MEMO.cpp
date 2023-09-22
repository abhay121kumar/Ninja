#include<iostream>
using namespace std;


int LCS_M2_Helper(int** arr,string s1,string s2){
    int n = s1.size();
    int m = s2.size();
    //base case
    if(s1.length()==0 || s2.length()==0){
        return 0;
    }

    //check if ans exit
    if(arr[n][m] != -1){
        return arr[n][m];
    }
    //recuresive call
    int ans = 0;
    if(s1[0]==s2[0]){
        ans =  1 + LCS_M2_Helper(arr,s1.substr(1),s2.substr(1));
    }else{
        int x = LCS_M2_Helper(arr,s1.substr(1),s2);
        int y = LCS_M2_Helper(arr,s1,s2.substr(1));
        int z = LCS_M2_Helper(arr,s1.substr(1),s2.substr(1));// redundant call if we did not write that call then it also work

        ans =  max(x,max(y,z));
    }

    //save your cal.
    arr[n][m] = ans;
    //return ans
    return ans;

}

int LCS_M2_Memoization(string s1,string s2){
    int n = s1.size();
    int m = s2.size();
    int **arr = new int*[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = new int[m+1];
        for(int j=0;j<=m;j++){
            arr[i][j] = -1;
        }
    }
    return LCS_M2_Helper(arr,s1,s2);
}


int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    cout<<LCS_M2_Memoization(s1,s2)<<endl;
}