#ifndef Stack_h
#define Stack_h
#include <iostream>

using namespace std;

template <class T>
class Stack{    //A finite ordered lsit
    public:
        Stack(int);    //constructor
        bool IsEmpty() const;   //check if the stack is empty
        T& Top() const; //return the top element
        void Push (const T& item);  //insert a new element at top
        T& Pop ();    //delete one element from top
        int getTop();
    private:
        T* stack;
        int top;    //init. value=-1
        int capacity;
};



#endif