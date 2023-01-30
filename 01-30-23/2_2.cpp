#include<bits/stdc++.h>

using namespace std;

struct Product{
	int pid;
	int rating;
	
	void input(){
		cout<<"\nEnter Product id:";
		cin>>pid;
		do{
			cout<<"Enter ratings: ";
			cin>>rating;
			
			if(rating < 1 || rating>5)
				cout<<"Rating must be between 1-5\n";
		}while(rating < 1 || rating>5);
	}
};

void checkRatings(Product prods[],int size,int &top,int &avg,int &low){
	top=avg=low=0;
	for(int i=0;i<size;i++){
		if(prods[i].rating >=4)
			top++;
		else if(prods[i].rating >= 3)
			avg++;
		else
			low++;
	}
}

int main(){
	int size;
	cout<<"Enter no. of products:";
	cin>>size;
	Product *prods = new Product[size];
	cout<<"Enter Product Details\n\n";
	for(int i = 0;i<size;i++)
		prods[i].input();
	int top,avg,low;
	checkRatings(prods,size,top,avg,low);
	cout<<"\nTop products: "<<top;	
	cout<<"\nAverage products: "<<avg;	
	cout<<"\nLow products: "<<low;	
		
	return 0;
}
