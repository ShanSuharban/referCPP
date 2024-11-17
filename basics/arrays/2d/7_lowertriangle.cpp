#include<iostream>
using namespace std;
int main () {
		int m,n,i,j;
		cout<<"Enter the row and col size: "<<endl;
		cin>>m>>n;
		
		int a[m][n];
		
		cout<<"\nEnter the matrix elements: "<<endl;
		for (i=0;i<m;i++) {
			for (j=0;j<n;j++) {
				cin>>a[i][j];
			}
		}	
		cout<<"\n Matrix elements "<<endl;
		for (i=0;i<m;i++) {
			for (j=0;j<n;j++) {
				cout<<a[i][j]<<"\t";
			}
			cout<<"\n";
		}
		cout<<"\nMatrix lower triangle "<<endl;
		for (i=0;i<m;i++) {
			for (j=0;j<i+1;j++) {
				cout<<a[i][j]<<"\t";
			}
			cout<<"\n";
		}	
	
	
return 0;
}
