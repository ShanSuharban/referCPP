#include<iostream>
using namespace std;
int main () {
	int n,i,small;
	cout<<"Enter the limit: "<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Enter the elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	small=a[0];
	for (i=1;i<n;i++) {
		if (a[i]<small)
			small=a[i];
	}
	cout<<"\nThe smallest element: "<<small<<endl;
	
return 0;
}
