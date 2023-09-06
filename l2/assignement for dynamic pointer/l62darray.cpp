#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int **p = new int* [m];// for 2d we use double pointer 
    for(int i=0;i<m;i++)
    {
        p[i] = new int[n];
        //p[i] = new int[i+1]; // we can create an array also like that

        for(int j=0;j<n;j++)
        {
            cin>>p[i][j];
        }
    }

     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++)
    {
        delete []p[i];
    }

    delete [] p;    
}