#include<iostream>
using namespace std;

int LCS_by_Me(string s1,string s2){
    int len1 = s1.length();
    int len2 = s2.length();
    int ans = 0;
    for(int i=0;i<len1;i++){
        int count = 0;
        int k=i;
        for(int j=0;j<len2;j++){
            if(s1[k]==s2[j] && k<len1){
                count+=1;
                k+=1;
            }
            if(j==len2-1 && k==len1-1){
                break;
            }
            if(j==len2-1 && k<len1){
                int l;
                for(l=k;l<len1;l++){
                    if(s1[l]==s2[j]){
                        count+=1;
                    }
                }
                break;
            }
            // cout<<i<<endl;
        }
        if(ans<count){
            ans = count;
        }
    }

    return ans;
}


int LCS_M1(string s1,string s2){
    //base case
    if(s1.length()==0 || s2.length()==0){
        return 0;
    }

    //recuresive call
    if(s1[0]==s2[0]){
        return 1 + LCS_M1(s1.substr(1),s2.substr(1));
    }else{
        int x = LCS_M1(s1.substr(1),s2);
        int y = LCS_M1(s1,s2.substr(1));
        int z = LCS_M1(s1.substr(1),s2.substr(1));// redundant call if we did not write that call then it also work

        return max(x,max(y,z));
    }
}


int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    cout<<LCS_by_Me(s1,s2)<<endl;
    cout<<LCS_M1(s1,s2)<<endl;
}