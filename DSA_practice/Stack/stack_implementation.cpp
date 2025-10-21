#include<iostream>
using namespace std;

class Stack{
    public:

    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
    }
};