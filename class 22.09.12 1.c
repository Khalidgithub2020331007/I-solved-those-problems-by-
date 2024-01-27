#include <iostream>
using namespace std;

struct node{
    int val;
    node *next;
};

struct Stack{
    int arr[3], cnt=0;
    Stack();
    Stack(int);

    ~Stack();
    bool push(int x){
        if(cnt==3){
            cout << "Overflow!" << "\n";
            return false;
        }
        arr[cnt++] = x;
        return true;
    }
    int top(){
        if(cnt==0){
            cout << "Stack is empty!" << "\n";
            return -1;
        }
        return arr[cnt-1];
    }
    bool pop();
};

bool Stack::pop(){
    if(cnt==0){
        cout << "Underflow!" << "\n";
        return false;
    }
    arr[cnt--] = 0;
    return true;
}

Stack::Stack(){
    cnt = 0;
    cout << "cnt in constructor = " << cnt << "\n";
}

Stack::Stack(int n){
    cnt = n;
    cout << "cnt in constructor = " << cnt << "\n";
}

Stack::~Stack(){
    cout << "Oh no! I am dying!" << "\n";
}

int main()
{
    Stack x, *y = new Stack(5);
    int *z = new int[10];
    x.top();
    delete y;
    x.push(15);cout << "Top = " << x.top() <<"\n";
    x.push(19);cout << "Top = " << x.top() <<"\n";
    x.push(23);cout << "Top = " << x.top() <<"\n";
    x.push(-6);cout << "Top = " << x.top() <<"\n";
    x.pop();
    x.pop();
    x.pop();
    x.pop();
    x.pop();
    x.pop();

    cout << "Top = " << x.top() <<"\n";
    cout << "Size of the Stack = " << x.cnt << endl;
    return 0;
}

