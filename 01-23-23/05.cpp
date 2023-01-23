#include<bits/stdc++.h>

using namespace std;

void printBinary(int num){
	int i=0, bin[32];
	while(num){
        bin[i++] = num & 1;
        num = num>>1;
    }
	while(i){
    	printf("%d",bin[--i]);
    }
}

int main(){
	int num;
	cout<<"Enter no:";
	cin>>num;
	cout<<"Binary equivalent: ";
	printBinary(num);
	return 0;
}
