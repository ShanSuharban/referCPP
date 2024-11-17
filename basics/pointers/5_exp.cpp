#include<iostream>
using namespace std;
int main () {
	int a,b,s,d,p,q,r;
	int *pa=&a,*pb=&b,*ss,t;
	
	cout<<"\nEnter the number 1: "<<endl;
	cin>>a;
	cout<<"\nEnter the number 2: "<<endl;
	cin>>b;
	
	s = *pa + *pb;
	d = *pa - *pb;
	p = *pa * *pb;
	q = *pa / *pb;
	r = *pa % *pb;
	
	 ss = &t;
	*ss = *pa + *pb;
	
	cout<<"\nSum: "<<s<<endl;
	cout<<"Difference: "<<d<<endl;
	cout<<"Product: "<<p<<endl;
	cout<<"Quotient: "<<q<<endl;
	cout<<"Remainder: "<<r<<endl;
	cout<<"\nSum another way: "<<*ss<<endl;
	
return 0;
}
