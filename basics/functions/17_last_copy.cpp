#include<iostream>
using namespace std;

void update (int a[], int n) {
	int i;
	for (i=n-1;i>=0;i--) {
		a[i-1]=a[i];  // second last = last
	}
	cout<<"\nUpdated array "<<endl;
	for (i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
}

int main () {
	int n,i,b;
	cout<<"\nEnter the array  limit: "<<endl;
	cin>>n;
	
	int a[n];
	cout<<"\nEnter the elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	update (a,n);
	
	
}
