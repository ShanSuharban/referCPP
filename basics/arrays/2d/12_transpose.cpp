#include<iostream>
using namespace std;
int main () {
		int m,n,i,j;
		cout<<"Enter the rows and col size: "<<endl;
		cin>>m>>n;
		
		int a[m][n];
		
		cout<<"\nEnter the elements: "<<endl;
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
		cout<<"\nAfter Transpose "<<endl;
		for (i=0;i<m;i++) {
			for (j=0;j<n;j++) {
				cout<<a[j][i]<<"\t";
			}
			cout<<"\n";
		}
	
return 0;
}