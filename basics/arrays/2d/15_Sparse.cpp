#include<iostream>
using namespace std;
void Sparse (int a[][100], int m, int n) {
	int i=0,j=0,k=1,count=0;
	int b[100][3];
	b[0][0]=m;
	b[0][1]=n;

	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			if (a[i][j]!=0) {
				count++;
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
			}
		}
	}

	b[0][2]=count;
	cout<<"Sparse Matrix: "<<endl;
	for (i=0;i<=k;i++) {
		cout<<b[i][0]<<"\t"<<b[i][1]<<"\t"<<b[i][2]<<endl;
	}
}

int main () {
	int m,n,i,j;
	cout<<"\nEnter the row and col of matrix: "<<endl;
	cin>>m>>n;

	int a[100][100];
	
	cout<<"\nEnter the matrix elements: "<<endl;
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			cin>>a[i][j];
		}
	}
	cout<<"\nMatrix: "<<endl;
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			cout<<a[i][j]<<"\t";
		}
	}
	Sparse (a,100,100);

return 0;
}
