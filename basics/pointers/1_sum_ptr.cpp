#include<iostream>
using namespace std;
int main () {
	int a,b;
	int *p=&a, *q=&b;
	cout<<"\nEnter the numbers: "<<endl;
	cin>>*p>>*q;
	cout<<"\nSum: "<<*p+*q<<endl;
	
return 0;
}
