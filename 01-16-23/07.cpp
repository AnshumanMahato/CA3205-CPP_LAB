#include <bits/stdc++.h>
using namespace std;

struct dateOBirth
{
    int date;
    int month;
    int year;
};
struct address
{
    int plotNo;
    int areaCode;
    string city;
};

struct student
{
    string name;
    dateOBirth dob;
    address add;
    int regdno;
    int marks[5];
};

int main()
{
    int size = 2;
    student arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the name of the student\n";
        cin >> arr[i].name;
        cout << "Enter date of birth\n";
        cin >> arr[i].dob.date >> arr[i].dob.month >> arr[i].dob.year;
        cout << "Enter your address (plot no, area code & city)\n";
        cin >> arr[i].add.plotNo >> arr[i].add.areaCode >> arr[i].add.city;
        cout << "Enter your regd. number: ";
        cin >> arr[i].regdno;
        cout << "Enter marks of your 5 subjects";
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i].marks[j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i].regdno > arr[j].regdno)
            {
                student temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // display
    for (int i = 0; i < size; i++)
    {
        cout << arr[i].name << endl
             << arr[i].dob.date << "/" << arr[i].dob.month << "/" << arr[i].dob.year << endl
             << arr[i].add.plotNo << ", " << arr[i].add.areaCode << " & " << arr[i].add.city << endl
             << arr[i].regdno << " marks are\n";
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i].marks[j] << " ";
        }
        cout << endl
             << endl;
    }

    return 0;
}