#include<iostream>
using namespace std;
int main () {
	int i,n,j,t;
	cout<<"Enter the limit of the array: "<<endl;
	cin>>n;
	
	int a[n];
	
	cout<<"\nEnter the elements : "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"\nBefore sorting "<<endl;
	for (i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
	cout<<"\nAfter sorting "<<endl;
	for (i=0;i<n-1;i++) {
		for (j=i+1;j<n;j++) {
			if (a[i]>a[j]) {
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for (i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
	
	/* also sort
	----------------
	we can manipulate i loop becomes it executing i times j loop. 
	
		for (i=1;i<n;i++) {
			for (j=i+1;j<n;j++) {
				if (a[i]>a[j]) {
				   t=a[i];
				   a[i]=a[j];
				   a[j]=t;
	           }
	       }
	    }
	*/
	
return 0;
}
