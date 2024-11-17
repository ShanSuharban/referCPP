#include<iostream>
using namespace std;
int main () {
	
	int i,n;
	cout<<"Enter the limit: "<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Enter the elements: "<<endl;
	
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"\n";
	for (i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
	
return 0;
}
