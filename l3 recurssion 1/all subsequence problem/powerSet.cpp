#include<bits/stdc++.h>
using namespace std;
vector<string> AllPossibleStrings(string s) {
	int n = s.length();
	vector<string>ans;
	for (int num = 0; num < (1 << n); num++) {
		string sub = "";
		for (int i = 0; i < n; i++) {
			//check if the ith bit is set or not
			if (num & (1 << i)) {
				sub += s[i];
			}
		}
		if (sub.length() > 0) {
			ans.push_back(sub);
		}
	}
	sort(ans.begin(), ans.end());
	return ans;
}
int main()
{


	string s="abc";
	vector<string>ans = AllPossibleStrings(s);
	//printint all the subsequence.
	cout<<"All possible subsequences are "<<endl;
	for (auto it : ans) {
		cout << it << " ";
	}
    string temp="";
    for(int i=0;i<ans.size();i++){
        for(int j=i;j<ans.size();j++){
            int n1 = temp.size();
            int n2 = ans[i].size();
            int maxi = max(n1,n2);
            for(int i=0;i<maxi;i++){
                if(temp)
            }
        }
    }
}


// #include<bits/stdc++.h>
// using namespace std;
// void solve(int i, string s, string &f) {
// 	if (i == s.length()) {
// 		cout << f << " ";
// 		return;
// 	}
// 	//picking 
// 	f = f + s[i];
// 	solve(i + 1, s,  f);
// 	//poping out while backtracking
// 	f.pop_back();
// 	solve(i + 1, s,  f);
// }
// int main() {
// 	string s = "abc";
// 	string f = "";
// 	cout<<"All possible subsequences are: "<<endl;
// 	solve(0, s, f);
// }