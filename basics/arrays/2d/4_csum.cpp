#include<iostream>
using namespace std;
int main () {
	int i,j,m,n,csum=0;
	cout<<"Enter the row and col size: "<<endl;
	cin>>m>>n;
	int a[m][n];
	cout<<"\nEnter the elements: "<<endl;
	for (i=0;i<m;i++) {
		cout<<"\nEnter the col "<<i+1<<" elements: "<<endl;
		for (j=0;j<n;j++) {
			cin>>a[j][i];
			csum=csum+a[j][i];	
		}
		cout<<"col "<<i+1<<" sum: "<<csum<<endl;
		csum=0;
	}
	
return 0;
}
