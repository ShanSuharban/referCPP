#include<iostream>
using namespace std;
int main () {
int m,n,i,j,sum=0;
cout<<"Enter the rows and cols size: "<<endl;
cin>>m>>n;

int a[m][n];
cout<<"Enter the elements: "<<endl;
for (i=0;i<m;i++) {
	for (j=0;j<n;j++) {
		cin>>a[i][j];
		sum=sum+a[i][j];
	}
}

cout<<"sum of matrix: "<<sum<<endl;
	
return 0;
}
