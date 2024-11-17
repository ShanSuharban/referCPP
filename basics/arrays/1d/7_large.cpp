#include<iostream>
using namespace std;
int main () {
	int large,n,i;
	cout<<"Enter the limit: "<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Enter the elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	large=a[0];
	for (i=0;i<n;i++) {
		if (a[i]>large) 
			large=a[i];
	}
	cout<<"Largest element: "<<large<<endl;
	
return 0;
}
