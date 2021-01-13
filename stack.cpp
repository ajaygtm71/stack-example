#include <iostream>
using namespace std;
#include "stack.hpp"

bool Stack::push(int x){
    if(this->top>=INT_MAX-1){
        cout<<"Overflow"<<endl;
        return false;
    }
    a[++top]=x;
    cout << x << " pushed into stack\n";
    return true;
}

bool Stack::isEmpty(){
   return (top<0) ?  true : false;
}
int Stack::pop(){
    if(this->isEmpty()){
        cout << "Stack Underflow";
        return 0;
    }
    else { 
        return a[top--];;
    }
}
int Stack::peek(){
    if(this->isEmpty()){
        cout << "Stack Underflow";
        return 0;
    }
    else{
        return a[top];
    }

}