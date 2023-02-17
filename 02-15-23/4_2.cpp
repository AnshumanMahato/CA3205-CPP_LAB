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
    int get_balance()
    {
        return balance;
    }
    static int get_total_balance()
    {
        return totalBalance;
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

float Account::totalBalance = 0.0;

int main()
{
    Account::addtobank(1000.0);
    Account a1(123, 500.0);
    a1.deposit(200.0);
    a1.withdraw(300.0);
    Account::deductfrombank(500.0);
    std::cout << "Account balance: " << a1.get_balance() << std::endl;
    std::cout << "Total bank balance: " << Account::get_total_balance() << std::endl;
    return 0;
}