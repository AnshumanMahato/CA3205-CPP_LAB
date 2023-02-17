#include <bits/stdc++.h>

using namespace std;

class MyDate
{
    int day, month, year;

public:
    MyDate(int d = 1, int m = 1, int y = 2000)
    {
        day = d;
        month = m;
        year = y;
    }

    void display()
    {
        printf("%d/%d/%d", day, month, year);
    }
};

class Employee
{
    int empno;
    double salary;
    MyDate doj;

public:
    Employee(int eno, MyDate date, double sal)
    {
        empno = eno;
        doj = date;
        salary = sal;
    }

    Employee(const Employee &obj)
    {
        empno = obj.empno;
        doj = obj.doj;
        salary = obj.salary;
    }

    void setEmpData(int eno, MyDate date, double sal)
    {
        empno = eno;
        doj = date;
        salary = sal;
    }

    void showEmpData()
    {
        cout << "\nEmployee Number: " << empno;
        cout << "\nDate of Joining: ";
        doj.display();
        cout << "\nSalary: " << salary;
    }

    friend void calcTax(Employee);
};

void calcTax(Employee emp)
{
    cout << "\nTax payable by Employee " << emp.empno << " : ";
    if (emp.salary < 100000)
        cout << "NIL";
    else if (emp.salary < 200000)
        cout << 0.1 * emp.salary;
    else if (emp.salary < 500000)
        cout << 0.15 * emp.salary;
    else
        cout << 0.2 * emp.salary;
}

int main()
{
    MyDate d1(1, 1, 2020);
    Employee e1(101, d1, 150000);
    e1.showEmpData();
    Employee e2 = e1;
    MyDate d2(1, 2, 2020);
    e2.setEmpData(102, d2, 200000);
    e2.showEmpData();
    calcTax(e2);
    return 0;
}