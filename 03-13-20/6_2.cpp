#include <bits/stdc++.h>

using namespace std;

class Point
{
protected:
    int xCo, yCo;

public:
    Point(int x = 0, int y = 0)
    {
        cout << "object created of class Point\n";
        xCo = x;
        yCo = y;
    }

    ~Point()
    {
        cout << "object destroyed of class Point\n";
    }

    void print()
    {
        printf("Point:(%d,%d)\n", xCo, yCo);
    }
};

class Circle : public Point
{
protected:
    int radius;

public:
    Circle(int x, int y, int r) : Point(x, y)
    {
        cout << "object created of class Circle\n";
        radius = r;
    }

    ~Circle()
    {
        cout << "object destroyed of class Circle\n";
    }

    void print()
    {
        Point::print();
        printf("Radius:%d\n", radius);
    }

    float area()
    {
        return 3.14 * radius * radius;
    }
};

class Cylinder : public Circle
{
protected:
    int height;

public:
    Cylinder(int x = 0, int y = 0, int r = 0, int h = 0) : Circle(x, y, r)
    {
        cout << "object created of class Cylinder\n";
        height = h;
    }

    ~Cylinder()
    {
        cout << "object destroyed of class Cylinder\n";
    }

    void print()
    {
        Circle::print();
        printf("height:%d\n", height);
    }

    float surfacearea()
    {
        return 2 * 3.14 * radius * radius + 2 * 3.14 * radius * height;
    }

    float volume()
    {
        return 3.14 * radius * radius * height;
    }
};

int main()
{
    Cylinder c1(3, 4, 10, 12);
    c1.print();
    cout << "Volume:" << c1.volume();
    cout << "\nSurface Area:" << c1.surfacearea();
    cout << "\nBase Area:" << c1.area() << endl;
    return 0;
}