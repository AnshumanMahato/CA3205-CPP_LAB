#include <bits/stdc++.h>

using namespace std;

class Triangle;

class Line
{
    int len;

public:
    Line(int l = 0)
    {
        len = l;
    }
    friend class Triangle;
    friend float findArea(Triangle t);
};

class Triangle
{
    Line side1, side2, side3;

public:
    Triangle(Line l1, Line l2, Line l3)
    {
        side1 = l1;
        side2 = l2;
        side3 = l3;
    }
    Triangle(const Triangle &t)
    {
        side1 = t.side1;
        side2 = t.side2;
        side3 = t.side3;
    }
    void setSide(Line l1, Line l2, Line l3)
    {
        side1 = l1;
        side2 = l2;
        side3 = l3;
    }

    void showSides()
    {
        cout << "\nSide1: " << side1.len;
        cout << "\nSide2: " << side2.len;
        cout << "\nSide3: " << side3.len;
    }

    friend float findArea(Triangle t);
};

float findArea(Triangle t)
{
    int s = (t.side1.len + t.side2.len + t.side3.len) / 2;
    return sqrt(s * (s - t.side1.len) * (s - t.side2.len) * (s - t.side3.len));
}

int main()
{
    Line side1(5);
    Line side2(6);
    Line side3(7);
    Triangle myTriangle(side1, side2, side3);
    cout << "\nSides of the triangle:" << endl;
    myTriangle.showSides();
    float area = findArea(myTriangle);
    cout << "\nArea of the triangle: " << area << endl;
    Triangle copyTriangle(myTriangle);
    cout << "\nSides of the copied triangle:" << endl;
    copyTriangle.showSides();

    return 0;
}