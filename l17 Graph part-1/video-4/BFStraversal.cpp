#include<iostream>
using namespace std;
#include<queue>

void printBFS(int** edges,int v,int sv,bool *visited){
    queue<int> pendingNode;
    pendingNode.push(sv);
    while(!pendingNode.empty()){
        int front = pendingNode.front();
        if(visited[front]==false){
            cout<<front<<endl;
        }
        visited[front] = true;
        pendingNode.pop();
        for(int i=0;i<v;i++){
            if(i==front){
                continue;
            }
            if(edges[front][i]==1){
                if(visited[i]){
                    continue;
                }
                pendingNode.push(i);
            }
        }
    }
}

int main(){
    int v;
    int e;
    cin>>v>>e;

    int* *edges = new int*[v];
    for(int i=0;i<v;i++){
        edges[i] = new int[v];
        for(int j=0;j<v;j++){
            edges[i][j]=0;
        }
    }

    for(int i=0;i<e;i++){
        int fv,sv;
        cin>>fv>>sv;
        edges[fv][sv] = 1;
        edges[sv][fv] = 1;
    }

    bool *visited = new bool[v];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }

    printBFS(edges,v,0,visited);
    return 0;
}

/*

7
7
0 1
0 2
1 5
2 3
2 6
5 4
4 3
*/