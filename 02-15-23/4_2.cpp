#include <bits/stdc++.h>

using namespace std;

class Account
{
    int accNo;
    float balance;
    static float totalBal;

public:
    Account(int acc, float bal = 0)
    {
        accNo = acc;
        balance = bal;
        totalBal += bal;
    }
    ~Account()
    {
        totalBal -= this->balance;
    }

    void deposit(float amount)
    {
        balance += amount;
        totalBal += amount;
    }
    void withdraw(float amount)
    {
        balance -= amount;
        totalBal -= amount;
    }
    int get_balance()
    {
        return balance;
    }
    static float get_total_balance()
    {
        return totalBal;
    }
    static void addtobank(float amount)
    {
        totalBal += amount;
    }
    static void deductfrombank(float amount)
    {
        totalBal -= amount;
    }
};

float Account::totalBal = 0.0;

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