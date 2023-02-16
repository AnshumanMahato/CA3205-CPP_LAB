#include <bits/stdc++.h>

using namespace std;

class IntStack
{
    int top;
    int *stk;

public:
    IntStack()
    {
        top = -1;
        stk = new int[10];
    }
    IntStack(int size)
    {
        top = -1;
        stk = new int[size];
    }

    IntStack(const IntStack &stack)
    {
        top = stack.top;
    }
};