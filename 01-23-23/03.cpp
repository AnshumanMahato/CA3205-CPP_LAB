#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row1,col1,row2,col2;
    cout<<"Enter the no. of rows and columns for matrix A: ";
    cin>>row1>>col1;
    cout<<"Enter the no. of rows and columns for matrix B: ";
    cin>>row2>>col2;
    if(col1 != row2){
        cout<<"\n matrices cannot be multiplied\n";
        return 0;
    }
    int **a,**b,**c;
    a = new int*[row1];
    b = new int*[row2];
    c = new int*[row1];
    
    for(int i =0; i< row1;i++){
    	a[i] = new int[col1];
    	c[i] = new int[col2];
	}
    	
    for(int i =0; i< row2;i++)
    	b[i] = new int[col2];
    	
    
    cout<< "\nEnter "<<row1*col1<<" numbers fo matrix A:";
    for(int i =0;i<row1;i++){
        for(int j =0;j<col1;j++){
            cin>>a[i][j];
        }
    }
    
    cout<<"\nEnter "<<row2*col2<<" numbers fo matrix B:";
    for(int i =0;i<row2;i++){
        for(int j =0;j<col2;j++){
            cin>>b[i][j];
        }
    }
    
    cout<<"\nMatrix A is\n";
    for(int i =0;i<row1;i++){
        for(int j =0;j<col1;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<'\n';
    }
    
    cout<<"\nMatrix B is\n";
    for(int i =0;i<row2;i++){
        for(int j =0;j<col2;j++){
            cout<<b[i][j]<<' ';
        }
        cout<<'\n';
    }
    
    cout<<"\nMatrix A * Matrix B:\n";
    for(int i =0;i<row1;i++){
        
        for(int j =0;j<col2;j++){
               c[i][j] =0;
               int k = 0;
               while(k<col1){
                   c[i][j] += a[i][k] * b[k][j];
                   k++;
               }
               cout<<c[i][j]<<' ';
        }
        cout<<'\n';
    }
    
    for(int i =0;i<row1;i++){
    	delete [] a[i];
    	delete [] c[i];
	}
	for(int i = 0; i<row2;i++ )
		delete [] b[i];
		
	delete [] a;
	delete [] b;
	delete [] c;
    
    return 0;
}
