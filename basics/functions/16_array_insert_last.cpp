#include<iostream>
using namespace std;

void insertlast (int a[], int n, int b) {
	int i;
	for (i=0;i<n;i++) {
		a[i-1]=a[i];	// 1 2 3 4 5 => 1 1 2 3 4 5 => 1 2 2 3 4 5 => 1 2 3 3 4 5 => 1 2 3 4 4 5 => 1 2 3 4 5 5 => 1 2 3 4 5 X 
	}						
	a[n-1]=b;			// a[5-1] = X =>  a[4]= X
	cout<<"\nUpdated array "<<endl;
	for (i=-1;i<n;i++) {
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
	cout<<"\nEnter the element to be added in the last place: "<<endl;
	cin>>b;
	insertlast (a,n,b);
	
	
}
