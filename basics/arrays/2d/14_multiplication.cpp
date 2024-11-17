#include<iostream>
using namespace std;
int main () {
	int m,n,p,q,i,j,k;
	
	cout<<"Enter the row and col size of matrix 1: "<<endl;
	cin>>m>>n;
	cout<<"Enter the row and col size of matrix 2: "<<endl;
	cin>>p>>q;
	/*
		a[i][j] -> m x n matrix
		b[i][j] -> p x q matrix
		matrix multiplication: condition: n=p
	*/
	int a[m][n],b[p][q],c[p][q];
	if (n==p) {
		cout<<"\nEnter the elements of the matrix 1: "<<endl;
		for (i=0;i<m;i++) {
			for (j=0;j<n;j++) {
				cin>>a[i][j];
			}
		}
		cout<<"\nEnter the elements of the matrix 2: "<<endl;
		for (i=0;i<p;i++) {
			for (j=0;j<q;j++) {
				cin>>b[i][j];
			}
		}
		cout<<"\nMatrix 1 "<<endl;
		for (i=0;i<m;i++) {
			for (j=0;j<n;j++) {
				cout<<a[i][j]<<"\t";
			}
			cout<<"\n";
		}
		
		cout<<"\nMatrix 2 "<<endl;
		for (i=0;i<p;i++) {
			for (j=0;j<q;j++) {
				cout<<b[i][j]<<"\t";
			}
			cout<<"\n";
		}
		
		// matrix multiplication			
		for (i=0;i<m;i++) {
			for (j=0;j<q;j++) {
				c[i][j]=0;
				for (k=0;k<n;k++) {
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
	     }
	   }
	
		cout<<"\nResultant matrix "<<endl;
		for (i=0;i<m;i++) {
			for (j=0;j<n;j++) {
				cout<<c[i][j]<<"\t";
			}
			cout<<"\n";
		}
	}
	else 
		cout<<"Matrix multiplication is not possible "<<endl;

return 0;
}
