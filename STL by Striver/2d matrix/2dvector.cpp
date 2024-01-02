/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    // cout<<"Hello World";
    vector<vector<int>> points = {{3,1},{9,0},{1,0},{1,4},{5,3},{8,8}};
    vector<vector<int>> ans;
    for(int i=0;i<points.size();i++){
        vector<int> v;
        for(int j=0;j<points[i].size();j++){
            v.emplace_back(points[i][j]);
        }
        ans.emplace_back(v);
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
