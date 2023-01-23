#include<bits/stdc++.h>

using namespace std;

int main(){
	int size,index;
	cout<<"Enter no. of elements:";
	cin>>size;
	int *arr = new int[size];
	
	cout<<"Enter "<< size<<" values: ";
	for(int i=0;i<size;i++)
		cin>>arr[i];
		
	double u = 0,a2=0;
	for(int i=0;i<size;i++)
		u+= (double)arr[i]/size;
		
	for(int i=0;i<size;i++)
		a2+= pow((arr[i] - u),2)/size;
		
	double a = sqrt(a2);
	
	cout<<"\nVariance: "<<a2;
	cout<<"\nStandard Deviation: "<<a;
		
	return 0;
}
