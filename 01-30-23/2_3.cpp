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
    int p, v, n, r, t, u, a, b;
    float rho, g;
    cout << "\nEnter values for p,v,n,r,t to check for Ideal gas law:";
    cin >> p >> v >> n >> r >> t;
    if (gasLaw(p, v, n, r, t))
        cout << "Given values satisfy the ideal gas law.\n";
    else
        cout << "Given values do not satisfy the ideal gas law.\n";
    cout << "\nEnter volume, density and gravity to calculate bouyant force:";
    cin >> v >> rho >> g;
    cout << "Bouyant Force: " << bouyantForce(v, rho, g);
    cout << "\nEnter initial velocity, acceleration and time to calculate displacement:";
    cin >> u >> a >> t;
    cout << "Displacement: " << displacement(u, a, t);
    cout << "\n Enter a and b to calculate a xor b:";
    cin >> a >> b;
    cout << "a xor b: " << aXORb(a, b);

    return 0;
}