
#include<iostream>
using namespace std;
#include<climits>


// coded by myself :)


int findMinDisCost(int* distance,bool* visited,int n){
    int minDistance = -1;
    for(int i=0;i<n;i++){
        if(!visited[i] && (minDistance==-1 ||distance[i] < distance[minDistance])){
            minDistance = i;
        }
    }
    return minDistance;
}

void dijkstrasAlgo(int** edges,int n){
    bool *visited = new bool[n];
    int *distance = new int[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
        distance[i] = INT_MAX;
    }
    distance[0] = 0;

    for(int i=0;i<n;i++){
        int minDistance = findMinDisCost(distance,visited,n);
        visited[minDistance] = true;
        for(int j=0;j<n;j++){
            if(!visited[j] && edges[minDistance][j]!=0){
                if(edges[minDistance][j]+distance[minDistance] < distance[j]){
                    distance[j] = edges[minDistance][j]+distance[minDistance];
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<i<<" "<<distance[i]<<endl;
    }
}
int main(){
    int n,E;
    cout<<"Enter n,e"<<endl;
    cin>>n>>E;

    int ** edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j<n;j++){
            edges[i][j] = 0;
        }
    }

    for(int i=0;i<E;i++){
        int s,d,w;
        cout<<"Enter s,d,w"<<endl;
        cin>>s>>d>>w;
        edges[s][d] = w;
        edges[d][s] = w;
    }
    dijkstrasAlgo(edges,n);
    for(int i=0;i<n;i++){
        delete[] edges[i];
    }
    delete[]edges;
}