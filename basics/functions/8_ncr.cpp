#include<iostream>
using namespace std;

int fact  (int x) {
	int i,f=1;
	for (i=x;i>=1;i--) {
		f=f*i;
	}
	return f;
}

int main () {
	// ncr= (n!)/(r!)*(n-r)!
	int n,r,res; // int a,b,c;
	cout<<"Enter the value of n and r: "<<endl;
	cin>>n>>r;
	res=(fact(n)/(fact(r)*fact(n-r)));
//	a=fact(n);b=fact(r);c=fact(n-r);
//	res=((a)/(b*c));
	cout<<"\nncr: "<<res<<endl;
}

