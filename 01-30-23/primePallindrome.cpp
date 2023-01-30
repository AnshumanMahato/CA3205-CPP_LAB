#include<bits/stdc++.h>

using namespace std;

int isPrime(int);
int isPallindrome(int);

int main(){
	int num,ch;
	do{
		cout<<"\nNumber Checker\n";
		cout<<"\n1. Check Prime";
		cout<<"\n2. Check Pallindrome";
		cout<<"\n3. Exit\n";
		cout<<"\nEnter Choice(1-3): ";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter a number:";
				cin>>num;
				if(isPrime(num))
					cout<<num<<" is Prime\n";
				else
					cout<<num<<" is not Prime\n";
				break;
			case 2:
				cout<<"Enter a number:";
				cin>>num;
				if(isPallindrome(num))
					cout<<num<<" is Pallindrome\n";
				else
					cout<<num<<" is not Pallindrome\n";
				break;
			case 3:cout<<"Exiting...";break;
			default:cout<<"Invalid Choice...\n";
		}
	}while(ch!=3);
	
}

int isPrime(int num){
	int i;
	if(num == 1)
		return 0;
	for(i=2;i<sqrt(num);i++){
		if(!(num%i))
			break;
	}
	
	if(i>=sqrt(num))
		return 1;
	else
		return 0;
}

int isPallindrome(int num){
	int rev = 0,itr=num;
	while(itr){
		rev = rev*10 + itr%10;
		itr/=10;
	}
	if(rev == num)
		return 1;
	else 
		return 0;
}
