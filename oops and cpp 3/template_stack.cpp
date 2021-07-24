#include <iostream>
using namespace std;

template <class T>
class stack
{
public:
    int size;
    int top;
    T *stk;
    stack(int sz)
    {
        top = -1;
        size = sz;
        stk = new T[size];
    }
    void push(T x);
    T pop();
};

template <class T>
void stack<T>::push(T x)
{
    if (top == size - 1)
        cout << "stack is full " << endl;
    else
    {
        top++;
        stk[top] = x;
    }
}

template <class T>

T stack<T>::pop()
{
    T x = 0;
    if (top == -1)
        cout << "stack is empty " << endl;
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}

int main()
{
    stack<int> s(2);
    s.push(1);
    s.push(2);
    s.push(3);
    return 0;
}