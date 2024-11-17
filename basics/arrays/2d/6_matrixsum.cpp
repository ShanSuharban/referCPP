#include<iostream>
using namespace std;
int main () {
	int m,n,p,q,i,j;
	
	cout<<"Enter the row and col size of matrix 1: "<<endl;
	cin>>m>>n;
	cout<<"Enter the row and col size of matrix 2: "<<endl;
	cin>>p>>q;
	/*
		a[i][j] -> m x n matrix
		b[i][j] -> p x q matrix
		matrix addition condition: m=p and n=q
	*/
	int a[m][n],b[p][q],c[p][q];
	if (m==p && n==q) {
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
		
		//addition					
		for (i=0;i<p;i++) {
			for (j=0;j<q;j++) {
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		cout<<"\nResultant matrix "<<endl;
		for (i=0;i<p;i++) {
			for (j=0;j<q;j++) {
				cout<<c[i][j]<<"\t";
			}
			cout<<"\n";
		}
	}
	else 
		cout<<"Matrix addition is not possible "<<endl;

return 0;
}
