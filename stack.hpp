#ifndef STACK_H
#define STACK_H
#include <climits>
class Stack
{
    int top;

public:
    int a[INT_MAX];
    bool isEmpty();
    bool push(int x);
    int pop();
    int peek();
    Stack()
    {
        top = -1;
    }
};

#endif
