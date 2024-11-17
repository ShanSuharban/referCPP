#include<iostream>
using namespace std;
int main () {
	int n,i,oddsum=0;
	cout<<"Enter the limit: "<<endl;
	cin>>n;
	
	int a[n];
	
	cout<<"Enter the elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
		if (a[i]%2!=0) 
			oddsum=oddsum+a[i];
	}
	cout<<"\nsum of odd elements: "<<oddsum<<endl;
	
return 0;
}
