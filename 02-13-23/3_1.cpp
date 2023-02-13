#include <bits/stdc++.h>

using namespace std;

class Number
{
    int num;

public:
    Number()
    {
        num = 0;
    }
    Number(int n)
    {
        num = n;
    }
    ~Number()
    {
        cout << "object destroyed for class Num";
    }

    int getNumber()
    {
        return num;
    }

    void setNumber(int n)
    {
        num = n;
    }

    bool isArmstrong()
    {
        int len = 0, temp = num, res;
        while (temp)
        {
            len++;
            temp /= 10;
        }
        res = 0;
        temp = num;
        while (temp)
        {
            res += pow(temp % 10, len);
            temp /= 10;
        }

        return res == num;
    }

    bool isPrime()
    {
        int i;
        if (num == 1)
            return 0;
        for (i = 2; i < sqrt(num); i++)
        {
            if (!(num % i))
                break;
        }

        return i >= sqrt(num);
    }

    int reverse()
    {
        int temp = num, res = 0;
        while (temp)
        {
            res = res * 10 + temp % 10;
            temp /= 10;
        }

        return res;
    }

    int nextCoPrime()
    {
        return num + 1;
    }
};

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    Number num;
    cout << "\nDefault Value: " << num.getNumber();
    num.setNumber(n);
    cout << "\nNew Value: " << num.getNumber();
    cout << "\nis Armstrong: " << num.isArmstrong();
    cout << "\nis Prime: " << num.isPrime();
    cout << "\nnext Co Prime: " << num.nextCoPrime();
    cout << "\nReverse: " << num.reverse() << '\n';

    return 0;
}