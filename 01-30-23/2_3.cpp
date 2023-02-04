#include <bits/stdc++.h>

using namespace std;

inline bool gasLaw(int p, int v, int n, int r, int t)
{
    return p * v == n * r * t;
}

inline float bouyantForce(int v, float rho, float g = 9.8)
{
    return v * rho * g;
}

inline float displacement(int u, int a, int t)
{
    return u * t + 0.5 * a * t * t;
}

inline int aXORb(int a, int b)
{
    return a ^ b;
}

int main()
{
}