#include<iostream>
using namespace std;

void addmatrix(int a[][100], int b[][100], int p, int q, int res[][100]) {
	int i,j;
	for (i=0;i<p;i++) {
		for (j=0;j<q;j++) {
			res[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"\nResultant matrix "<<endl;
	for (i=0;i<p;i++) {
		for (j=0;j<q;j++) {
			cout<<res[i][j]<<"\t";
		}
		cout<<"\n";
	}
}


int main () {
	int m,n,p,q,i,j;
	int a[100][100], b[100][100], res[100][100];
	cout<<"\nEnter the row and col of matrix 1: "<<endl;
	cin>>m>>n;
	cout<<"\nEnter the row and col of matrix 2: "<<endl;
	cin>>p>>q;
	
	if (m!=p || n!=q) {  // if any of the condition is false either m!=p or nI=q => matrix addition cant be performed 
		cout<<"\nMatrix addition is not possible "<<endl;
		exit (1);
	}

	cout<<"\nEnter the matrix 1 elements: "<<endl;
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			cin>>a[i][j];
		}
	}
	cout<<"\nEnter matrix 2 elements: "<<endl;
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
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	addmatrix(a,b,p,q,res);
	
	
return 0;
}
