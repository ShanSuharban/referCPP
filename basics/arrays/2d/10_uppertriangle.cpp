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
		cout<<"\nMatrix elements "<<endl;
		for (i=0;i<m;i++) {
			for (j=0;j<n;j++) {
				cout<<a[i][j]<<"\t";
			}
			cout<<"\n";
		}
		cout<<"\nMatrix upper triangle "<<endl;
		for (i=0;i<m;i++) {
			for (j=i;j<n;j++) {				//only printing position getting changed
				cout<<a[i][j]<<"\t";
			}
			cout<<"\n";
		}	
	
	
return 0;
}
