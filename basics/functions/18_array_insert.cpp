#include<iostream>
using namespace std;

void insert (int a[], int n, int k, int b)  {
	int i;
	
		/*	here i=n because if we use i=n-1, then it will not arrange the array in k ways, so the proper arrangement of number not occurs
		eg: if a[] = {1,2,3,4,5}; , if k=3 and insertion number is 6.
		then it will not rearrange upto position 3 ,if we use i=n-1.It will only rearrange upto 2 because we are in the last element of the array and performing arrangement from it onwards.
		inorder to fix that , we need to move to the 5th position of array, that is a[5} position , so i =n.But there are no values inside them,
		then we need to copy previous value to that array ,we are currently inside.
		
		so a[i-1]=a[i]; 
		  
		*/
	
	for (i=n;i>=k;i--) { 
		a[i]=a[i-1];
	}
	a[k-1]=b;
	
	cout<<"\nUpdated array "<<endl;
	for (i=0;i<=n;i++) {
		cout<<a[i]<<"\t";
	}
}

int main () {
	int i,n,k,b;
	cout<<"\nEnter the array limit: "<<endl;
	cin>>n;
	
	int a[n];
	cout<<"\nEnter array elements: "<<endl;
	for (i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\nEnter the array position to be inserted: "<<endl;
	cin>>k;
	cout<<"\nEnter the element to insert: "<<endl;
	cin>>b;
	
	insert (a,n,k,b);
	
return 0;
}
