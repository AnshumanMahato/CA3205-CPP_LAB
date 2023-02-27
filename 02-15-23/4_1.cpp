#include <bits/stdc++.h>

using namespace std;

class IntStack
{
private:
    int top;
    int *data;
    int capacity;

public:
    IntStack()
    {
        top = -1;
        capacity = 10;
        data = new int[capacity];
    }

    IntStack(int size)
    {
        top = -1;
        capacity = size;
        data = new int[capacity];
    }

    IntStack(const IntStack &other)
    {
        top = other.top;
        capacity = other.capacity;
        data = new int[capacity];
        for (int i = 0; i <= top; i++)
        {
            data[i] = other.data[i];
        }
    }

    ~IntStack()
    {
        delete[] data;
    }

    int pop()
    {
        if (top == -1)
        {
            throw "Stack is empty";
        }
        int value = data[top];
        top--;
        return value;
    }

    void push(int val)
    {
        if (top == capacity - 1)
        {
            cout << "Stack is full.";
            return;
        }
        top++;
        data[top] = val;
    }
    void display()
    {
        cout << "Stack elements: ";
        while (top != -1)
        {
            cout << pop() << " ";
        }
        cout << endl;
    }
};

int main()
{
    IntStack stack1(5);
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    IntStack stack2 = stack1;
    stack1.display();
    return 0;
}
