#include<iostream>
using namespace std;
int main () {
	int i,sum=0,n;
	cout<<"\nEnter the array limit: "<<endl;
	cin>>n;
	
	int array[n];
	cout<<"\nEnter the array elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>*(array+i);
		sum = sum + *(array+i);
	}
	cout<<"\nSum: "<<sum<<endl;
	
}
