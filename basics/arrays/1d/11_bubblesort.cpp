#include<iostream>
using namespace std;
int main () {
	/*
			bubble sort
			-----------
		n elements in array -> (n-1) bubbles -> like pairs 
		inorder to sort ascending order -> we need to sort (n-1) times to get the first largest element in right most position
		if we sort 2 times (n-1) times -> we get first and second largest element in right most position in ascending order
		inorder to get complete array in ascending order -> we need to sort (n-1) times (n-1) times in array -> all elements in ascending order
		
	*/
	
	int n,i,t,j;
	cout<<"Enter the limit: "<<endl;
	cin>>n;
	
	int a[n];
	
	cout<<"\nEnter the elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"\nBefore Bubble Sort "<<endl;
	for (i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
	cout<<"\nAfter Bubble Sort "<<endl;
	for (i=0;i<n-1;i++) {
		for (j=0;j<n-1;j++) {
			if (a[j]>a[j+1]) {
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	cout<<"\n";
	for (i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
	
	/* 		efficient
	
		for (i=1;i<n;i++) {
		for (j=0;j<n-i;j++) {
			if (a[j]>a[j+1]) {
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	
	*/	
return 0;
}
