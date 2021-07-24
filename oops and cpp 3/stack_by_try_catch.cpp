#include <iostream>
using namespace std;

class stackoverflow : public exception
{
};
class stackunderflow : public exception
{
};
class stack
{
public:
    int *ptr;
    int top = -1;
    int size;

    stack(int sz)
    {
        size = sz;
        ptr = new int[size];
    }

    void push(int a)
    {

        if (top == size - 1)
            throw stackoverflow();

        top++;
        ptr[top] = a;
    }
    int pop()
    {
        if (top == -1)
            throw stackunderflow();

        return ptr[top--];
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << ptr[i] << endl;
        }
    }
};

int main()
{
    try
    {
        stack s(5);
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);

        s.display();
        s.pop();
        s.pop();
        s.pop();
        s.pop();
        s.pop();
        s.pop();
        s.display();
    }
    catch (stackoverflow a)
    {
        cout << "satck is full" << endl;
    }
    catch (stackunderflow b)
    {
        cout << "satck is empty" << endl;
    }
    return 0;
}