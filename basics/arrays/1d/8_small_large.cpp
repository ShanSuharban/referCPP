#include<iostream>
using namespace std;
int main () {
	int n,i,large,small;
	cout<<"Enter the limit: "<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Enter the elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	
	small=large=a[0];
	for (i=0;i<n;i++) {
		if (a[i]<small)
			small=a[i];
		else (a[i]>large);
			large=a[i];
	}
	
	cout<<"\nSmallest element: "<<small<<endl<<"Largest element: "<<large<<endl;
		
return 0;
}
