#include<iostream>
using namespace std;
int main () {
	int n,f=1,i;
	int *p=&n, *q=&f;
	cout<<"\nEnter the number: "<<endl;
	cin>>n;
	
	for (i=1;i<=*p;i++) {
		*q=*q*i;
	}
	
	cout<<"\nFactorial of "<<*p<<": "<<*q<<endl;
	
return 0;
}
