#include<iostream>
using namespace std;

void transpose(int a[][100],int p, int q) {
	int i,j;
	cout<<"\nAfter Transpose "<<endl;
	for (i=0;i<p;i++) {
		for (j=0;j<q;j++) {
		cout<<a[j][i]<<"\t"; // transpose
		}
	cout<<"\n";
	}
}

int main () {
	int m,n,i,j;
	int a[100][100];
	cout<<"\nEnter the row and col of matrix: "<<endl;
	cin>>m>>n;

	cout<<"\nEnter the matrix elements: "<<endl;
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			cin>>a[i][j];
		}
}
	
	cout<<"\nBefore Transpose "<<endl;
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	transpose (a,m,n);	
	
return 0;
}
