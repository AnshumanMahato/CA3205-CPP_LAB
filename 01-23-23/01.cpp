#include <bits/stdc++.h>

using namespace std;

struct Date
{
	int day, month, year;
};

struct KYC
{
	string name;
	Date dob;
	char pan[10];
	long long uid;
	string add;
	float income, saving;

	void input()
	{
		fflush(stdin);
		cout << "\nEnter name:";
		getline(cin, name);
		cout << "Enter Dob(dd mm yyyy):";
		cin >> dob.day >> dob.month >> dob.year;
		cout << "Enter PAN:";
		cin >> pan;
		cout << "Enter Aadhar:";
		cin >> uid;
		fflush(stdin);
		cout << "Enter address:";
		getline(cin, add);
		cout << "Enter Income:";
		cin >> income;
		do
		{
			cout << "Enter savings under tax scheme:";
			cin >> saving;

			if (saving > 150000)
				cout << "\nSavings cannot be above 1.5L\n";
		} while (saving > 150000);
	}

	void ouput()
	{
		cout << "\nName:" << name;
		cout << "\nDob(dd-mm-yy):" << dob.day << '-' << dob.month << '-' << dob.year;
		cout << "\nPAN:" << pan;
		cout << "\nAadhar:" << uid;
		cout << "\nAddress:" << add;
		cout << "\nAnnual Income:" << fixed << setprecision(2) << income;
		cout << "\nSavings under tax scheme:" << fixed << setprecision(2) << saving;
	}

	float computeTax()
	{
		if (income <= 500000)
			return 0;
		else if (income <= 1000000)
			return 0.1 * (income - saving);
		else
			return 0.2 * (income - saving);
	}
};

int main()
{
	const int size = 7;
	KYC list[size];
	cout << "Enter " << size << " Detais:\n";
	for (int i = 0; i < size; i++)
	{
		cout << "\nKYC " << i + 1;
		list[i].input();
	}

	cout << "\nKYC Detais:";
	for (int i = 0; i < size; i++)
	{
		cout << "\n\nKYC " << i + 1;
		list[i].ouput();
		cout << "\nIncome Tax:" << fixed << setprecision(2) << list[i].computeTax();
	}

	return 0;
}
