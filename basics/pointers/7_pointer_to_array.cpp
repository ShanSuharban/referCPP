#include<iostream>
using namespace std;
int main () {
	int i,n;
	cout<<"\nEnter the array limit: "<<endl;
	cin>>n;
	
	int array[n];
	
	cout<<"\nEnter the array elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>array[i];
	}
	
	int *p=array;
	cout<<"\nArray accessing using pointer variable method "<<endl;
	for (i=0;i<5;i++) {
		cout<<"*(p+"<<i<<"): "<<*(p+i)<<"\n";
	}
	cout<<"\nArray accesing using balance as address "<<endl;
	for (i=0;i<n;i++) {
	    cout<<"*(array+"<<i<<"): "<<*(array+i)<<"\n";
	}
	
	
return 0;
}
