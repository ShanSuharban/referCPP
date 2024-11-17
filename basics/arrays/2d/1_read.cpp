#include<iostream>
using namespace std;
int main () {
	
		int m,n,i,j;
		cout<<"Enter the rows and cols of matrix: "<<endl;
		cin>>m>>n;
		
		int a[m][n];
		
		cout<<"Enter the matrix elements: "<<endl;
		for (i=0;i<m;i++) {
			for (j=0;j<n;j++) {
				cin>>a[i][j];
			}
		}
		cout<<"\nMatrix "<<endl;
		for (i=0;i<m;i++){
			for (j=0;j<n;j++) {
				cout<<a[i][j]<<"\t";
			}
			cout<<"\n";
		}
		
return 0;
}
