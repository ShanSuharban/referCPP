#include<iostream>
using namespace std;
int main () {
	int n,i;
	cout<<"Enter the array limit: "<<endl;
	cin>>n;
	
	int a[n];
	int b[n];
	
	cout<<"\nEnter the array elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"\nArray elements "<<endl;
	for (i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
	for (i=0;i<n;i++) {
		b[i]=a[n-i-1];
	}
	cout<<"\nArray in reverse order "<<endl;
	for (i=0;i<n;i++) {
		cout<<b[i]<<"\t";
	}
		
	
	
return 0;
}
