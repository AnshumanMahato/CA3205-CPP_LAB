#include <bits/stdc++.h>
using namespace std;
class Student
{
protected:
    int rollno;
    string name;
    string branch;
    string institute;
    float cgpa;

public:
    Student(int a, string b, string c, string d, float cg)
    {
        rollno = a;
        name = b;
        branch = c;
        institute = d;
        cgpa = cg;
    }
    ~Student() { cout << "Obj destroyed for class Student\n"; }
    void printData()
    {
        printf("Roll No : %d\nName : %s\nBranch : %s\nInstitute : %s\nCGPA : %.2f\n", rollno, name.c_str(), branch.c_str(), institute.c_str(), cgpa);
    }
};
class Employee
{
protected:
    string empid;
    string name;
    string org;
    float salary;

public:
    Employee(string emp, string na, string o, float sal)
    {
        empid = emp;
        name = na;
        org = o;
        salary = sal;
    }
    ~Employee() { cout << "Obj destroyed for class Employee\n"; }
    void printData()
    {
        printf("Employee ID: %s\nName: %s\nOrganistion: %s\nSalary: %.2f\n", empid.c_str(), name.c_str(), org.c_str(), salary);
    }
};
class WorkingStudent : public Student, public Employee
{
public:
    WorkingStudent(int roll, string n, string b, string ins, float cg, string id, string o, float sal) : Student(roll, n, b, ins, cg), Employee(id, n, o, sal) {}
    ~WorkingStudent() { cout << "Obj destroyed for class WorkingStudent\n"; }
    void printData()
    {
        cout << "\nStudent Details:\n";
        Student::printData();
        cout << "\n\nEmployee Details:";
        Employee::printData();
        cout << endl;
    }
};
int main()
{
    WorkingStudent ws(45, "Sushanto", "M.C.A", "NIT_JSR", 6.42, "LABOR123", "TATA_MOTORS", 100.42);
    ws.printData();
    return 0;
}