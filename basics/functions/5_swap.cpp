#include<iostream>
using namespace std;

void swap(int x, int y) {
	int z;
	z=x;
	x=y;
	y=z;
	
	cout<<"\nThe swapped numbers: "<<x<<","<<y<<endl;
}

int main () {
	int a,b;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	swap (a,b);
}


