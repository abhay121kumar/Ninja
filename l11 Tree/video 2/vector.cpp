#include<iostream>
using namespace std;
#include<vector>

/*
int main(){
    vector<int> *vp = new vector<int>();//dynamic

    vector<int> v; // static
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100; // doing changes
    v[3] = 12322; // dont do like that 
    v[4] = 8902; // garbage value print

    v.push_back(40);
    v.push_back(50);

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;
    cout<<v[6]<<endl;

    cout<<"size: "<<v.size()<<endl;

    cout<<v.at(0)<<endl;//10
    cout<<v.at(4)<<endl;//50
    cout<<v.at(5)<<endl; // error out of range
    return 0;
}
*/

/*
10
100
30
40
50
0
0
size: 5
10
terminate called after throwing an instance of 'std::out_of_range'
  what():  vector::_M_range_check: __n (which is 5) >= this->size() (which is 5)
Aborted (core dumped)
*/


int main(){
    vector<int> *vp = new vector<int>();//dynamic

    vector<int> v; // static
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100; // doing changes

    v.push_back(40);
    v.push_back(50);

    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<endl;
    }
     cout<<"size: "<<v.size()<<endl;
    v.pop_back();
    v.pop_back();

    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<endl;
    }
    cout<<"size: "<<v.size()<<endl;

    vector<int> v1;
    for(int i=0;i<20;i++)
    {
        cout<<"capacity: "<<v1.capacity()<<endl;
        cout<<"size: "<<v1.size()<<endl;
        v1.push_back(i+1);
    }

    return 0;
}

/*
10
100
30
40
50
size: 5
10
100
30
size: 3

capacity: 0
size: 0
capacity: 1
size: 1
capacity: 2
size: 2
capacity: 4
size: 3
capacity: 4
size: 4
capacity: 8
size: 5
capacity: 8
size: 6
capacity: 8
size: 7
capacity: 8
size: 8
capacity: 16
size: 9
capacity: 16
size: 10
capacity: 16
size: 11
capacity: 16
size: 12
capacity: 16
size: 13
capacity: 16
size: 14
capacity: 16
size: 15
capacity: 16
size: 16
capacity: 32
size: 17
capacity: 32
size: 18
capacity: 32
size: 19
*/