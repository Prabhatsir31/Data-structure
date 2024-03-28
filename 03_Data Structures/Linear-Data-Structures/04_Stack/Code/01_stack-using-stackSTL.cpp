#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    stack<int> myStack;

public:
    void display()
    {
        while (!myStack.empty())
        {
            cout << myStack.top() << "\n";
            myStack.pop();
        }
    }
    void push(int data)
    {
        myStack.push(data);
    }
    void pop()
    {
        myStack.pop();
    }
    int top()
    {
        return myStack.top();
    }
    bool isEmpty()
    {
        return myStack.empty();
    }
};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.display();
    cout << endl;

    return 0;
}