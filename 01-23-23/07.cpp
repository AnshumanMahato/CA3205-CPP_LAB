#include<bits/stdc++.h>

using namespace std;

int digitSumRec(int num){
	if(!(num/10))
		return num;
	else
		return (num%10) + digitSumRec(num/10);
}
int digitSumItr(int num){
	int sum = 0;
	while(num){
		sum += num%10;
		num /= 10;
	}	
	return sum;
}

int main(){
	int num,sum;
	cout<<"Enter no.:";
	cin>>num;
	sum=digitSumRec(num);
	cout<<"\nSum of digits through recursion: "<< sum;
	sum=digitSumItr(num);
	cout<<"\nSum of digits through iteration: "<< sum;
	return 0;
}
