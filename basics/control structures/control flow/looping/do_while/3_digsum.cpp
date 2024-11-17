#include<iostream>
using namespace std;
int main () {
	int d,n,sum=0;
	cout<<"Enter the number: ";
	cin>>n;
	do {
		d=n%10;
		sum=sum+d;
		n=n/10;
	} while (n!=0);
	
	cout<<"sum: "<<sum; 
	
return 0;
}
