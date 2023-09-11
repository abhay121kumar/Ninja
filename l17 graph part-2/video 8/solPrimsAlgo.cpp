#include<iostream>
using namespace std;
#include<vector>
#include<climits>

int findMiIndex(int *weight,bool* visited,int n){
    int minIndex = -1;
    for(int i=0;i<n;i++){
        if(!visited[i] && (minIndex == -1 || weight[i]<weight[minIndex])){
            minIndex = i;
        }
    }
    return minIndex;
}
void primsAlgo(int** edges,int n){

    int *parent = new int[n];
    int *weight = new int[n];
    bool *visited = new bool[n];

    for(int i=0;i<n;i++){
        // parent[i] = -1;
        visited[i] = false;
        weight[i] = INT_MAX;
    }
    parent[0] = -1;
    weight[0] = 0;

    for(int i=0;i<n;i++){
        //find minVertx
        int minIndex = findMiIndex(weight,visited,n);
        visited[minIndex] = true;
        //explore unvisted neighbour
        for(int j=0;j<n;j++){
            if(edges[minIndex][j]!=0 && !visited[j]){
                if(edges[minIndex][j] < weight[j]){
                    weight[j] = edges[minIndex][j];
                    parent[j] = minIndex;
                }
            }
        }

    }

    for(int i=1;i<n;i++){
        if(parent[i]<i){
            cout<<parent[i]<<" "<<i<<" "<<weight[i]<<endl;
        }else{
            cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
        }
    }
    
}
int main(){
    int n,E;
    cout<<"Enter total number of vertex and edges "<<endl;
    cin>>n>>E;

    int** edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }

    for(int i=0;i<E;i++){
        int fv,sv,weight;
        cout<<"Enter fv & sv & weight"<<endl;
        cin>>fv>>sv>>weight;
        edges[fv][sv] = weight;
        edges[sv][fv] = weight;
    }
    cout<<endl;
    primsAlgo(edges,n);

    for(int i=0;i<n;i++){
        delete[] edges[i];
    }
    delete[] edges;
    return 0;
}

/*
4 4
0 1 3
0 3 5
1 2 1
2 3 8

Sample Output 1 :
0 1 3
1 2 1
0 3 5
*/