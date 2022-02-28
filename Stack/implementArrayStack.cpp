#include <iostream>
using namespace std;

// implement push, pop, top, isEmpty

// #define n 100;

class Stack
{
    int *arr;
    int top;

public:
    static int n;

    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    // operations

    // Push -> Pushes an element to the top of stack
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    // Pop -> pops the topmost element from the stack
    void pop()
    {
        if (top == -1)
        {
            cout << "No element in Stack" << endl;
            return;
        }
        top--;
    }

    //  Top -> gives the topmost element of the stack
    int Top()
    {
        if (top == -1)
        {
            cout << "No element to Pop" << endl;
            return -1;
        }

        return arr[top];
    }

    // isEmpty -> check whether a stack is empty or not
    int isEmpty()
    {
        if (top == -1)
        {
            cout << "Stack is Empty"<<endl;
            return 0;
        }
        return 1;
    }
};

int Stack::n = 100;

int main()
{
    Stack s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    while(s.isEmpty()){
        cout<<s.Top()<<endl;
        s.pop();
    }
    // int x = s.Top();
    // cout << x << endl;
    return 0;
}
