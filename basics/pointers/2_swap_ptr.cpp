#include<iostream>
using namespace std;
int main () {
	int a,b,t;
	int *p=&a, *q=&b;
	cout<<"\nEnter the numbers: "<<endl;
	cin>>a>>b;
	
	cout<<"\nBefore Swapping: "<<*p<<", "<<*q<<endl;
	
	 t=*p;
	*p=*q;
	*q=t;
	
	cout<<"\nAfter swapping: "<<*p<<", "<<*q<<endl;
	
	
return 0;
}
