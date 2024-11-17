#include<iostream>
using namespace std;

void deletefirst(int a[], int n) {
	int i;
	for (i=0;i<n;i++) {
		a[i]=a[i+1];
	}
	
    cout<<"\nUpdated array "<<endl;
	for (i=0;i<n-1;i++) {
		cout<<a[i]<<"\t";
	}
	
	/* 	also 
	   
	   	for (i=0;i<n;i++){
			a[i-1]=a[i];  // a[-1]=a[0];
	    }
	cout<<"\nUpdated array "<<endl;
	for (i=0;i<n-1;i++) {
		cout<<a[i]<<"\t";
	}
	
	*/
	
}

int main () {
	int n,i;
	cout<<"\nEnter the array limit: "<<endl;
	cin>>n;
	
	int a[n];
	
	cout<<"\nEnter the elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}	
	deletefirst (a,n);
	
	
return 0;
}
