#include<iostream>
using namespace std;

int arraysum(int x[], int y) {
	int s=0,i;
	for (i=0;i<y;i++) {
		s=s+x[i];
	}
	return s;
}

int main () {
	int n,i;
	cout<<"Enter the array size: "<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Enter the array elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	
	cout<<"\nSum of array: "<<arraysum(a,n)<<endl;
	
return 0;
}


