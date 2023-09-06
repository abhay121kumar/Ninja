#include<iostream>
using namespace std;
#include "classOurMap.cpp"


int main(){
    ourMap<int> map;
    for(int i=0;i<10;i++){
        char c = '0' + i;
        string key = "abc";
        key = key + c;
        int value = i+1;
        map.insert(key,value);
        cout<<map.getLoadFactor()<<endl;
    }

    int a = map.Mapsize();

    cout<<map.Mapsize()<<endl;
    map.remove("abc2");
    map.remove("abc7");
    cout<<map.Mapsize()<<endl;
    for(int i=0;i<10;i++){
        char c = '0'+i;
        string key = "abc";
        key = key + c;
        cout<<key<<":"<<map.getValue(key)<<endl;
    }
    cout<<map.Mapsize()<<endl;
    
}