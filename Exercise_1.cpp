#include <bits/stdc++.h>

using namespace std;

#define MAX 1000

class Stack {
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    Stack() { //Constructor here }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    //Your code here check
    //Check Stack overflow as well
}

int Stack::pop()
{
    //Your code here
    //Check Stack Underflow as well
}
int Stack::peek()
{
    //Your code here
    //Check empty condition too
}

bool Stack::isEmpty()
{
    //Your code here
}

// Driver program to test above functions
int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";

    return 0;
}
