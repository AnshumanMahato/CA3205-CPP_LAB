#include <bits/stdc++.h>

using namespace std;

float plusoverloded(float a, float b)
{
    return a + b;
}

string plusoverloded(string a, string b)
{
    return a + b;
}

void plusoverloaded(int *a, int size, int addendum)
{
    for (int i = 0; i < size; i++)
        *(a + i) += addendum;
}