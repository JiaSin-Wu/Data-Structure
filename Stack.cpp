#include "Stack.h"

template <class T>  //initialization 
Stack<T>::Stack(int stackCapacity){
    capacity=stackCapacity;
    top=0;
    stack=new T[capacity];  //make sure to do this, set the space of the stack
}

template <class T>
bool Stack<T>::IsEmpty()const{
    if (top==0) {return true;}
    else return false;
}

template <class T>
void Stack <T>::Push(const T& x){
    if (top==capacity) {std::cout<<"This stack is full!"<<std::endl;}
    else{stack [++top]=x;}
}

template <class T>
T &Stack<T>::Pop(){
    int t=top;
    if(IsEmpty()) {
        std::cout<<"stack is empty. Cannot delete."<<std::endl;
    }
    else {
        top--; //delete the item
    }
    return stack[t];
}

template <class T>
T &Stack<T>::Top() const {return stack[top];}

template <class T>
int Stack<T>::getTop(){ return top;}
