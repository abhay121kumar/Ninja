#include<iostream>
using namespace std;

class Edges{
    public:
    int source;
    int dest;
    int weight;

    Edges(int s,int d,int w){
        this->source = s;
        this->dest = d;
        this->weight = w;
    }
};

int main(){
    int n,E;
    cout<<"Enter no. of vertix and edges"<<endl;
    cin>>n>>E;

    int s,d,w;
    Edges *input = new Edges(s,d,w);
    Edges *output
    for(int i=0;i<E;i++){
        cin>>s>>d>>w;
        input[i].source = s;
        input[i].dest = d;
        input[i].weight = w;
    }
    for(int i=0;i<E;i++){
        cout<<input[i].source<<" "<<input[i].dest<<" "<<input[i].weight<<endl;
    }
    return 0;
}