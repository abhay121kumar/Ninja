

#include <iostream>
using namespace std;
// #include <unordered_map>
#include <map>
#include <vector>

/*
int main()
{

    int input[] = {6,3,-1,2,-4,3,1,-2,20};

    map<int, int> ourMap;
    int sum = input[0];
    ourMap[0] = input[0];
    for (int i = 1; i < 9; i++)
    {
       ourMap[i] = input[i] + sum;
        sum = ourMap[i];
    }
 

  
    cout<<endl;
    map<int, int>::iterator it1 = ourMap.begin();
    while (it1 != ourMap.end())
    {
        cout << " key  " << it1->first << " value  " << it1->second << endl;
        it1++;
    }
       // for (int i = 0; i < 9; i++)
    // {
    //     ourMap[input[i] + sum] = i;
    //     sum = input[i] + sum;
    // }
}

*/

int main(){
    int a[] = {2,2,2,1,1,1,3,4,4};
    map<int,int> ourMap;
    // for(int i=0;i<9;i++){
    //     if(ourMap.count(a[i]>0)){
    //         ourMap[a[i]]+=1;
    //     }else{
    //         ourMap[a[i]]=1;
    //     }
    // }
     for(int i=0;i<9;i++){
        if(ourMap.count(a[i]>0)){
            ourMap[a[i]]+=1;
        }else{
            ourMap[a[i]]=1;
        }
    }
    for(auto x:ourMap){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}