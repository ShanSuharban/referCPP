#include<iostream>
using namespace std;

int fact(int x) {
	int i,f=1;
	for (i=x;i>=1;i--) {
		f=f*i;
	}
	return f;
}

int main () {
	int a,f;
	cout<<"Enter the number: "<<endl;
	cin>>a;
	f=fact(a);
	cout<<"factorial of "<<a<<": "<<f<<endl;
	
return 0;
}

