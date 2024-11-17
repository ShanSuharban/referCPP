#include<iostream>
using namespace std;
void deletelast(int a[], int n) {
	int i;
	for (i=n-1;i>=0;i--) {
		a[i]=a[i-1];
		//a[i+1]=a[i];
	}
	cout<<"\nUpdated array "<<endl;
	for (i=1;i<n;i++) {
		cout<<a[i]<<"\t";
	}
	/*  also 
	for (i=n-2;i>=0;i--) {
		a[i+1]=a[i];
	}
	 */
}

int main () {
	int i,n;
	cout<<"\nEnter the array limit: "<<endl;
	cin>>n;
	
	int a[n];
	
	cout<<"\nEnter array elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	delelelast (a,n);
	
return 0;
}
