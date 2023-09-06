#include<iostream>
using namespace std;
#include<unordered_map>
#include<string>

/*
int main(){
    unordered_map<string,int> ourmap;
    
    //insert
    pair<string,int> p("abc",1);
    //M-1
    ourmap.insert(p);
    //M-2
    ourmap["def"] = 2;

    //find or access
    // M-1
    cout<<ourmap["abc"]<<endl; //1
    //M-2
    cout<<ourmap.at("abc")<<endl;//1

    // cout<<ourmap.at("gef")<<endl;//error
    cout<<"size: "<<ourmap.size()<<endl;
    cout<<ourmap["ghi"]<<endl;//0 -> by using square bracket by default it add none execiting member to the hashmap
    cout<<"size: "<<ourmap.size()<<endl;

    //check presences
    if(ourmap.count("ghi") > 0){
        cout<<"ghi is present "<<endl;
    }

    //erase
    ourmap.erase("ghi");

    cout<<"size: "<<ourmap.size()<<endl;
    if(ourmap.count("ghi")>0){
        cout<<"ghi is present "<<endl;
    }else{
        cout<<"ghi is not present "<<endl;
    }
}

*/
 

#include<unordered_map>
#include<map>
#include<vector>
int main(){
    vector<int> v;
    unordered_map<string,int> ourMap;
    //insert
    ourMap["haeshit"] = 1;
    ourMap["abhay"] = 2;
    ourMap["okay"] = 3;
    ourMap["kumar"] = 4;

    cout<<ourMap["abhay"]<<endl;
    cout<<ourMap.at("abhay")<<endl;

    cout<<ourMap["dhoni"]<<endl;
    cout<<ourMap.at("dhoni")<<endl;

    cout<<ourMap.count("kholi")<<endl;
}