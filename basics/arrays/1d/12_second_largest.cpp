#include<iostream>
using namespace std;
int main () {
		int n,i,j,t;
		cout<<"Enter the array limit: "<<endl;
		cin>>n;
		
		int a[n];
		
		cout<<"\nEnter the array elements: "<<endl;
		for (i=0;i<n;i++) {
			cin>>a[i];
		}
		cout<<"\n";
		for (i=0;i<n;i++) {
			cout<<a[i]<<"\t";
		}
		cout<<"\nSorting in descending order "<<endl;
		for (i=0;i<n-1;i++) {
			for (j=i+1;j<n;j++) {
				if (a[i]<a[j]) {
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		for (i=0;i<n;i++) {
			cout<<a[i]<<"\t";
		}
		cout<<"\n";
		cout<<"\nSecond largest element: "<<a[1]<<endl;
		cout<<"Second smallest element: "<<a[n-2]<<endl;
	
return 0;
}
