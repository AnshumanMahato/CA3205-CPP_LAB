#include <bits/stdc++.h>

using namespace std;

int hcf(int a, int b)
{
    return b == 0 ? a : hcf(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / hcf(a, b);
}

class Fraction
{
    int num, denom;

public:
    Fraction()
    {
        num = 0;
        denom = 1;
    }
    Fraction(int n, int d)
    {
        num = n;
        denom = d;
    }
    ~Fraction()
    {
        cout << "\nobject destroyed for class Fraction";
    }

    void getFraction()
    {
        if (!num)
            cout << 0;
        else
            cout << num << '/' << denom;
    }

    void setFraction(int n, int d)
    {
        num = n;
        denom = d;
    }

    void addFraction(Fraction &a, Fraction &b)
    {
        denom = lcm(a.denom, b.denom);
        num = (a.num * denom) / a.denom + (b.num * denom) / b.denom;
    }

    void reduceFraction()
    {
        int fact = hcf(num, denom);
        num /= fact;
        denom /= fact;
    }

    void divFraction(Fraction &a, Fraction &b)
    {
        num = a.num * b.denom;
        denom = a.denom * b.num;

        reduceFraction();
    }
};

int main()
{
    int n, d;
    cout << "Enter numerator & denominator for fraction 1:";
    cin >> n >> d;
    Fraction f1(n, d), f2, f3;
    cout << "Enter numerator & denominator for fraction 1:";
    cin >> n >> d;
    f2.setFraction(n, d);
    cout << "\nValue f1: ";
    f1.getFraction();
    cout << "\nValue f2: ";
    f2.getFraction();
    cout << "\nValue f3: ";
    f3.getFraction();
    f3.addFraction(f1, f2);
    cout << "\nf1 + f2: ";
    f3.getFraction();
    f3.reduceFraction();
    cout << "\nreduced f1 + f2: ";
    f3.getFraction();
    f3.divFraction(f1, f2);
    cout << "\nf1 / f2: ";
    f3.getFraction();

    return 0;
}