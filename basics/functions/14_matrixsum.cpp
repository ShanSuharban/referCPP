#include<iostream>
using namespace std;
int matrixsum (int x[][10], int y, int z) {
	int i,j,sum=0;
	for (i=0;i<y;i++) {
		for (j=0;j<z;j++) {
			sum=sum+x[i][j];
		}
	}
	return sum;
}

int main () {
	int i,j,m,n;
	cout<<"Enter the rows and cols size: "<<endl;
	cin>>m>>n;
	
	int a[m][10];
	cout<<"\nEnter natrix elements: "<<endl;
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			cin>>a[i][j];
		}
	}
	cout<<"\n";
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"\nSum of Matrix elements: ";
	cout<<matrixsum(a,m,n);
	
	// if the size of the column in the user side exceeds the value 10, it shows the wrong sum result
	
	
return 0;
}
