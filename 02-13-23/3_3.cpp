#include <bits/stdc++.h>

using namespace std;

class Poin2D
{
    int xCo, yCo;

public:
    Poin2D()
    {
        xCo = yCo = 0;
    }

    Poin2D(int x, int y)
    {
        xCo = x;
        yCo = y;
    }

    ~Poin2D()
    {
        cout << "\nobject destroyed for class Poin2D";
    }

    void getPoint()
    {
        printf("(%d,%d)", xCo, yCo);
    }

    void setPoint(int x, int y)
    {
        xCo = x;
        yCo = y;
    }

    bool insideCircle(int r, Poin2D &cen)
    {
        return sqrt(pow((xCo - cen.xCo), 2) + pow((yCo - cen.yCo), 2)) < r;
    }

    bool checkCollinear(Poin2D &p1, Poin2D &p2)
    {
        float s1 = (float)(p1.yCo - yCo) / (p1.xCo - xCo);
        float s2 = (float)(p2.yCo - yCo) / (p2.xCo - xCo);

        return s1 == s2;
    }

    bool onAxis()
    {
        return xCo && yCo;
    }
};