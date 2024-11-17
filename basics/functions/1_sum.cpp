#include<iostream>
using namespace std;

int sum(int x,int y) {
	int z=x+y;
	return z;
}

int main () {

	int a,b,c;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	
	c=sum(a,b);
	cout<<"\nSum: "<<c<<endl;

return 0;
}
