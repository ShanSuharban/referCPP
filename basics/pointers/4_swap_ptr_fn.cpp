#include<iostream>
using namespace std;

void swap (int *,int *); // function declaration

int main () {
	int a,b;
	cout<<"\nEnter the numbers: "<<endl;
	cin>>a>>b;
	
	cout<<"\nBefore Swapping: "<<a<<", "<<b<<endl;
	swap (&a,&b);
	
return 0;
}

void swap (int *x, int *y) {
	int t;
     t=*x;
	*x=*y;
	 *y=t;
	 
	 cout<<"\nAfter swapping : "<<*x<<", "<<*y<<endl;
	 
}
