/* implement a stack which will support following operations in O(1) time complexity?
1) push() which adds an element to the top of stack.
2) pop() which removes an element from top of stack.
3) findMiddle() which will return middle element of the stack.
4) deleteMiddle() which will delete the middle element. */

#include <iostream>
using namespace std;

class Node{
    int data;
    public:
        Node* prev;
        Node* next;
        int getData(){
            return data;
        }
        void setData(int a){
            data= a;
        }
        Node(int a) : data(a) {
            prev=NULL;
            next=NULL;
        }
};

class specialStack{
    private:
        Node* mid;
        Node* top;
        int size;
    public:
        specialStack();
        void push(int x);
        int pop();
        int findMiddle();
        void deleteMiddle();
        void printStack();
};
specialStack::specialStack(){
    size=0;
    top = mid = NULL;
}
void specialStack::deleteMiddle(){
    if(mid){
        if(mid->prev) mid->prev->next = mid->next;
        if(mid->next) mid->next->prev = mid->prev;
        delete mid;
    }

}
int specialStack::findMiddle(){
    return (!mid) ? -1 : mid->getData();
}

int specialStack::pop(){
    if(!top) return -1;
    if(top->next){
        Node * temp = top;
        top->next->prev = NULL;
        top = top->next;
        int p = temp->getData();
        delete temp;
        return p ;
    }
    else{
        int p =top->getData();
        delete top;
        return p;
    }
}

void specialStack::push(int x){
    Node* temp =new Node(x);
    size++;
    if(!top){
        top = temp;
        this->mid = temp;
    }
    else{
        temp->next = top;
        top->prev = temp;
        top = temp;
        if(!(size&1)) this->mid = this->mid->prev;
    }
    //cout<<mid->getData()<<endl;
    //cout<<size<< " "<<top->getData()<<endl;
}
void specialStack::printStack(){
    Node* temp =top;
    while(temp){
        cout<<temp->getData()<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main () {
   specialStack stk;
   stk.push(1);stk.push(2);stk.push(3);stk.push(4);stk.push(5);stk.push(6);stk.push(7);
   stk.push(8);stk.push(9);stk.push(10);stk.push(11);stk.push(12);stk.push(13);stk.push(14);
   cout<<endl;
   stk.printStack();
   cout<<stk.findMiddle()<<endl;
   cout<<stk.pop()<<endl;cout<<stk.pop()<<endl;cout<<stk.pop()<<endl;
   stk.deleteMiddle();
   cout<<stk.findMiddle()<<endl;
   return 0;
}