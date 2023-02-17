#include <bits/stdc++.h>

using namespace std;

class IntStack
{
    int top, size;
    int *stk;

public:
    IntStack()
    {
        top = -1;
        size = 10;
        stk = new int[10];
    }
    IntStack(int size)
    {
        top = -1;
        this->size = size;
        stk = new int[size];
    }

    IntStack(const IntStack &stack)
    {
        top = stack.top;
        size = stack.size;
        stk = new int[size];
        for (int i = 0; i < top; i++)
            stk[i] = stack.stk[i];
    }
};