#include<iostream>
using namespace std;

int average(float x, float y, float z) {
	float a = (x+y+z)/3;
	return a;
}

int main () {
	float a,b,c,avg;
	cout<<"Enter three numbers: "<<endl;
	cin>>a>>b>>c;
	avg=average(a,b,c);
	cout<<"\nAverage: "<<avg<<endl;
	
	
return 0;
}
