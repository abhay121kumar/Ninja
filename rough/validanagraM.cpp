#include<bits/stdc++.h>
using namespace std;

 bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        map<char,int> ourMap1;
        map<char,int> ourMap2;
        // for(auto it:s){
        //     // cout<<"hello"<<endl;
        //     ourMap1[s[it]]+=1;
        // }
        // for(auto it:t){
        //     ourMap1[t[it]]+=1;
        // }
        for(int i=0;i<s.length();i++){
            ourMap1[s[i]]+=1;
            ourMap2[t[i]]+=1;
        }
        // for(auto it:ourMap1){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        bool ans=true;
        map<char, int> :: iterator itr1, itr2;
        itr1=ourMap1.begin();
        itr2=ourMap2.begin();
        
        while(itr1!=ourMap1.end())
        {
            if(itr1->first==itr2->first && itr1->second!=itr2->second)
            {
                ans = false;
                break;
            }else if(itr1->first != itr2->first){
                ans = false;
                break;
            }
            // cout<<itr1->first<<"key"<<" "<<itr1->second<<" "<<"value"<<itr2->first<<"key"<<" "<<itr2->second<<" "<<"value"<<endl;
            itr1++;
            itr2++;
        }
        return ans;
    }

    int main(){
        string s = "abc";
        string t = "cbr";
        cout<<isAnagram(s,t)<<endl;
    }