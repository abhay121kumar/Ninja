#include<iostream>
using namespace std;

int Length(int temp){
    if(temp==NULL){
        return 0;
    }
    else{
        temp = temp->next;
    }
    int size = Length(temp) + 1;
    return size;
}