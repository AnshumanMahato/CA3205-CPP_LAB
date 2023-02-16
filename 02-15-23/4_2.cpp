#include <bits/stdc++.h>

using namespace std;

class Account
{
    int accNo;
    float balance;
    static float totalBalance;

public:
    Account(int acc, float bal = 0)
    {
        accNo = acc;
        balance = bal;
        totalBalance += bal;
    }
    ~Account()
    {
        totalBalance -= this->balance;
    }

    void deposit(float amount)
    {
        balance += amount;
        totalBalance += amount;
    }
    void withdraw(float amount)
    {
        balance -= amount;
        totalBalance -= amount;
    }
    static void addtobank(float amount)
    {
        totalBalance += amount;
    }
    static void deductfrombank(float amount)
    {
        totalBalance -= amount;
    }
};