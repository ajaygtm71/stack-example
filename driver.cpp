#include <iostream>
#include "stack.hpp"

using namespace std;


int main(){
    Stack s;
    s.isEmpty();
    s.push(1);s.push(2);s.push(3);s.push(4);s.push(5);s.push(6);s.push(7);
    s.isEmpty();
    cout<< s.pop()<<endl;cout<< s.pop()<<endl;cout<< s.peek()<<endl;
    Stack sq;
    sq.isEmpty();
    sq.push(11);sq.push(21);sq.push(31);sq.push(41);sq.push(51);sq.push(61);sq.push(71);
    sq.isEmpty();
    cout<< sq.pop()<<endl;cout<< sq.pop()<<endl;cout<< sq.peek()<<endl;
    return 0;
}