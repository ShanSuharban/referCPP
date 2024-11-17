#include<iostream>
using namespace std;
int main () {
	
	int i,j,m,n,rsum=0;
	cout<<"Enter the row and col size: "<<endl;
	cin>>m>>n;
	
	int a[m][n];
	
	cout<<"\nEnter the elements: "<<endl;
	for (i=0;i<m;i++) {
		cout<<"\nEnter the "<<"row "<<i+1<<" elements: "<<endl;
		for (j=0;j<n;j++) {
			cin>>a[i][j];
			rsum=rsum+a[i][j];
		}
		cout<<"\nsum of row "<<i+1<<": "<<rsum<<endl;
		rsum=0;
	}
		 
return 0;
}

