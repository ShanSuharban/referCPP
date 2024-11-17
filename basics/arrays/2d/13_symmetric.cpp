#include<iostream>
using namespace std;
int main () {
		int m,n,i,j,flag=0;
		cout<<"Enter the rows and col size: "<<endl;
		cin>>m>>n;
		
		int a[m][n];
		int b[m][n];
		
		if (m==n) {
		
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
			
			//symmetric condition
			for (i=0;i<m;i++) {
				for (j=0;j<n;j++) {
					b[i][j]=a[j][i];
				}
			}
			for (i=0;i<m;i++) {
				for (j=0;j<n;j++) {
					if (a[i][j]!=b[i][j]) {
						flag=1;
						break;	
					}
				}
				if (flag==1) {
					cout<<"\nMatrix is not symmetric"<<endl;
					break;
				}
			}
			if (flag==0)
				cout<<"\nMatrix is symmetric"<<endl;
	}
	else {
		cout<<"\nSymmetry is only defined for square matrix"<<endl;
	}
	
return 0;
}
