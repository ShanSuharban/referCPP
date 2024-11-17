#include<iostream>
using namespace std;

void insertfirst (int a[], int n, int b) {
	int i;
	for (i=n-1;i>=0;i--) {
		a[i+1]=a[i];		// 1 2 3 4 5 => 1 2 3 4 5 5 => 1 2 3 4 4 5 => 1 2 3 3 4 5 => 1 2 2 3 4 5 => 1 1 2 3 4 5  
	}						// for loop exit => i=-1
	a[i+1]=b;				//a[-1+1]=b
	cout<<"\nUpdated array "<<endl;
	for (i=0;i<=n;i++) {
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
	cout<<"\nEnter the element to be added in the first place: "<<endl;
	cin>>b;
	insertfirst (a,n,b);
	
	
}
