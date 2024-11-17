#include<iostream>
using namespace std;
int reverse (int *);
int main () {
	int n,t;
	cout<<"\nEnter the number: "<<endl;
	cin>>n;
	t=n;
	cout<<"\nThe reverse of "<<t<<": "<<reverse (&n)<<endl;
	
return 0;
}

int reverse (int *x) {
	int i,rem,rev=0;
	int *p=&rem;
	
	while (*x!=0) {
		*p=*x%10;
		rev=(rev*10)+*p;
		*x=*x/10;
	}
	return rev;
}
