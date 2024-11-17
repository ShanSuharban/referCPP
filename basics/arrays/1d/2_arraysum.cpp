#include<iostream>
using namespace std;
int main () {
	int n,i,sum=0;
	cout<<"Enter the limit of array: "<<endl;
	cin>>n;
	
	int a[n];
	cout<<"enter the numbers: "<<endl;
	for (i=0;i<n;i++) { 
		cin>>a[i];
		sum=sum+a[i];
	}
	
	cout<<"sum of the array: "<<sum;
	
	
return 0;
}
