#include<iostream>
using namespace std;
int main  () {
	int i,n,j,k;
	cout<<"Enter the array size: "<<endl;
	cin>>n;
	
	int a[n];
	int oa[n];
	int ea[n];
	
	cout<<"\nEnter the array elements: "<<endl;
	for (i=0,j=0,k=0;i<n;i++) {
		cin>>a[i];
		if (a[i]%2==0) {
		   ea[j]=a[i];
		   j++;
        }
        else {
        	oa[k]=a[i];
        	k++;
		}
	}	
	
	cout<<"\nArray "<<endl;
	for (i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
	
	cout<<"\nEven array "<<endl;
	for (i=0;i<j;i++) {
		cout<<ea[i]<<"\t";
	} 
	cout<<"\nOdd array "<<endl;
	for (i=0;i<k;i++) {
		cout<<oa[i]<<"\t";
	}

return 0;
}
