#include<bits/stdc++.h>
#define SIZE 10

using namespace std;

int isSorted(int (&arr)[SIZE]){
	int i;
	for(i =1;i<SIZE;i++){
		if(arr[i] > arr[i-1])
			break;
	}
	if(i < SIZE){
		for(i =1;i<SIZE;i++){
			if(arr[i] < arr[i-1])
				break;
		}
		if(i < SIZE)
			return 0;
		else
			return 1;
	}
	else
		return -1;
}

int main(){
	int arr[SIZE];
	cout<<"Enter values in array: ";
	for(int i =0;i<SIZE;i++)
		cin>>arr[i];
	
	int flag = isSorted(arr);
	
	if (flag == 0)
		cout<<"Array is not sorted";
	else if(flag == 1)
		cout<<"Array is sorted in ascending order";
	else
		cout<<"Array is sorted in descending order";
	
	return 0;
}
