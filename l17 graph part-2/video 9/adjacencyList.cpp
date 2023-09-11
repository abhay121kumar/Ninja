#include<iostream>
using namespace std;
#include<vector>

int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>> adj(v+1);// adjancecy list

    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        //undirectd graph
        adj[u].push_back(v);
        adj[v].push_back(u);
        //for direct graph
        //u-->v
        adj[u].push_back(v);
    }
}