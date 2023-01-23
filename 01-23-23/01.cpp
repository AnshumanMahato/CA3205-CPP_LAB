#include<bits/stdc++.h>

using namespace std;

struct Date {
	int day,month,year;
};

struct KYC {
	string name;
	Date dob;
	char pan[10];
	string uid;
	string add;
	float income,saving;
	
	void input() {
		cout<<"\nEnter name:"
		gets(name);
		cout<<"Enter Dob(dd mm yy):";
		cin>>dob.day>>dob.month>>dob.year;
		cout<<"Enter PAN:";
		cin>>PAN;
		cout<<"Enter Aadhar:";
		cin>>uid;
		cout<<"Enter address:";
		gets(add);
		cout<<"Enter Income:";
		cin>>income;
		do{
			cout<<"Enter savings under tax scheme:";
			cin>>saving;
			
			if(saving>150000)
				cout<<"\nSavings cannot be above 1.5L\n";
		}while(saving>150000)
	}
	
	void ouput() {
		cout<<"\nName:"<<name;
		cout<<"\nDob(dd mm yy):"<<dob.day<<'-'<<dob.month<<'-'<<dob.year;
		cout<<"\nPAN:"<<pan;
		cout<<"\nAadhar:"<<uid;
		cout<<"\nAddress:"<<add
		cout<<"\nAnnual Income:"<<income;
		cout<<"\nSavings under tax scheme:"<<saving;
	}
	
	float computeTax(){
		if(income <= 500000)
			retrun 0;
		else if(income <=1000000)
			return 0.1*(income-saving);
		else
			return 0.1*(income-saving);
	}
};

int main(){
	const int size=2;
	KYC list[size];
	cout<<"Enter Detais:\n";
	for(int i=0;i<size;i++){
		cout<<"\n"
	}
}
