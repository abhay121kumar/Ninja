#include<iostream>
using namespace std;


//******************************************case-1*************************************************************
/*
template <typename T>
class Pair{
    T x;
    T y;

    public:

    void setX(T x){
        this->x = x;
    }
    T getX(){
        return x;
    }
    void setY(T y){
        this->y = y;
    }
    T getY(){
        return y;
    }
};

int main(){
    Pair<int> p1;
    Pair<double> p2;
    Pair<char> p3;
    p1.setX(10);
    p2.setX(20.283);
    p3.setX('a');
    p1.setY(1000);
    p2.setY(1110.283);
    p3.setY('k');
    cout<<p1.getX()<<" "<<p2.getX()<<" "<<p3.getX()<<endl;
    cout<<p1.getY()<<" "<<p2.getY()<<" "<<p3.getY()<<endl;
    // 10 20.283 a
    // 1000 1110.28 k

}

*/


// ******************************************************case -2**************************************************************

/*
template <typename T,typename V>
class Pair{
    T x;
    V y;

    public:

    void setX(T x){
        this->x = x;
    }
    T getX(){
        return x;
    }
    void setY(V y){
        this->y = y;
    }
    V getY(){
        return y;
    }
};

int main(){
    Pair<int,double> p1;
    Pair<double,char> p2;
    Pair<char,int> p3;
    p1.setX(10);
    p1.setY(1000.3455);
    p2.setX(20.283);
    p2.setY('k');
    p3.setX('a');
    p3.setY(99);
    cout<<p1.getX()<<" "<<p2.getX()<<" "<<p3.getX()<<endl;
    cout<<p1.getY()<<" "<<p2.getY()<<" "<<p3.getY()<<endl;
  
    // 10 20.283 a
    // 1000.35 k 99
}
*/




// ******************************************************case -2**************************************************************


template <typename T,typename V>
class Pair{
    T x;
    V y;

    public:

    void setX(T x){
        this->x = x;
    }
    T getX(){
        return x;
    }
    void setY(V y){
        this->y = y;
    }
    V getY(){
        return y;
    }
};

int main(){
    Pair<Pair<int,int>,int> p1;
    Pair <int,int> p2;
    p2.setX(20);
    p2.setY(30);
    p1.setX(p2);
    p1.setY(10);
    cout<<p1.getX().getX()<<" "<<p1.getX().getY()<<" "<<p1.getY()<<endl;
  
    // 20 30 10
}