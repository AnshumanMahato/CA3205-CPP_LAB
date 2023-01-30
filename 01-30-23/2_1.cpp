#include<bits/stdc++.h>

using namespace std;

void printPattern(int lines = 5,int diff =1){
	int base = 1;
	for(int i=0;i<lines;i++){
		for(int j=0;j<=i;j++){
			cout<<base<<' ';
			base+=diff;
			if(base > 9)
				base =1;
		}
		cout<<'\n';
	}
}

int main(){
	int lines,diff;
	cout<<"Enter no. of lines: ";
	cin>>lines;
	cout<<"Enter difference: ";
	cin>>diff;
	printPattern(lines,diff);
	return 0;
}
