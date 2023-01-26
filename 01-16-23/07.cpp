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
    int size = 10;
    student arr[size];
    for (int i = 0; i < size; i++)
    {
        fflush(stdin);
        cout << "\nEnter the name of the student:";
        getline(cin, arr[i].name);
        cout << "Enter date of birth(dd mm yyyy):";
        cin >> arr[i].dob.date >> arr[i].dob.month >> arr[i].dob.year;
        cout << "Enter your address (plot no, area code & city):";
        cin >> arr[i].add.plotNo >> arr[i].add.areaCode >> arr[i].add.city;
        cout << "Enter your regd. number: ";
        cin >> arr[i].regdno;
        cout << "Enter marks of your 5 subjects:\n";
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

    cout << "\nStudent Details\n";

    for (int i = 0; i < size; i++)
    {
        cout << "\nName:" << arr[i].name << endl;
        cout << "DOB:" << arr[i].dob.date << "/" << arr[i].dob.month << "/" << arr[i].dob.year << endl;
        cout << "Regd. No.:" << arr[i].regdno;
        cout << "Address:" << arr[i].add.plotNo << ", " << arr[i].add.areaCode << " & " << arr[i].add.city << endl;
        cout << " marks are\n";
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i].marks[j] << " ";
        }
        cout << endl;
    }

    return 0;
}