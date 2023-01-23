#include<bits/stdc++.h>

using namespace std;

void leftMinRightMax(int *arr,int size,int index){
	int min=0,max=0,i=0;
	while(i<index){
		if(arr[i] < arr[index])
			min++;
		i++;
	}
	i=size-1;
	while(i>index){
		if(arr[i] > arr[index])
			max++;
		i--;
	}
	
	printf("left < arr[%d] = %d, right > arr[%d] = %d",index,min,index,max);
}

int main(){
	int size,index;
	cout<<"Enter size for array:";
	cin>>size;
	int *arr = new int[size];
	
	cout<<"Enter "<< size<<" values in array: ";
	for(int i=0;i<size;i++)
		cin>>arr[i];
	cout<<"Enter index for checking:";
	cin>>index;	
	
	leftMinRightMax(arr,size,index);
	
	delete[] arr;
	return 0;
}
