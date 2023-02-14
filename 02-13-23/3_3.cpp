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
        return !(xCo && yCo);
    }
};

int main()
{
    int x, y;
    cout << "Enter coordinates p2:";
    cin >> x >> y;
    Poin2D p1, p2(x, y), p3;
    cout << "\nPoint 1: ";
    p1.getPoint();
    cout << "\nPoint 2: ";
    p2.getPoint();
    cout << "\nIs p2 inside circle with p1 center and radius 10: " << p2.insideCircle(10, p1);
    cout << "\nEnter coordinates p3:";
    cin >> x >> y;
    p3.setPoint(x, y);
    cout << "\nPoint 3: ";
    p3.getPoint();
    cout << "\nIs p1 p2 p3 collinear: " << p3.checkCollinear(p1, p2);
    cout << "\nIs p1 on axis: " << p1.onAxis();
    cout << "\nIs p2 on axis: " << p2.onAxis();
    cout << "\nIs p3 on axis: " << p3.onAxis();
    return 0;
}