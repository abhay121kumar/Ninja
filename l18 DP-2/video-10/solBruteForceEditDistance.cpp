#include<iostream>
using namespace std;

int EditDistance_using_BruteForce(string s1,string s2){
    //base case
    int n = s1.size();
    int m = s2.size();
    if(s1.size()==0 || s2.size()==0){
        return max(s1.size(),s2.size());
    }

    if(s1[0]==s2[0]){
        return EditDistance_using_BruteForce(s1.substr(1),s2.substr(1));
    }else{
        //insert
        int a = EditDistance_using_BruteForce(s1.substr(1),s2) + 1 ;
        //delete
        int b = EditDistance_using_BruteForce(s1,s2.substr(1)) + 1;
        //replace
        int c = EditDistance_using_BruteForce(s1.substr(1),s2.substr(1)) + 1; 

        return min(a,min(b,c));
    }
}


int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<EditDistance_using_BruteForce(s1,s2)<<endl;
    return 0;
}