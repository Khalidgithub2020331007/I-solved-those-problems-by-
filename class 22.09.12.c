#include <iostream>
using namespace std;

struct node{
    int val;
    node *prev;
    node(int v){
        val = v;
        prev = NULL;
    }
};

struct Stack{
    node *top;
    Stack();
    int push(int x);
//    int top();
    int pop();
};

int Stack::push(int x){
    node *cur = new node(x);
    if(top==NULL) {
        top = cur;
        return true;
    }
    cur->prev = top;
    top = cur;
    return top->val;
}
//int Stack::top(){
//    if(cnt==0){
//        cout << "Stack is empty!" << "\n";
//        return -1;
//    }
//
//}

int Stack::pop(){
//    if(cnt==0){
//        cout << "Underflow!" << "\n";
//        return false;
//    }
//
//    return true;
}

Stack::Stack(){
    top = NULL;
}


int main()
{
    Stack *x = new Stack();

    x->push(15);cout << "Top = " << x->top->val <<"\n";
    x->push(19);cout << "Top = " << x->top->val <<"\n";
    x->push(23);cout << "Top = " << x->top->val <<"\n";
    cout<< "Pushed: " << x->push(-6) << "\n";
    cout << "Top = " << x->top->val <<"\n";
//    x.pop();
//    x.pop();
//    x.pop();
//    x.pop();
//    x.pop();
//    x.pop();
//
//    cout << "Top = " << x.top() <<"\n";
//    cout << "Size of the Stack = " << x.cnt << endl;
    return 0;
}

